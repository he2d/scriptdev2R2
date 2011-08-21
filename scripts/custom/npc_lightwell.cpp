/* Copyright (C) 2009 - 2011 CrÄnkland-Project <http://craenkland.de/>
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
SDName: npc_lightwell
SD%Complete: 100%?
SDComment: npc lightwell for player
SDCategory: NPC
SDAuthor: He2d | DEV <admin@craenkland.de>
SDTodo: ???
EndScriptData */

#include "precompiled.h"

/*######
## npc_lightwell
######*/

enum
{
	NPC_LIGHTWELL_RANK_1				= 31897,
	SPELL_LIGHTWELL_RENEW_RANK_1		= 7001,
	NPC_LIGHTWELL_RANK_2				= 31896,
	SPELL_LIGHTWELL_RENEW_RANK_2		= 27873,
	NPC_LIGHTWELL_RANK_3				= 31895,
	SPELL_LIGHTWELL_RENEW_RANK_3		= 27874,
	NPC_LIGHTWELL_RANK_4				= 31894,
	SPELL_LIGHTWELL_RENEW_RANK_4		= 28276,
	NPC_LIGHTWELL_RANK_5				= 31893,
	SPELL_LIGHTWELL_RENEW_RANK_5		= 48084,
	NPC_LIGHTWELL_RANK_6				= 31883,
	SPELL_LIGHTWELL_RENEW_RANK_6		= 48085,
	LIGHTWELL_MAX_CAST_COUNT			= 10,
};

uint8 castcount = 0;

bool GossipHello_npc_lightwell(Player* pPlayer, Creature* pCreature)
{
	pPlayer->CLOSE_GOSSIP_MENU();

	switch (pCreature->GetEntry())
	{
		case NPC_LIGHTWELL_RANK_1:
			pCreature->CastSpell(pPlayer, SPELL_LIGHTWELL_RENEW_RANK_1, true);
			++castcount;
			break;
		case NPC_LIGHTWELL_RANK_2:
			pCreature->CastSpell(pPlayer, SPELL_LIGHTWELL_RENEW_RANK_2, true);
			++castcount;
			break;
		case NPC_LIGHTWELL_RANK_3:
			pCreature->CastSpell(pPlayer, SPELL_LIGHTWELL_RENEW_RANK_3, true);
			++castcount;
			break;
		case NPC_LIGHTWELL_RANK_4:
			pCreature->CastSpell(pPlayer, SPELL_LIGHTWELL_RENEW_RANK_4, true);
			++castcount;
			break;
		case NPC_LIGHTWELL_RANK_5:
			pCreature->CastSpell(pPlayer, SPELL_LIGHTWELL_RENEW_RANK_5, true);
			++castcount;
			break;
		case NPC_LIGHTWELL_RANK_6:
			pCreature->CastSpell(pPlayer, SPELL_LIGHTWELL_RENEW_RANK_6, true);
			++castcount;
			break;
	}

	if (castcount == LIGHTWELL_MAX_CAST_COUNT)
	{
		castcount = 0;
		pCreature->ForcedDespawn();
		return true;
	}

    return true;
}

void AddSC_npc_lightwell()
{
	Script *newscript;

    newscript = new Script;
    newscript->Name = "npc_lightwell";
    newscript->pGossipHello =  &GossipHello_npc_lightwell;
    newscript->RegisterSelf();
}