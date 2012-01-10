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
    player->ADD_GOSSIP_ITEM( 2, "MOUNTS"										, GOSSIP_SENDER_MAIN, 1000);
    player->ADD_GOSSIP_ITEM( 3, "MATS"											, GOSSIP_SENDER_MAIN, 2000);
    player->ADD_GOSSIP_ITEM( 7, "PETS"											, GOSSIP_SENDER_MAIN, 3000);
    //player->ADD_GOSSIP_ITEM( 10, "FREE"											, GOSSIP_SENDER_MAIN, 4000);
    //player->ADD_GOSSIP_ITEM( 10, "FREE"											, GOSSIP_SENDER_MAIN, 5000);

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

	//MOUNTS   1-6
    //1 Zügel des schnellen Spektraltigers
    ItemPosCountVec dest1;
    uint32 itemId1 = 49284;
    int32 count1 = 1;
    uint8 msg1 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest1, itemId1, count1, &noSpaceForCount );
	
	//2 Großer Kampfbär
    ItemPosCountVec dest2;
    uint32 itemId2 = 49282;
    int32 count2 = 1;
    uint8 msg2 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest2, itemId2, count2, &noSpaceForCount );
	
	//3 Magisches Hühnerei
    ItemPosCountVec dest3;
    uint32 itemId3= 49290;
    int32 count3 = 1;
    uint8 msg3 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest3, itemId3, count3, &noSpaceForCount );

	//4 Weißes Wollrhinozeros
    ItemPosCountVec dest4;
    uint32 itemId4 = 54068;
    int32 count4 = 1;
    uint8 msg4 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest4, itemId4, count4, &noSpaceForCount );

	//5 Pfeife des kleinen elfenbeinfarbenen Raptors HORDE
    ItemPosCountVec dest5;
    uint32 itemId5 = 49288;
    int32 count5 = 1;
    uint8 msg5 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest5, itemId5, count5, &noSpaceForCount );

	//6 Zaumzeug des kleinen Schimmels ALLIANZ
    ItemPosCountVec dest6;
    uint32 itemId6 = 49289;
    int32 count6 = 1;
    uint8 msg6 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest6, itemId6, count6, &noSpaceForCount );

	//FLYMOUNTS  7-11
	//7 Flammender Hippogryph
    ItemPosCountVec dest7;
    uint32 itemId7 = 54069;
    int32 count7 = 1;
    uint8 msg7 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest7, itemId7, count7, &noSpaceForCount );

	//8 Himmelsross
    ItemPosCountVec dest8;
    uint32 itemId8 = 54811;
    int32 count8 = 1;
    uint8 msg8 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest8, itemId8, count8, &noSpaceForCount );

	//9 X-51 Netherrakete
    ItemPosCountVec dest9;
    uint32 itemId9 = 49285;
    int32 count9 = 1;
    uint8 msg9 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest9, itemId9, count9, &noSpaceForCount );

	//10 X-51 Netherrakete X-TREM
    ItemPosCountVec dest10;
    uint32 itemId10 = 49286;
    int32 count10 = 1;
    uint8 msg10 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest10, itemId10, count10, &noSpaceForCount );

	//11 X-53 Reiserakete
    ItemPosCountVec dest11;
    uint32 itemId11 = 54860;
    int32 count11 = 1;
    uint8 msg11 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest11, itemId11, count11, &noSpaceForCount );
	
	//MATS   12-14
	//12 Gefrorene Kugel
    ItemPosCountVec dest12;
    uint32 itemId12 = 43102;
    int32 count12 = 1;
    uint8 msg12 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest12, itemId12, count12, &noSpaceForCount );

	//13 Kugel des Kreuzfahrers
    ItemPosCountVec dest13;
    uint32 itemId13 = 47556;
    int32 count13 = 1;
    uint8 msg13 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest13, itemId13, count13, &noSpaceForCount );

	//14 Urtümliches Saronit
    ItemPosCountVec dest14;
    uint32 itemId14 = 49908;
    int32 count14 = 1;
    uint8 msg14 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest14, itemId14, count14, &noSpaceForCount );

	//PETS  15-39
	//15 Zerglinglasso
    ItemPosCountVec dest15;
    uint32 itemId15 = 13582;
    int32 count15 = 1;
    uint8 msg15 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest15, itemId15, count15, &noSpaceForCount );

	//16 Pandahalsband
    ItemPosCountVec dest16;
    uint32 itemId16 = 13583;
    int32 count16 = 1;
    uint8 msg16 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest16, itemId16, count16, &noSpaceForCount );

	//17 Diablostein
    ItemPosCountVec dest17;
    uint32 itemId17 = 13584;
    int32 count17 = 1;
    uint8 msg17 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest17, itemId17, count17, &noSpaceForCount );

	//18 Blaues Murlocei
    ItemPosCountVec dest18;
    uint32 itemId18 = 20371;
    int32 count18 = 1;
    uint8 msg18 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest18, itemId18, count18, &noSpaceForCount );

	//19 Rosa Murlocei
    ItemPosCountVec dest19;
    uint32 itemId19 = 22114;
    int32 count19 = 1;
    uint8 msg19 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest19, itemId19, count19, &noSpaceForCount );

	//20 Hippogryphenjunges
    ItemPosCountVec dest20;
    uint32 itemId20 = 23713;
    int32 count20 = 1;
    uint8 msg20 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest20, itemId20, count20, &noSpaceForCount );

	//21 Netherwelpenhalsband
    ItemPosCountVec dest21;
    uint32 itemId21 = 25535;
    int32 count21 = 1;
    uint8 msg21 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest21, itemId21, count21, &noSpaceForCount );

	//22 Lurkys Ei
    ItemPosCountVec dest22;
    uint32 itemId22 = 30360;
    int32 count22 = 1;
    uint8 msg22 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest22, itemId22, count22, &noSpaceForCount );

	//23 Glückstaler
    ItemPosCountVec dest23;
    uint32 itemId23 = 32498;
    int32 count23 = 1;
    uint8 msg23 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest23, itemId23, count23, &noSpaceForCount );

	//24 Glücksbanane
    ItemPosCountVec dest24;
    uint32 itemId24 = 32588;
    int32 count24 = 1;
    uint8 msg24 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest24, itemId24, count24, &noSpaceForCount );

	//25 Raketenhühnchen
    ItemPosCountVec dest25;
    uint32 itemId25 = 34492;
    int32 count25 = 1;
    uint8 msg25 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest25, itemId25, count25, &noSpaceForCount );

	//26 Papierdrachen
    ItemPosCountVec dest26;
    uint32 itemId26 = 34493;
    int32 count26 = 1;
    uint8 msg26 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest26, itemId26, count26, &noSpaceForCount );

	//27 Wunschwettermaschine - Prototyp 01-B
    ItemPosCountVec dest27;
    uint32 itemId27 = 35227;
    int32 count27 = 1;
    uint8 msg27 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest27, itemId27, count27, &noSpaceForCount );

	//28 Leuchtsignal des Seelenhändlers
    ItemPosCountVec dest28;
    uint32 itemId28 = 38050;
    int32 count28 = 1;
    uint8 msg28 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest28, itemId28, count28, &noSpaceForCount );

	//29 Frostis Halsband
    ItemPosCountVec dest29;
    uint32 itemId29 = 39286;
    int32 count29 = 1;
    uint8 msg29 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest29, itemId29, count29, &noSpaceForCount );

	//30 Tyraels Schwertgriff
    ItemPosCountVec dest30;
    uint32 itemId30 = 39656;
    int32 count30 = 1;
    uint8 msg30 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest30, itemId30, count30, &noSpaceForCount );

	//31 Schweres Murlocei
    ItemPosCountVec dest31;
    uint32 itemId31 = 46802;
    int32 count31 = 1;
    uint8 msg31 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest31, itemId31, count31, &noSpaceForCount );

	//32 Tuskarrdrachen
    ItemPosCountVec dest32;
    uint32 itemId32 = 49287;
    int32 count32 = 1;
    uint8 msg32 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest32, itemId32, count32, &noSpaceForCount );

	//33 Spektraltigerjunges
    ItemPosCountVec dest33;
    uint32 itemId33 = 49343;
    int32 count33 = 1;
    uint8 msg33 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest33, itemId33, count33, &noSpaceForCount );

	//34 Greifenküken
    ItemPosCountVec dest34;
    uint32 itemId34 = 49662;
    int32 count34 = 1;
    uint8 msg34 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest34, itemId34, count34, &noSpaceForCount );

	//35 Windreiterjunges
    ItemPosCountVec dest35;
    uint32 itemId35 = 49663;
    int32 count35 = 1;
    uint8 msg35 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest35, itemId35, count35, &noSpaceForCount );

	//36 Pandarenmönch
    ItemPosCountVec dest36;
    uint32 itemId36 = 49665;
    int32 count36 = 1;
    uint8 msg36 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest36, itemId36, count36, &noSpaceForCount );

	//37 Kleines Phylakterium
    ItemPosCountVec dest37;
    uint32 itemId37 = 49693;
    int32 count37 = 1;
    uint8 msg37 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest37, itemId37, count37, &noSpaceForCount );

	//38 XT der Kleine
    ItemPosCountVec dest38;
    uint32 itemId38 = 54847;
    int32 count38 = 1;
    uint8 msg38 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest38, itemId38, count38, &noSpaceForCount );

	//39 Mini-Thor
    ItemPosCountVec dest39;
    uint32 itemId39 = 56806;
    int32 count39 = 1;
    uint8 msg39 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest39, itemId39, count39, &noSpaceForCount );
	
	//40 Blizzard Bär
    ItemPosCountVec dest40;
    uint32 itemId40 = 43599;
    int32 count40 = 1;
    uint8 msg40 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest40, itemId40, count40, &noSpaceForCount );
	
	//41 Blizzardbärenbaby
    ItemPosCountVec dest41;
    uint32 itemId41 = 44819;
    int32 count41 = 1;
    uint8 msg41 = player->CanStoreNewItem( NULL_BAG, NULL_SLOT, dest41, itemId41, count41, &noSpaceForCount );
	
	if(player->IsInCombat())
    {
        player->CLOSE_GOSSIP_MENU();
        _Creature->MonsterSay("Du befindest dich im Kampf!", LANG_UNIVERSAL);
        return;
    }

	if (player->getLevel() < 70)
    {
         player->CLOSE_GOSSIP_MENU();
        _Creature->MonsterSay("Du muss Level 70 sein!", LANG_UNIVERSAL);
        return;
    }

    switch(action)
    {
		case 6000:
		{
			player->ADD_GOSSIP_ITEM( 2, "MOUNTS"								, GOSSIP_SENDER_MAIN, 1000);
			player->ADD_GOSSIP_ITEM( 3, "MATS"									, GOSSIP_SENDER_MAIN, 2000);
			player->ADD_GOSSIP_ITEM( 7, "PETS"									, GOSSIP_SENDER_MAIN, 3000);
			//player->ADD_GOSSIP_ITEM( 10, "FREE"								, GOSSIP_SENDER_MAIN, 4000);
			//player->ADD_GOSSIP_ITEM( 10, "FREE"								, GOSSIP_SENDER_MAIN, 5000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 1000:
		{
			player->ADD_GOSSIP_ITEM( 2, "MOUNTS"								, GOSSIP_SENDER_MAIN, 1100);
			player->ADD_GOSSIP_ITEM( 2, "FLYMOUNTS"								, GOSSIP_SENDER_MAIN, 1200);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"							, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 1100:
		{
			player->ADD_GOSSIP_ITEM( 2, "Zuegel des schnellen Spektraltigers  -  90 Wertmarken"	, GOSSIP_SENDER_MAIN, 1101);
			player->ADD_GOSSIP_ITEM( 2, "Grosser Kampfbaer  -  75 Wertmarken"						, GOSSIP_SENDER_MAIN, 1102);
			player->ADD_GOSSIP_ITEM( 2, "Magisches Huehnerei  -  75 Wertmarken"					, GOSSIP_SENDER_MAIN, 1103);
			player->ADD_GOSSIP_ITEM( 2, "Weisses Wollrhinozeros  -  75 Wertmarken"				, GOSSIP_SENDER_MAIN, 1104);		
		if (player->GetTeam() == ALLIANCE)
			{			
			player->ADD_GOSSIP_ITEM( 2, "Zaumzeug des kleinen Schimmels  -  75 Wertmarken"				, GOSSIP_SENDER_MAIN, 1106); //allianz
			}
			else
			{
			player->ADD_GOSSIP_ITEM( 2, "Pfeife des kleinen elfenbeinfarbenen Raptors  -  75 Wertmarken"	, GOSSIP_SENDER_MAIN, 1105); //horde
			}
			player->ADD_GOSSIP_ITEM( 4, "Grosser Blizzardbaer  -  90 Wertmarken"								, GOSSIP_SENDER_MAIN, 1107);
			player->ADD_GOSSIP_ITEM( 4, "[BACK]"								, GOSSIP_SENDER_MAIN, 1000);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"							, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 1200:
		{
			player->ADD_GOSSIP_ITEM( 2, "Flammender Hippogryph  -  75 Wertmarken"				, GOSSIP_SENDER_MAIN, 1201);
			player->ADD_GOSSIP_ITEM( 2, "Himmelsross  -  90 Wertmarken"							, GOSSIP_SENDER_MAIN, 1202);
			player->ADD_GOSSIP_ITEM( 2, "X-51 Netherrakete  -  75 Wertmarken"					, GOSSIP_SENDER_MAIN, 1203);
			player->ADD_GOSSIP_ITEM( 2, "X-51 Netherrakete X-TREM  -  90 Wertmarken"			, GOSSIP_SENDER_MAIN, 1204);
			player->ADD_GOSSIP_ITEM( 2, "X-53 Reiserakete  -  111 Wertmarken"					, GOSSIP_SENDER_MAIN, 1205);
			player->ADD_GOSSIP_ITEM( 4, "[BACK]"								, GOSSIP_SENDER_MAIN, 1000);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"							, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;

		case 2000:
		{
			player->ADD_GOSSIP_ITEM( 3, "Gefrorene Kugel  -  15 Wertmarken"						, GOSSIP_SENDER_MAIN, 2001);
			player->ADD_GOSSIP_ITEM( 3, "Kugel des Kreuzfahrers  -  20 Wertmarken"				, GOSSIP_SENDER_MAIN, 2002);
			player->ADD_GOSSIP_ITEM( 3, "Urtuemliches Saronit  -  25 Wertmarken"				, GOSSIP_SENDER_MAIN, 2003);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"							, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;
		
		case 3000:
		{
			player->ADD_GOSSIP_ITEM( 7, "Zerglinglasso  -  15 Wertmarken"							, GOSSIP_SENDER_MAIN, 3001);
			player->ADD_GOSSIP_ITEM( 7, "Pandahalsband  -  15 Wertmarken"							, GOSSIP_SENDER_MAIN, 3002);
			player->ADD_GOSSIP_ITEM( 7, "Diablostein  -  15 Wertmarken"							, GOSSIP_SENDER_MAIN, 3003);
			player->ADD_GOSSIP_ITEM( 7, "Blaues Murlocei  -  20 Wertmarken"						, GOSSIP_SENDER_MAIN, 3004);
			player->ADD_GOSSIP_ITEM( 7, "Rosa Murlocei  -  20 Wertmarken"							, GOSSIP_SENDER_MAIN, 3005);
			player->ADD_GOSSIP_ITEM( 7, "Hippogryphenjunges  -  20 Wertmarken"					, GOSSIP_SENDER_MAIN, 3006);
			player->ADD_GOSSIP_ITEM( 7, "Netherwelpenhalsband  -  20 Wertmarken"					, GOSSIP_SENDER_MAIN, 3007);
			player->ADD_GOSSIP_ITEM( 7, "Lurkys Ei  -  25 Wertmarken"								, GOSSIP_SENDER_MAIN, 3008);
			player->ADD_GOSSIP_ITEM( 7, "Glueckstaler  -  25 Wertmarken"							, GOSSIP_SENDER_MAIN, 3009);
			player->ADD_GOSSIP_ITEM( 7, "Gluecksbanane  -  25 Wertmarken"							, GOSSIP_SENDER_MAIN, 3010);
			player->ADD_GOSSIP_ITEM( 7, "Raketenhuehnchen  -  25 Wertmarken"						, GOSSIP_SENDER_MAIN, 3011);
			player->ADD_GOSSIP_ITEM( 7, "Papierdrachen  -  25 Wertmarken"							, GOSSIP_SENDER_MAIN, 3012);
			player->ADD_GOSSIP_ITEM( 7, "Wunschwettermaschine - Prototyp 01-B  -  25 Wertmarken"	, GOSSIP_SENDER_MAIN, 3013);
			player->ADD_GOSSIP_ITEM( 7, "Leuchtsignal des Seelenhaendlers  -  25 Wertmarken"		, GOSSIP_SENDER_MAIN, 3014);
			player->ADD_GOSSIP_ITEM( 7, "Frostis Halsband  -  30 Wertmarken"						, GOSSIP_SENDER_MAIN, 3015);
			player->ADD_GOSSIP_ITEM( 7, "Tyraels Schwertgriff  -  30 Wertmarken"					, GOSSIP_SENDER_MAIN, 3016);
			player->ADD_GOSSIP_ITEM( 7, "Schweres Murlocei  -  30 Wertmarken"						, GOSSIP_SENDER_MAIN, 3017);
			player->ADD_GOSSIP_ITEM( 7, "Blizzard Baerenbaby  -  30 Wertmarken"							, GOSSIP_SENDER_MAIN, 3026);
			player->ADD_GOSSIP_ITEM( 7, "Tuskarrdrachen  -  35 Wertmarken"						, GOSSIP_SENDER_MAIN, 3018);
			player->ADD_GOSSIP_ITEM( 7, "Spektraltigerjunges  -  35 Wertmarken"					, GOSSIP_SENDER_MAIN, 3019);
			player->ADD_GOSSIP_ITEM( 7, "Greifenkueken  -  35 Wertmarken"							, GOSSIP_SENDER_MAIN, 3020);
			player->ADD_GOSSIP_ITEM( 7, "Windreiterjunges  -  35 Wertmarken"						, GOSSIP_SENDER_MAIN, 3021);
			player->ADD_GOSSIP_ITEM( 7, "Pandarenmoench  -  35 Wertmarken"						, GOSSIP_SENDER_MAIN, 3022);
			player->ADD_GOSSIP_ITEM( 7, "Kleines Phylakterium  -  35 Wertmarken"					, GOSSIP_SENDER_MAIN, 3023);
			player->ADD_GOSSIP_ITEM( 7, "XT der Kleine  -  40 Wertmarken"							, GOSSIP_SENDER_MAIN, 3024);
			player->ADD_GOSSIP_ITEM( 7, "Mini-Thor  -  40 Wertmarken"								, GOSSIP_SENDER_MAIN, 3025);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"							, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;
		
/*		case 4000:
		{
			player->ADD_GOSSIP_ITEM( 10, "1"						, GOSSIP_SENDER_MAIN, 4001);
			player->ADD_GOSSIP_ITEM( 10, "2"						, GOSSIP_SENDER_MAIN, 4002);
			player->ADD_GOSSIP_ITEM( 10, "3"						, GOSSIP_SENDER_MAIN, 4003);
			player->ADD_GOSSIP_ITEM( 10, "4"						, GOSSIP_SENDER_MAIN, 4004);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"				, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;
		
		case 5000:
		{
			player->ADD_GOSSIP_ITEM( 10, "1"						, GOSSIP_SENDER_MAIN, 5001);
			player->ADD_GOSSIP_ITEM( 10, "2"						, GOSSIP_SENDER_MAIN, 5002);
			player->ADD_GOSSIP_ITEM( 10, "3"						, GOSSIP_SENDER_MAIN, 5003);
			player->ADD_GOSSIP_ITEM( 10, "4"						, GOSSIP_SENDER_MAIN, 5004);
			player->ADD_GOSSIP_ITEM( 4, "[MAINMENU]"				, GOSSIP_SENDER_MAIN, 6000);

			player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
		}
		break;
*/
		case 1101:			// MOUNT - ANFANG
			if(player->HasItemCount(210000, 90))
            {
                if( msg != EQUIP_ERR_OK )
					count1 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest1, itemId1, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count1 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count1,false,true);
                    player->DestroyItemCount(210000, 90, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1102:
			if(player->HasItemCount(210000, 75))
            {
                if( msg != EQUIP_ERR_OK )
					count2 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest2, itemId2, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count2 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count2,false,true);
                    player->DestroyItemCount(210000, 75, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1103:
			if(player->HasItemCount(210000, 75))
            {
                if( msg != EQUIP_ERR_OK )
					count3 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest3, itemId3, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count3 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count3,false,true);
                    player->DestroyItemCount(210000, 75, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1104:
			if(player->HasItemCount(210000, 75))
            {
                if( msg != EQUIP_ERR_OK )
					count4 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest4, itemId4, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count4 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count4,false,true);
                    player->DestroyItemCount(210000, 75, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1105:
			if(player->HasItemCount(210000, 75))
            {
                if( msg != EQUIP_ERR_OK )
					count5 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest5, itemId5, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count5 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count5,false,true);
                    player->DestroyItemCount(210000, 75, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1106:
			if(player->HasItemCount(210000, 75))
            {
                if( msg != EQUIP_ERR_OK )
					count6 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest6, itemId6, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count6 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count6,false,true);
                    player->DestroyItemCount(210000, 75, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1107:
			if(player->HasItemCount(210000, 90))
            {
                if( msg != EQUIP_ERR_OK )
					count40 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest40, itemId40, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count40 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count40,false,true);
                    player->DestroyItemCount(210000, 90, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;				// MOUNT - ENDE
		
		case 1201:			// FLYMOUNT - ANFANG
			if(player->HasItemCount(210000, 75))
            {
                if( msg != EQUIP_ERR_OK )
					count7 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest7, itemId7, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count7 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count7,false,true);
                    player->DestroyItemCount(210000, 75, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1202:
			if(player->HasItemCount(210000, 90))
            {
                if( msg != EQUIP_ERR_OK )
					count8 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest8, itemId8, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count8 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count8,false,true);
                    player->DestroyItemCount(210000, 90, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1203:
			if(player->HasItemCount(210000, 75))
            {
                if( msg != EQUIP_ERR_OK )
					count9 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest9, itemId9, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count9 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count9,false,true);
                    player->DestroyItemCount(210000, 75, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1204:
			if(player->HasItemCount(210000, 90))
            {
                if( msg != EQUIP_ERR_OK )
					count10 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest10, itemId10, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count10 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count10,false,true);
                    player->DestroyItemCount(210000, 90, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 1205:
			if(player->HasItemCount(210000, 111))
            {
                if( msg != EQUIP_ERR_OK )
					count11 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest11, itemId11, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count11 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count11,false,true);
                    player->DestroyItemCount(210000, 111, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;			// FLYMOUNT - ENDE
		
		case 2001:		// MATS - ANFANG
			if(player->HasItemCount(210000, 15))
            {
                if( msg != EQUIP_ERR_OK )
					count12 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest12, itemId12, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count12 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count12,false,true);
                    player->DestroyItemCount(210000, 15, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 2002:
			if(player->HasItemCount(210000, 20))
            {
                if( msg != EQUIP_ERR_OK )
					count13 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest13, itemId13, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count13 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count13,false,true);
                    player->DestroyItemCount(210000, 20, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 2003:
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
					count14 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest14, itemId14, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count14 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count14,false,true);
                    player->DestroyItemCount(210000, 25, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;			// MATS - ENDE
		
		case 3001:		// PETS - ANFANG
			if(player->HasItemCount(210000, 15))
            {
                if( msg != EQUIP_ERR_OK )
					count15 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest15, itemId15, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count15 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count15,false,true);
                    player->DestroyItemCount(210000, 15, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3002:
			if(player->HasItemCount(210000, 15))
            {
                if( msg != EQUIP_ERR_OK )
					count16 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest16, itemId16, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count16 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count16,false,true);
                    player->DestroyItemCount(210000, 15, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3003:
			if(player->HasItemCount(210000, 15))
            {
                if( msg != EQUIP_ERR_OK )
					count17 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest17, itemId17, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count17 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count17,false,true);
                    player->DestroyItemCount(210000, 15, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3004:
			if(player->HasItemCount(210000, 20))
            {
                if( msg != EQUIP_ERR_OK )
					count18 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest18, itemId18, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count18 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count18,false,true);
                    player->DestroyItemCount(210000, 20, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3005:
			if(player->HasItemCount(210000, 20))
            {
                if( msg != EQUIP_ERR_OK )
					count19 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest19, itemId19, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count19 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count19,false,true);
                    player->DestroyItemCount(210000, 20, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3006:
			if(player->HasItemCount(210000, 20))
            {
                if( msg != EQUIP_ERR_OK )
					count20 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest20, itemId20, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count20 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count20,false,true);
                    player->DestroyItemCount(210000, 20, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3007:
			if(player->HasItemCount(210000, 20))
            {
                if( msg != EQUIP_ERR_OK )
					count21 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest21, itemId21, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count21 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count21,false,true);
                    player->DestroyItemCount(210000, 20, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3008:
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
					count22 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest22, itemId22, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count22 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count22,false,true);
                    player->DestroyItemCount(210000, 25, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3009:
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
					count23 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest23, itemId23, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count23 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count23,false,true);
                    player->DestroyItemCount(210000, 25, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3010:
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
					count24 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest24, itemId24, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count24 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count14,false,true);
                    player->DestroyItemCount(210000, 25, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3011:
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
					count25 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest25, itemId25, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count25 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count25,false,true);
                    player->DestroyItemCount(210000, 25, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3012:
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
					count26 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest26, itemId26, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count26 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count26,false,true);
                    player->DestroyItemCount(210000, 25, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3013:
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
					count27 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest27, itemId27, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count27 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count27,false,true);
                    player->DestroyItemCount(210000, 25, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3014:
			if(player->HasItemCount(210000, 25))
            {
                if( msg != EQUIP_ERR_OK )
					count28 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest28, itemId28, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count28 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count28,false,true);
                    player->DestroyItemCount(210000, 25, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3015:
			if(player->HasItemCount(210000, 30))
            {
                if( msg != EQUIP_ERR_OK )
					count29 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest29, itemId29, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count29 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count29,false,true);
                    player->DestroyItemCount(210000, 30, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3016:
			if(player->HasItemCount(210000, 30))
            {
                if( msg != EQUIP_ERR_OK )
					count30 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest30, itemId30, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count30 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count30,false,true);
                    player->DestroyItemCount(210000, 30, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3017:
			if(player->HasItemCount(210000, 30))
            {
                if( msg != EQUIP_ERR_OK )
					count31 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest31, itemId31, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count31 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count31,false,true);
                    player->DestroyItemCount(210000, 30, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3018:
			if(player->HasItemCount(210000, 35))
            {
                if( msg != EQUIP_ERR_OK )
					count32 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest32, itemId32, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count32 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count32,false,true);
                    player->DestroyItemCount(210000, 35, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3019:
			if(player->HasItemCount(210000, 35))
            {
                if( msg != EQUIP_ERR_OK )
					count33 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest33, itemId33, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count33 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count33,false,true);
                    player->DestroyItemCount(210000, 35, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3020:
			if(player->HasItemCount(210000, 35))
            {
                if( msg != EQUIP_ERR_OK )
					count34 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest34, itemId34, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count34 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count34,false,true);
                    player->DestroyItemCount(210000, 35, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3021:
			if(player->HasItemCount(210000, 35))
            {
                if( msg != EQUIP_ERR_OK )
					count35 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest35, itemId35, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count35 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count35,false,true);
                    player->DestroyItemCount(210000, 35, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3022:
			if(player->HasItemCount(210000, 35))
            {
                if( msg != EQUIP_ERR_OK )
					count36 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest36, itemId36, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count36 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count36,false,true);
                    player->DestroyItemCount(210000, 35, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3023:
			if(player->HasItemCount(210000, 35))
            {
                if( msg != EQUIP_ERR_OK )
					count37 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest37, itemId37, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count37 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count37,false,true);
                    player->DestroyItemCount(210000, 35, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3024:
			if(player->HasItemCount(210000, 40))
            {
                if( msg != EQUIP_ERR_OK )
					count38 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest38, itemId38, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count38 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count38,false,true);
                    player->DestroyItemCount(210000, 40, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3025:
			if(player->HasItemCount(210000, 40))
            {
                if( msg != EQUIP_ERR_OK )
					count39 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest39, itemId39, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count39 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count39,false,true);
                    player->DestroyItemCount(210000, 40, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;
		
		case 3026:
			if(player->HasItemCount(210000, 30))
            {
                if( msg != EQUIP_ERR_OK )
					count41 -= noSpaceForCount;
                {
                    player->CLOSE_GOSSIP_MENU();
					_Creature->MonsterSay("Kann Item nicht erstellen! Moeglicherweise hast Du dieses Item bereits in deinem Inventar?", LANG_UNIVERSAL, NULL);
                }

                item = player->StoreNewItem( dest41, itemId41, true, Item::GenerateItemRandomPropertyId(itemId1));
				if(count41 > 0 && item)
                {
                    player->CLOSE_GOSSIP_MENU();
                    player->SendNewItem(item,count41,false,true);
                    player->DestroyItemCount(210000, 30, true);
					_Creature->MonsterSay("Viel Spass damit.", LANG_UNIVERSAL, NULL);
                }
            }
            else
            {
                player->CLOSE_GOSSIP_MENU();
                _Creature->MonsterSay("Du hast nicht genug Craenkland - Wertmarken!", LANG_UNIVERSAL, NULL);
            }
        break;				// PETS - ENDE
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
