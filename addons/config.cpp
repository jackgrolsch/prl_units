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

// Ce fichier de conf ne concerne que les unit�s ind�pendantes, vori OPF pour les unit�s opfor et BLU pour les unit�s Blufor

class CfgPatches {
	class PRL_INDEP_Config {
		units[] = {"unit�2", "unit�1"}; // Classnames des diff�rentes unit�s
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_Common", "A3_Characters_F", "A3_Weapons_F_Ammoboxes"}; //Ajouter les d�pendances correctes
	};
};

class CfgUnitInsignia
{
	class TestInsig
	{
		displayName = "Unit�s Premi�re Ligne"; // Nom affich� dans l'Arsenal
		author = "Premi�re Ligne"; // Auteur Affich� dans l'Arsenal
		texture = "\MNP_INDEP\Data\1.paa"; // Chemin de l'image [� modifier]
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};

class CfgFactionClasses{
	class PRL_I_Units
	{
		displayName = "PRL - Independant";
		author = "PRL";
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
			Name = "Nations Unies";
			
			class Infantry
			{
				Name = "Infanterie";
		 
				class PRL_ONU_Squad
				{
					Name = "Escouade ONU";
					side = 2;
					faction = "PrL_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "PRL_ONU_INF_O"; // PRL ONU Infanterie Officier
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "PRL_ONU_INF_S"; // PRL ONU Infanterie Support (Mitrailleur)
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "PRL_ONU_INF_G"; // PRL ONU Infanterie Grenadier
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "PRL_ONU_INF_M"; // PRL ONU Infanterie Medic
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "PRL_ONU_INF_AT"; // PRL ONU Infanterie Antichar
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "PRL_ONU_INF_F"; // PRL ONU Fusillier
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "PRL_ONU_INF_F"; // PRL ONU Fusillier
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "PRL_ONU_INF_F"; // PRL ONU Fusillier
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "PRL_ONU_INF_F"; // PRL ONU Fusillier
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				//Ins�rer un groupe de deux et un groupe de taille fireteam
				//Ins�rer �ventuellement un ou deux groupes sp�cialis�s?
				
			};
		};
	};
};

class CfgVehicleClasses{

	class PRL_ONU_Units{
		displayName = "Nations Unies"; // Renommer en fonction de ce que vous voulez indiquer comme sous groupe de la faction. Vous pouvez avoir des sous factions multiples (VehicleClasses) � partir du moment o� le VehicleClass est diff�rent.
	};

	class PRL_ONU_Units_D{
		displayName = "Nations Unies (Desert)";
	};

};

class CfgVehicles { //D�finition des diff�rentes unit�s

	class B_Soldier_base_F; //Unit�s de base
	class B_soldier_AR_F;
	class B_G_Soldier_SL_F;
	class B_G_Soldier_lite_F;	
	class B_Helipilot_F;
		
	class O_officer_F;
	class O_Soldier_F;
	class O_Soldier_AR_F;
	class O_Soldier_LAT_F;
	class O_Soldier_GL_F;
	class O_Medic_F;
	
	// Nations Unies (Camo standard)
	
	class PRL_ONU_INF_F : B_soldier_base_F { //Fusillier
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Ireland"; //the uniform item
		
		backpack = "B_AssaultPack_rgr";
		
		weapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		respawnweapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = PRL_I_Units; // Puts unit under new faction
		vehicleClass = "PRL_ONU_Units"; // Puts unit in the vehicleclass
		side = 2;
		linkedItems[] = { "FirstAidKit", "MNP_Helmet_Ireland", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_Ireland", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	
	};
	
};