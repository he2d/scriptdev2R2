// Scripted by HE2D|DEV
// UPDATE `creature_template` SET ScriptName='custom_boss_yeti' WHERE `entry`=200009;
#include "precompiled.h"

enum
{
    SPELL_BLIZZARD  	       			= 64642, // alle 2 Sek. 5088 to 5912 Frostschaden, 6sec lang
	SPELL_KUGELBLITZ					= 59800, // 4113 to 5287 Naturschaden
	SPELL_EISKALTE						= 62469, // 6000 schaden 10 Sek. lang bewegungsunf�hig.
	
	SPELL_ELITE							= 71195  // Spell Elite
};

struct MANGOS_DLL_DECL boss_custom_yetiAI : public ScriptedAI
{
	boss_custom_yetiAI(Creature* pCreature) : ScriptedAI(pCreature) {Reset();}

	bool berserk;
	uint32 PHASE;
	
	uint32 Blizzard_Timer;
	uint32 Kugelblitz_Timer;
	uint32 Eiskalte_Timer;
	
	void Reset()
	{
		PHASE			= 1;
		berserk			= false;

		Blizzard_Timer	 		= 9000; 
		Kugelblitz_Timer		= 7000;
		Eiskalte_Timer			= 5000;

	}
	
	void Aggro(Unit* pWho)
	{
		m_creature->MonsterYell("Dann kommt und zeigt mir was Ihr drauf habt!", LANG_UNIVERSAL);
	}
	
	void KilledUnit(Unit* pVictim)
	{
		m_creature->MonsterYell("Einer weniger von Euch. Ich werde Euch alle in den Boden stampfen!", LANG_UNIVERSAL);
	}

	void JustDied(Unit*) 
	{
		m_creature->MonsterYell("Ahhhh... Das kann doch nicht sein...", LANG_UNIVERSAL);
	}

	void JustSummoned(Creature *pSummoned)
    	{
		
		}

	void UpdateAI(const uint32 uiDiff)
	{
		if (!m_creature->SelectHostileTarget() || !m_creature->getVictim())
            	return;

		if (PHASE == 1)
		{
			if(Blizzard_Timer < uiDiff)
			{
				if (Unit* target = m_creature->SelectAttackingTarget(ATTACKING_TARGET_RANDOM,0))
                    		DoCast(target,SPELL_BLIZZARD);
							
				Blizzard_Timer		= 9000;
			}
			else
				Blizzard_Timer -= uiDiff;
				
			if (m_creature->GetHealthPercent() < 75.0f)
			{
				PHASE = 2;
				m_creature->MonsterYell("Na wartet! Jetzt werde ich Euch zeigen was in mir steckt!", LANG_UNIVERSAL);
			}

		}
		
		if(PHASE == 2)
		{
			if(Kugelblitz_Timer < uiDiff)
			{
				DoCast(m_creature->getVictim(), SPELL_KUGELBLITZ);
				Kugelblitz_Timer		= 7000;
			}
			else
				Kugelblitz_Timer -= uiDiff;

			if(Eiskalte_Timer < uiDiff)
			{
				if (Unit* target = m_creature->SelectAttackingTarget(ATTACKING_TARGET_RANDOM,0))
                    		DoCast(target,SPELL_EISKALTE);

				Eiskalte_Timer	= 5000;
			}
			else
				Eiskalte_Timer -= uiDiff;
				
			if (m_creature->GetHealthPercent() < 50.0f)
			{
				PHASE = 3;
				m_creature->MonsterYell("Noch habt Ihr mich nicht besiegt!", LANG_UNIVERSAL);
			}
		}
		
		if(PHASE == 3)
		{
			if(Blizzard_Timer < uiDiff)
			{
				if (Unit* target = m_creature->SelectAttackingTarget(ATTACKING_TARGET_RANDOM,0))
                    		DoCast(target,SPELL_BLIZZARD);
							
				Blizzard_Timer		= 9000;
			}
			else
				Blizzard_Timer -= uiDiff;
		
			if (m_creature->GetHealthPercent() < 25.0f)
			{
				PHASE = 4;
				m_creature->MonsterYell("Jetzt reicht es aber!", LANG_UNIVERSAL);
			}
		
		}
		
		if(PHASE == 4)
		{
			if(Eiskalte_Timer < uiDiff)
			{
				if (Unit* target = m_creature->SelectAttackingTarget(ATTACKING_TARGET_RANDOM,0))
                    		DoCast(target,SPELL_EISKALTE);

				Eiskalte_Timer	= 5000;
			}
			else
				Eiskalte_Timer -= uiDiff;
				
			if(m_creature->GetHealthPercent() < 5.0f && !berserk)
			{
		   		berserk = true;
				m_creature->MonsterYell("Ihr macht mich wahnsinnig!", LANG_UNIVERSAL);
				DoCast(m_creature,SPELL_ELITE);
			}
		}
		
	DoMeleeAttackIfReady();
		
	}
};

CreatureAI* GetAI_boss_custom_yeti(Creature* pCreature)
{
    return new boss_custom_yetiAI(pCreature);
}

void AddSC_boss_custom_yeti()
{
    Script* NewScript;
    NewScript = new Script;
    NewScript->Name = "boss_custom_yeti";
    NewScript->GetAI = &GetAI_boss_custom_yeti;
    NewScript->RegisterSelf();
}