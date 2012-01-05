/* ScriptData
SDName: CUSTOM REWARD NPC
SD%Complete: ??
SDComment: TEST Custom Reward NPC
SDCategory: NPC
Author: HE2D|DEV
EndScriptData */

#include "precompiled.h"
#include "../../../../shared/Config/Config.h"
#include "../../Config.h"
#include "../../../../game/Language.h"
#include "Database/DatabaseEnv.h"

bool GossipHello_custom_he2d_reward_npc(Player *player, Creature *_Creature)
{
	//Some examples of what can be done: visible menu
    player->ADD_GOSSIP_ITEM( 2, "MOUNTS"							, GOSSIP_SENDER_MAIN, 1000);
    player->ADD_GOSSIP_ITEM( 3, "MATS"								, GOSSIP_SENDER_MAIN, 2000);
    player->ADD_GOSSIP_ITEM( 7, "PETS"								, GOSSIP_SENDER_MAIN, 3000);
    player->ADD_GOSSIP_ITEM( 10, "FREE"								, GOSSIP_SENDER_MAIN, 4000);
    player->ADD_GOSSIP_ITEM( 10, "INVENTORY"						, GOSSIP_SENDER_MAIN, 5000);

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
    return true;
}

void SendDefaultMenu_custom_he2d_reward_npc(Player *player, Creature *_Creature, uint32 action )
{
	if(player->IsInCombat())
    {
        player->CLOSE_GOSSIP_MENU();
        _Creature->MonsterSay("Du befindest dich im Kampf!", LANG_UNIVERSAL);
        return;
    }

	if (player->getLevel() < 80)
    {
         player->CLOSE_GOSSIP_MENU();
        _Creature->MonsterSay("Du muss Level 80 sein!", LANG_UNIVERSAL);
        return;
    }

    switch(action)
    {
		case 6000:
		{
			player->ADD_GOSSIP_ITEM( 2, "MOUNTS"							, GOSSIP_SENDER_MAIN, 1000);
			player->ADD_GOSSIP_ITEM( 3, "MATS"								, GOSSIP_SENDER_MAIN, 2000);
			player->ADD_GOSSIP_ITEM( 7, "PETS"								, GOSSIP_SENDER_MAIN, 3000);
			player->ADD_GOSSIP_ITEM( 10, "FREE"								, GOSSIP_SENDER_MAIN, 4000);
			player->ADD_GOSSIP_ITEM( 10, "INVENTORY"								, GOSSIP_SENDER_MAIN, 5000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 1000:
		{
			player->ADD_GOSSIP_ITEM( 2, "MOUNTS"							, GOSSIP_SENDER_MAIN, 1100);
			player->ADD_GOSSIP_ITEM( 2, "FLYMOUNTS"							, GOSSIP_SENDER_MAIN, 1200);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"						, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 1100:
		{
			player->ADD_GOSSIP_ITEM( 2, "MOUNT 1"							, GOSSIP_SENDER_MAIN, 1101);
			player->ADD_GOSSIP_ITEM( 2, "MOUNT 2"							, GOSSIP_SENDER_MAIN, 1102);
			player->ADD_GOSSIP_ITEM( 2, "MOUNT 3"							, GOSSIP_SENDER_MAIN, 1103);
			player->ADD_GOSSIP_ITEM( 2, "MOUNT 4"							, GOSSIP_SENDER_MAIN, 1104);
			player->ADD_GOSSIP_ITEM( 2, "MOUNT 5"							, GOSSIP_SENDER_MAIN, 1105);
			player->ADD_GOSSIP_ITEM( 2, "MOUNT 6"							, GOSSIP_SENDER_MAIN, 1106);
			player->ADD_GOSSIP_ITEM( 4, "[BACK]"							, GOSSIP_SENDER_MAIN, 1000);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"						, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 1200:
		{
			player->ADD_GOSSIP_ITEM( 2, "FLYMOUNT 1"							, GOSSIP_SENDER_MAIN, 1201);
			player->ADD_GOSSIP_ITEM( 2, "FLYMOUNT 2"							, GOSSIP_SENDER_MAIN, 1202);
			player->ADD_GOSSIP_ITEM( 2, "FLYMOUNT 3"							, GOSSIP_SENDER_MAIN, 1203);
			player->ADD_GOSSIP_ITEM( 2, "FLYMOUNT 4"							, GOSSIP_SENDER_MAIN, 1204);
			player->ADD_GOSSIP_ITEM( 4, "[BACK]"								, GOSSIP_SENDER_MAIN, 1000);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"							, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 2000:
		{
			player->ADD_GOSSIP_ITEM( 3, "MAT 1"							, GOSSIP_SENDER_MAIN, 2001);
			player->ADD_GOSSIP_ITEM( 3, "MAT 2"							, GOSSIP_SENDER_MAIN, 2002);
			player->ADD_GOSSIP_ITEM( 3, "MAT 3"							, GOSSIP_SENDER_MAIN, 2003);
			player->ADD_GOSSIP_ITEM( 3, "MAT 4"							, GOSSIP_SENDER_MAIN, 2004);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"					, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;
		
		case 3000:
		{
			player->ADD_GOSSIP_ITEM( 7, "PET 1"							, GOSSIP_SENDER_MAIN, 3001);
			player->ADD_GOSSIP_ITEM( 7, "PET 2"							, GOSSIP_SENDER_MAIN, 3002);
			player->ADD_GOSSIP_ITEM( 7, "PET 3"							, GOSSIP_SENDER_MAIN, 3003);
			player->ADD_GOSSIP_ITEM( 7, "PET 4"							, GOSSIP_SENDER_MAIN, 3004);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"					, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;
		
		case 4000:
		{
			player->ADD_GOSSIP_ITEM( 10, "1"							, GOSSIP_SENDER_MAIN, 4001);
			player->ADD_GOSSIP_ITEM( 10, "2"							, GOSSIP_SENDER_MAIN, 4002);
			player->ADD_GOSSIP_ITEM( 10, "3"							, GOSSIP_SENDER_MAIN, 4003);
			player->ADD_GOSSIP_ITEM( 10, "4"							, GOSSIP_SENDER_MAIN, 4004);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"					, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;
		
		case 5000:
		{
			//player->CLOSE_GOSSIP_MENU();
			player->ADD_GOSSIP_ITEM( 10, "ANZEIGEN"						, GOSSIP_SENDER_MAIN, 5001);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"					, GOSSIP_SENDER_MAIN, 6000);

			//player->SEND_GOSSIP_MENU(_Creature->GetNpcTextId(), _Creature->GetGUID());
		}
		break;

		case 5001: // EIGENES INVENTAR ANZEIGEN
        {
			//player->CLOSE_GOSSIP_MENU();
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"					, GOSSIP_SENDER_MAIN, 6000);
            player->SEND_VENDORLIST(_Creature->GetGUID());
		}
        break;
	}

}

bool GossipSelect_custom_he2d_reward_npc(Player *player, Creature *_Creature, uint32 sender, uint32 action )
{
    // Main menu
    if (sender == GOSSIP_SENDER_MAIN)
    {
        player->PlayerTalkClass->ClearMenus();
        SendDefaultMenu_custom_he2d_reward_npc(player, _Creature, action   );
    }
    return true;
}

void AddSC_custom_he2d_reward_npc()
{
    Script *newscript;

    newscript = new Script;
    newscript->Name = "custom_he2d_reward_npc";
    newscript->pGossipHello = &GossipHello_custom_he2d_reward_npc;
    newscript->pGossipSelect = &GossipSelect_custom_he2d_reward_npc;
    newscript->pItemUse = NULL;
    newscript->pGossipHelloGO = NULL;
    newscript->pAreaTrigger = NULL;
    newscript->pQuestAcceptItem = NULL;
    newscript->pQuestAcceptGO = NULL;
    newscript->pQuestRewardedGO = NULL;
    newscript->RegisterSelf();
}
