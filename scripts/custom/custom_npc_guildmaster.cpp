/* Copyright (C) 2009 - 2010 Project Dark-iCE <http://projectdarkice.clanice.com/>
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* ScriptData
SDName: custom_npc_guildmaster
SD%Complete: 100
SDComment: Guildmaster - Used for Guild Halls
SDCategory: NPC
SDAuthor: Darkiss @ Hellscream Network <http://www.hellscream-wow.com/>
SDTodo: Revamp this script.
EndScriptData */

#include "precompiled.h"

extern DatabaseMysql SD2Database;

#define MSG_GOSSIP_TELE          "Teleport zum Gildenplatz."
#define MSG_GOSSIP_BUY           "Gildenplatz kaufen (15000 Gold)."
#define MSG_GOSSIP_SELL          "Gildenplatz verkaufen (0 Gold). !Nicht ohne GM-Benachrichtigung!"
#define MSG_GOSSIP_NEXTPAGE      "Next -->"
#define MSG_INCOMBAT             "Ihr seid im Kampf."
#define MSG_NOGUILDHOUSE         "Deine Gilde hat noch keinen eigenen Gildenplatz."
#define MSG_NOFREEGH             "Entschuldigung, es ist alles belegt, bitte informiert einen GM."
#define MSG_ALREADYHAVEGH        "Entschuldigung, Ihr besitzt schon einen Gildenplatz."
#define MSG_NOTENOUGHMONEY       "Entschuldigung, Ihr habt nicht genügend Gold."
#define MSG_GHOCCUPIED           "Entschuldigung, aber dieser Gildenplatz ist schon vergeben."
#define MSG_CONGRATULATIONS      "Herzlichen Glückwunsch, zu Eurem eigenen Gildenplatz."
#define MSG_SOLD                 "Du hast den Gildenplatz verkauft, hier ist dein Restgold."
#define MSG_NOTINGUILD           "Ihr seid in keiner Gilde."
#define MSG_HASGUILDHOUSE        "Ihr besitzt schon einen Gildenplatz. Wendet Euch an einen GM."

#define OFFSET_GH_ID_TO_ACTION   1500
#define OFFSET_SHOWBUY_FROM      10000

#define ACTION_TELE              1001
#define ACTION_SHOW_BUYLIST      1002
#define ACTION_SELL_GUILDHOUSE   1003

#define ICON_GOSSIP_BALOON       0
#define ICON_GOSSIP_WING         2
#define ICON_GOSSIP_BOOK         3
#define ICON_GOSSIP_WHEEL1       4
#define ICON_GOSSIP_WHEEL2       5
#define ICON_GOSSIP_GOLD         6
#define ICON_GOSSIP_BALOONDOTS   7
#define ICON_GOSSIP_TABARD       8
#define ICON_GOSSIP_XSWORDS      9

#define COST_GH_BUY              150000000  //15000 G.
#define COST_GH_SELL             0   //5000 G.

#define GOSSIP_COUNT_MAX         10

bool isPlayerGuildLeader(Player *player)
{
	return (player->GetRank() == 0) && (player->GetGuildId() != 0);
}

bool getGuildHouseCoords(uint32 guildId, float &x, float &y, float &z, uint32 &map)
{
	if (guildId == 0)
	{
		//if player has no guild
		return false;
	}

	QueryResult *result;
	result = SD2Database.PQuery("SELECT `x`, `y`, `z`, `map` FROM `guildhalls` WHERE `guildId` = %u", guildId);
	if(result)
	{
		Field *fields = result->Fetch();
		x = fields[0].GetFloat();
		y = fields[1].GetFloat();
		z = fields[2].GetFloat();
		map = fields[3].GetUInt32();
		delete result;
		return true;
	}
	return false;
}

void teleportPlayerToGuildHouse(Player *player, Creature *_creature)
{
	if (player->GetGuildId() == 0)
	{
		//if player has no guild
		_creature->MonsterSay(MSG_NOTINGUILD, LANG_UNIVERSAL);
		return;
	}

	if(player->IsInCombat())
	{
		//if player in combat
		_creature->MonsterSay(MSG_INCOMBAT, LANG_UNIVERSAL);
		return;
	}

	float x, y, z;
	uint32 map;

	if (getGuildHouseCoords(player->GetGuildId(), x, y, z, map))
	{
		//teleport player to the specified location
		player->TeleportTo(map, x, y, z, 0.0f);
	}
	else
		_creature->MonsterSay(MSG_NOGUILDHOUSE, LANG_UNIVERSAL);

}

bool showBuyList(Player *player, Creature *_creature, uint32 showFromId = 0)
{
	//show not occupied guildhalls

	QueryResult *result;
	result = SD2Database.PQuery("SELECT `id`, `comment` FROM `guildhalls` WHERE `guildId` = 0 AND `id` > %u ORDER BY `id` ASC LIMIT %u", showFromId, GOSSIP_COUNT_MAX);

	if (result)
	{
		uint32 guildhouseId = 0;
		std::string comment = "";
		do
		{

			Field *fields = result->Fetch();

			guildhouseId = fields[0].GetInt32();
			comment = fields[1].GetString();
			
			//send comment as a gossip item
			//transmit guildhouseId in Action variable
			player->ADD_GOSSIP_ITEM(ICON_GOSSIP_TABARD, comment, GOSSIP_SENDER_MAIN,
				guildhouseId + OFFSET_GH_ID_TO_ACTION);

		} while (result->NextRow());

		if (result->GetRowCount() == GOSSIP_COUNT_MAX)
		{
			//assume that we have additional page
			//add link to next GOSSIP_COUNT_MAX items
			player->ADD_GOSSIP_ITEM(ICON_GOSSIP_BALOONDOTS, MSG_GOSSIP_NEXTPAGE, GOSSIP_SENDER_MAIN, 
				guildhouseId + OFFSET_SHOWBUY_FROM);
		}

		delete result;

		player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());

		return true;
	}
    else
	{
		if (showFromId = 0)
		{
			//all guildhalls are occupied
			_creature->MonsterSay(MSG_NOFREEGH, LANG_UNIVERSAL);
			player->CLOSE_GOSSIP_MENU();
		}
        else
		{
			//this condition occurs when COUNT(guildhalls) % GOSSIP_COUNT_MAX == 0
			//just show GHs from beginning
			showBuyList(player, _creature, 0);
		}
	}
	return false;
}

bool isPlayerHasGuildhouse(Player *player, Creature *_creature, bool whisper = false)
{

	QueryResult *result;

	result = SD2Database.PQuery("SELECT `comment` FROM `guildhalls` WHERE `guildId` = %u", player->GetGuildId());

	if (result)
	{
		if (whisper)
		{
			//whisper to player "already have etc..."
			Field *fields = result->Fetch();
			char msg[100];
			sprintf(msg, MSG_ALREADYHAVEGH, fields[0].GetString());
			_creature->MonsterSay(msg, LANG_UNIVERSAL);
		}
		delete result;
		return true;
	}
	return false;
}

void buyGuildhouse(Player *player, Creature *_creature, uint32 guildhouseId)
{
	if (player->GetMoney() < COST_GH_BUY)
	{
		//show how much money player need to buy GH (in gold)
		char msg[100];
		sprintf(msg, MSG_NOTENOUGHMONEY, COST_GH_BUY / 10000);
		_creature->MonsterSay(msg, LANG_UNIVERSAL);
		return;
	}

	if (isPlayerHasGuildhouse(player, _creature, true))
	{
		//show how much money player need to buy GH (in gold)
		char msg[100];
		sprintf(msg, MSG_HASGUILDHOUSE);
		_creature->MonsterSay(msg, LANG_UNIVERSAL);
		return;
	}

	QueryResult *result;

	//check if somebody already occupied this GH
	result = SD2Database.PQuery("SELECT `id` FROM `guildhalls` WHERE `id` = %u AND `guildId` <> 0", guildhouseId);

	if (result)
	{
		delete result;
		_creature->MonsterSay(MSG_GHOCCUPIED, LANG_UNIVERSAL);
		return;
	}

	//update DB
	result = SD2Database.PQuery("UPDATE `guildhalls` SET `guildId` = %u WHERE `id` = %u", player->GetGuildId(), guildhouseId);

	if (result)
		delete result;

	player->ModifyMoney(-COST_GH_BUY);
	_creature->MonsterSay(MSG_CONGRATULATIONS, LANG_UNIVERSAL);
	
}

void sellGuildhouse(Player *player, Creature *_creature)
{
	if (isPlayerHasGuildhouse(player, _creature))
	{
		QueryResult *result;

		result = SD2Database.PQuery("UPDATE `guildhalls` SET `guildId` = 0 WHERE `guildId` = %u", player->GetGuildId());
		
		if (result)
			delete result;

		player->ModifyMoney(COST_GH_SELL);

		//display message e.g. "here your money etc."
		char msg[100];
		sprintf(msg, MSG_SOLD, COST_GH_SELL / 10000);
		_creature->MonsterSay(msg, LANG_UNIVERSAL);
	}
}

bool GossipHello_custom_npc_guildmaster(Player *player, Creature *_creature)
{
	player->ADD_GOSSIP_ITEM(ICON_GOSSIP_BALOON, MSG_GOSSIP_TELE, GOSSIP_SENDER_MAIN, ACTION_TELE);

	if (isPlayerGuildLeader(player))
	{
		//show additional menu for guild leader
		player->ADD_GOSSIP_ITEM(ICON_GOSSIP_GOLD, MSG_GOSSIP_BUY, GOSSIP_SENDER_MAIN, ACTION_SHOW_BUYLIST);
		if (isPlayerHasGuildhouse(player, _creature))
		{
			//and additional for guildhouse owner
			player->PlayerTalkClass->GetGossipMenu().AddMenuItem(ICON_GOSSIP_GOLD, MSG_GOSSIP_SELL, GOSSIP_SENDER_MAIN, ACTION_SELL_GUILDHOUSE, 0, false);
		}
	}
	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _creature->GetGUID());
	return true;
}

bool GossipSelect_custom_npc_guildmaster(Player *player, Creature *_creature, uint32 sender, uint32 action )
{
	if (sender != GOSSIP_SENDER_MAIN)
		return false;

	switch (action)
	{
		case ACTION_TELE:
			//teleport player to GH
			player->CLOSE_GOSSIP_MENU();
			teleportPlayerToGuildHouse(player, _creature);
			break;
		case ACTION_SHOW_BUYLIST:
			//show list of GHs which currently not occupied
			showBuyList(player, _creature);
			break;
		case ACTION_SELL_GUILDHOUSE:
			sellGuildhouse(player, _creature);
			player->CLOSE_GOSSIP_MENU();
			break;
		default:
			if (action > OFFSET_SHOWBUY_FROM)
			{
				showBuyList(player, _creature, action - OFFSET_SHOWBUY_FROM);
			}
            else if (action > OFFSET_GH_ID_TO_ACTION)
			{
				//player clicked on buy list
				player->CLOSE_GOSSIP_MENU();
				//get guildhouseId from action
				//guildhouseId = action - OFFSET_GH_ID_TO_ACTION
				buyGuildhouse(player, _creature, action - OFFSET_GH_ID_TO_ACTION);
			}
			break;
	}
	return true;
}

void AddSC_custom_npc_guildmaster()
{
	Script *newscript;
	newscript                   = new Script;
	newscript->Name             = "custom_npc_guildmaster";
	newscript->pGossipHello     = &GossipHello_custom_npc_guildmaster;
	newscript->pGossipSelect    = &GossipSelect_custom_npc_guildmaster;
	newscript->RegisterSelf();
}