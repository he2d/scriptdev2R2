/* ScriptData
SDName: CUSTOM REWARD NPC
SD%Complete: ??
SDComment: TEST Custom Reward NPC
SDCategory: NPC
Author: HE2D|DEV
EndScriptData */

#include "precompiled.h"

bool GossipHello_custom_he2d_reward_npc(Player *player, Creature *_Creature)
{
	// NPC visible menu
    player->ADD_GOSSIP_ITEM( 2, "MOUNTS"							, GOSSIP_SENDER_MAIN, 1000);
    player->ADD_GOSSIP_ITEM( 3, "MATS"								, GOSSIP_SENDER_MAIN, 2000);
    player->ADD_GOSSIP_ITEM( 7, "PETS"								, GOSSIP_SENDER_MAIN, 3000);
    player->ADD_GOSSIP_ITEM( 10, "FREE"								, GOSSIP_SENDER_MAIN, 4000);
    player->ADD_GOSSIP_ITEM( 10, "FREE"								, GOSSIP_SENDER_MAIN, 5000);

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
    return true;
}

void SendDefaultMenu_custom_he2d_reward_npc(Player *player, Creature *_Creature, uint32 action )
{
	Item* item;
    ItemPosCountVec dest;
    uint32 noSpaceForCount = 0;
	int32 count = 0;
    uint32 itemId = 210000; // CrÄnkland Wertmarken ID
    uint8 msg = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest, itemId, count, &noSpaceForCount );

    //1 Reward
    ItemPosCountVec dest1;
    uint32 itemId1 = 23162; // TEST mit Forors Kiste 100% complete it works
    int32 count1 = 1;
    uint8 msg1 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest1, itemId1, count1, &noSpaceForCount );
	
	//2 Reward
    ItemPosCountVec dest2;
    uint32 itemId2 = 0;
    int32 count2 = 1;
    uint8 msg2 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest2, itemId2, count2, &noSpaceForCount );
	
	//3 Reward
    ItemPosCountVec dest3;
    uint32 itemId3= 0;
    int32 count3 = 1;
    uint8 msg3 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest3, itemId3, count3, &noSpaceForCount );

	//4 Reward
    ItemPosCountVec dest4;
    uint32 itemId4 = 0;
    int32 count4 = 1;
    uint8 msg4 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest4, itemId4, count4, &noSpaceForCount );

	//5 Reward
    ItemPosCountVec dest5;
    uint32 itemId5 = 0;
    int32 count5 = 1;
    uint8 msg5 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest5, itemId5, count5, &noSpaceForCount );

	//6 Reward
    ItemPosCountVec dest6;
    uint32 itemId6 = 0;
    int32 count6 = 1;
    uint8 msg6 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest6, itemId6, count6, &noSpaceForCount );

	//7 Reward
    ItemPosCountVec dest7;
    uint32 itemId7 = 0;
    int32 count7 = 1;
    uint8 msg7 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest7, itemId7, count7, &noSpaceForCount );

	//8 Reward
    ItemPosCountVec dest8;
    uint32 itemId8 = 0;
    int32 count8 = 1;
    uint8 msg8 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest8, itemId8, count8, &noSpaceForCount );

	//9 Reward
    ItemPosCountVec dest9;
    uint32 itemId9 = 0;
    int32 count9 = 1;
    uint8 msg9 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest9, itemId9, count9, &noSpaceForCount );

	//10 Reward
    ItemPosCountVec dest10;
    uint32 itemId10 = 0;
    int32 count10 = 1;
    uint8 msg10 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest10, itemId10, count10, &noSpaceForCount );

	//11 Reward
    ItemPosCountVec dest11;
    uint32 itemId11 = 0;
    int32 count11 = 1;
    uint8 msg11 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest11, itemId11, count11, &noSpaceForCount );

	//12 Reward
    ItemPosCountVec dest12;
    uint32 itemId12 = 0;
    int32 count12 = 1;
    uint8 msg12 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest12, itemId12, count12, &noSpaceForCount );

	//13 Reward
    ItemPosCountVec dest13;
    uint32 itemId13 = 0;
    int32 count13 = 1;
    uint8 msg13 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest13, itemId13, count13, &noSpaceForCount );

	//14 Reward
    ItemPosCountVec dest14;
    uint32 itemId14 = 0;
    int32 count14 = 1;
    uint8 msg14 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest14, itemId14, count14, &noSpaceForCount );

	//15 Reward
    ItemPosCountVec dest15;
    uint32 itemId15 = 0;
    int32 count15 = 1;
    uint8 msg15 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest15, itemId15, count15, &noSpaceForCount );

	//16 Reward
    ItemPosCountVec dest16;
    uint32 itemId16 = 0;
    int32 count16 = 1;
    uint8 msg16 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest16, itemId16, count16, &noSpaceForCount );

	//17 Reward
    ItemPosCountVec dest17;
    uint32 itemId17 = 0;
    int32 count17 = 1;
    uint8 msg17 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest17, itemId17, count17, &noSpaceForCount );

	//18 Reward
    ItemPosCountVec dest18;
    uint32 itemId18 = 0;
    int32 count18 = 1;
    uint8 msg18 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest18, itemId18, count18, &noSpaceForCount );

	//19 Reward
    ItemPosCountVec dest19;
    uint32 itemId19 = 0;
    int32 count19 = 1;
    uint8 msg19 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest19, itemId19, count19, &noSpaceForCount );

	//20 Reward
    ItemPosCountVec dest20;
    uint32 itemId20 = 0;
    int32 count20 = 1;
    uint8 msg20 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest20, itemId20, count20, &noSpaceForCount );

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
			player->ADD_GOSSIP_ITEM( 10, "FREE"								, GOSSIP_SENDER_MAIN, 5000);

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
			player->ADD_GOSSIP_ITEM( 2, "Mount 1"							, GOSSIP_SENDER_MAIN, 1101);
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
			player->ADD_GOSSIP_ITEM( 10, "1"							, GOSSIP_SENDER_MAIN, 5001);
			player->ADD_GOSSIP_ITEM( 10, "2"							, GOSSIP_SENDER_MAIN, 5002);
			player->ADD_GOSSIP_ITEM( 10, "3"							, GOSSIP_SENDER_MAIN, 5003);
			player->ADD_GOSSIP_ITEM( 10, "4"							, GOSSIP_SENDER_MAIN, 5004);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"					, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 1101:		//TESTSCRIPT
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
                    count1 -= noSpaceForCount;

                if( count1 == 0 || dest.empty())
                {
                    player->CLOSE_GOSSIP_MENU();
                    _Creature->MonsterSay("Error: Item count set to 0. Please inform a GM about this error.", player->GetGUID());
                }

                item = player->StoreNewItem( dest1, itemId1, true, Item::GenerateItemRandomPropertyId(itemId1));

                if(count2 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count1,false,true);
                    player->DestroyItemCount(210000, 25, true);
                }

                if(noSpaceForCount > 0)
                {
                    player->CLOSE_GOSSIP_MENU();
                    _Creature->MonsterSay("Kein Platz im Rucksack!", player->GetGUID());
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug CrÄnkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
	}

}

bool GossipSelect_custom_he2d_reward_npc(Player *player, Creature *_Creature, uint32 sender, uint32 action )
{
    // Main menu clear
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
