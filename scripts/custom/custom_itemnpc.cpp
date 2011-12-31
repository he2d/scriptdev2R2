/* ScriptData
SDName: ItemNPC
SD%Complete: 90
SDComment: Custom Currency Vendor
SDCategory: NPC
Author: He2d
EndScriptData */

#include "precompiled.h"
#include "../../../../shared/Config/Config.h"
#include "../../Config.h"
#include "../../../../game/Language.h"

void GiveItem(uint32 itemId, int32 count, Creature* pCreature, Player* pPlayer) 
{     
            uint32 noSpaceForCount = 0; 
            ItemPosCountVec dest; 
            uint8 msg = pPlayer->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest, itemId, count &noSpaceForCount ); 

            if( msg != EQUIP_ERR_OK )                               // convert to possible store amount 
                count -= noSpaceForCount; 

            if( count == 0 || dest.empty())                         // can't add any 
            { 
                pCreature->MonsterSay("Kann Item nicht herstellen.", LANG_UNIVERSAL); 
            } 

            Item* item = pPlayer->StoreNewItem( dest, itemId, true, Item::GenerateItemRandomPropertyId(itemId)); 

            if(count > 0 && item) 
            { 
                pPlayer->SendNewItem(item,count,false,true); 
            } 

            if(noSpaceForCount > 0) 
                pCreature->MonsterSay("Kann Item nicht herstellen.", LANG_UNIVERSAL); 
}  
bool GossipHello_ItemNPC(Player* pPlayer, Creature* pCreature)
{

	{
		pPlayer->ADD_GOSSIP_ITEM( 7, "Test Item 1 - 1 Wertmarke"             , GOSSIP_SENDER_MAIN, 1);
		pPlayer->ADD_GOSSIP_ITEM( 9, "Test Item 2 - 5 Wertmarken"			   , GOSSIP_SENDER_MAIN, 2);
		pPlayer->ADD_GOSSIP_ITEM( 8, "Test Item 3 - 10 Wertmarken"             , GOSSIP_SENDER_MAIN, 3);

	}

    pPlayer->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,pCreature->GetGUID());

return true;
}

void SendDefaultMenu_ItemNPC(Player* pPlayer, Creature* pCreature, uint32 action)

{

// Not allow in combat
if (pPlayer->isInCombat())
{
    pPlayer->CLOSE_GOSSIP_MENU();
    pCreature->MonsterSay("Ihr seid im Kampf!", LANG_UNIVERSAL, NULL);
	return;
}
switch(action)
{

case 1: // Test Item 1
	pPlayer->CLOSE_GOSSIP_MENU();
	pPlayer->DestroyItemCount(210000, 1, true);
	GiveItem(110000, 1, pCreature, pPlayer);
break;

case 2: // Test Item 1
	pPlayer->CLOSE_GOSSIP_MENU();
	pPlayer->DestroyItemCount(210000, 5, true);
	GiveItem(110001, 1, pCreature, pPlayer);
break;

case 3: // Test Item 1
	pPlayer->CLOSE_GOSSIP_MENU();
	pPlayer->DestroyItemCount(210000, 10, true);
	GiveItem(110002, 1, pCreature, pPlayer);
break;

} // end of switch
} //end of function


bool GossipSelect_ItemNPC(Player* pPlayer, Creature* pCreature, uint32 sender, uint32 action)
{
	// Main menu
	if (sender == GOSSIP_SENDER_MAIN)
	SendDefaultMenu_ItemNPC(pPlayer, pCreature, action);

return true;
}

void AddSC_itemnpc()
{
    Script *newscript;

	newscript = new Script;
    newscript->Name = "itemnpc";
    newscript->pGossipHello = &GossipHello_ItemNPC;
    newscript->pGossipSelect = &GossipSelect_ItemNPC;
    newscript->RegisterSelf();
}