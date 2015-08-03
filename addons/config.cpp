enum {
	 //  = 2,	// Error parsing: Empty enum name
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

// Ce fichier de conf ne concerne que les unités indépendantes, vori OPF pour les unités opfor et BLU pour les unités Blufor

class CfgPatches {
	class PRL_INDEP_Config {
		units[] = {"unité2", "unité1"}; // Classnames des différentes unités
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_Common", "A3_Characters_F", "A3_Weapons_F_Ammoboxes"}; //Ajouter les dépendances correctes
	};
};

class CfgUnitInsignia
{
	class TestInsig
	{
		displayName = "Unités Première Ligne"; // Name displayed in Arsenal
		author = "Première Ligne"; // Author displayed in Arsenal
		texture = "\MNP_INDEP\Data\1.paa"; // Image path [à modifier]
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};

class CfgFactionClasses{
	class PRL_I_Units
	{
		displayName = "PrL - Independant";
		author = "PrL";
		icon="\MNP_INDEP\Data\Icon.paa";
		priority = 2;
		side = 3; // INDE
	};
};

class CfgGroups
{
	class Indep
	{
		name = "$STR_A3_CfgGroups_Indep0";
		
		class PRL_ONU_groups
		{
			Name = "Organisation des Nations Unies";
			
			class Infantry
			{
				Name = "Infanterie";
		 
				class MNP_ASA_Squad
				{
					Name = "Escouade ONU";
					side = 2;
					faction = "PrL_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "PrL_ONU_INF_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_ASA_Patrol
				{
					Name = "ASA Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_ASA_AT_Patrol
				{
					Name = "ASA Anti-Tank Team";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};