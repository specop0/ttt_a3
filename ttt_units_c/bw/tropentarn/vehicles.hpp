	/*
	#############################################################
	### Trupp Gelb
	#############################################################
	*/
	
	//Gelb 1 (OPL)
	class TTT_Gelb1_Tropentarn : TTT_Truppfuehrer_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gelb 1 (OPL)";
		vehicleClass = "TTT_Gelb_Tropentarn";
		backpack = "TTT_Backpack_Opl_Tropentarn";
		uniformClass = "TTT_Uniform_Gelb_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_yellow_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Gelb 2 (Funker)
	class TTT_Gelb2_Tropentarn : TTT_Funkerfac_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gelb 2 (Funker/FAC)";
		vehicleClass = "TTT_Gelb_Tropentarn";
		backpack = "TTT_Backpack_Funkerfac_Tropentarn";
		uniformClass = "TTT_Uniform_Gelb_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_yellow_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Gelb 3 (UAV/Moerser)
	class TTT_Gelb3_Tropentarn : TTT_Funkerfac_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gelb 3 (UAV/Moerser)";
		backpack = "TTT_Backpack_Funkerfac_Tropentarn";
		vehicleClass = "TTT_Gelb_Tropentarn";
		uniformClass = "TTT_Uniform_Gelb_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_yellow_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
	};
	
	//Gelb 4 (Moerser)
	class TTT_Gelb4_Tropentarn : TTT_Funkerfac_Base {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Gelb 4 (Moerser)";
		vehicleClass = "TTT_Gelb_Tropentarn";
		uniformClass = "TTT_Uniform_Gelb_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_yellow_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","B_UavTerminal","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Grau
	#############################################################
	*/
	
	//Grau 1 (Truppfuehrer)
	class TTT_Grau1_Tropentarn : TTT_Truppfuehrer_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 1 (Truppfuehrer)";
		vehicleClass = "TTT_Grau_Tropentarn";
		uniformClass = "TTT_Uniform_Grau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_grey_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles","cse_itemHelmetCamera_W","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles","cse_itemHelmetCamera_W","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
	};
	
	//Grau 2 (Funker/FAC)
	class TTT_Grau2_Tropentarn : TTT_Funkerfac_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 2 (Funker/FAC)";
		vehicleClass = "TTT_Grau_Tropentarn";
		uniformClass = "TTT_Uniform_Grau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_grey_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Laserdesignator","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Laserdesignator","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","Laserbatteries"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","Laserbatteries"};
	};
	
	//Grau 3 (Gefechtssanitaeter)
	class TTT_Grau3_Tropentarn : TTT_Gefechtssanitaeter_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 3 (Gefechtssanitaeter)";
		vehicleClass = "TTT_Grau_Tropentarn";
		uniformClass = "TTT_Uniform_Grau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_grey_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
	};
	
	//Grau 4 (Pionier)
	class TTT_Grau4_Tropentarn : TTT_Pionier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 4 (Pionier)";
		vehicleClass = "TTT_Grau_Tropentarn";
		uniformClass = "TTT_Uniform_Grau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_grey_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
	};
	
	//Grau 5 (Gruppenscharfschuetze)
	class TTT_Grau5_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 5 (Gruppenscharfschuetze)";
		icon = "iconMan";
		vehicleClass = "TTT_Grau_Tropentarn";
		backpack = "TTT_Backpack_Schuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Grau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_grey_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G28","NVGoggles","ACE_Kestrel4500","ACE_ATragMX"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G28","NVGoggles","ACE_Kestrel4500","ACE_ATragMX"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Marksman_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Marksman_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G28_Standard_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G28_Standard_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_10Rnd_762x51_G28_AP","BWA3_10Rnd_762x51_G28_AP","BWA3_10Rnd_762x51_G28_AP","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_LR"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_10Rnd_762x51_G28_AP","BWA3_10Rnd_762x51_G28_AP","BWA3_10Rnd_762x51_G28_AP","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_SD","BWA3_10Rnd_762x51_G28_LR"};
	};
	
	//Grau 6 (UAV-Operator)
	class TTT_Grau6_Tropentarn : TTT_Uavoperator_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Grau 6 (UAV-Operator)";
		vehicleClass = "TTT_Grau_Tropentarn";
		uniformClass = "TTT_Uniform_Grau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_grey_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles","cse_m_tablet"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles","cse_m_tablet"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152","B_UavTerminal"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152","B_UavTerminal"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
	};

	/*
	#############################################################
	### Trupp Gold (Tropentarn)
	#############################################################
	*/
	
	//Gold 1 (Truppfuehrer)
	class TTT_Gold1_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gold 1 (TF/Spotter)";
		icon = "iconManLeader";
		vehicleClass = "TTT_Gold_Tropentarn";
		uniformClass = "TTT_Uniform_Gold_Tropentarn";
		backpack = "TTT_Backpack_Truppfuehrer_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_gold_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G28","NVGoggles","ACE_Kestrel4500","ACE_ATragMX","cse_itemHelmetCamera_W","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G28","NVGoggles","ACE_Kestrel4500","ACE_ATragMX"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G27_AG_equipped","hgun_Pistol_heavy_01_snds_F","Laserdesignator","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G27_AG_equipped","hgun_Pistol_heavy_01_snds_F","Laserdesignator","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_SD","BWA3_20Rnd_762x51_G28_SD","Laserbatteries"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_SD","BWA3_20Rnd_762x51_G28_SD","Laserbatteries"};
	};
	
	//Gold 2 (Sniper)
	class TTT_Gold2_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gold 2 (Sniper)";
		icon = "iconMan";
		vehicleClass = "TTT_Gold_Tropentarn";
		uniformClass = "TTT_Uniform_Gold_Tropentarn";
		backpack = "TTT_Backpack_Schuetze_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_gold_tropentarn.paa"};
		items[] = {"NVGoggles","ACE_Kestrel4500","ACE_ATragMX"};
		respawnItems[] = {"NVGoggles","ACE_Kestrel4500","ACE_ATragMX"};
		weapons[] = {"srifle_LRR_LRPS_F","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"srifle_LRR_LRPS_F","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Marksman_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Marksman_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	
	
	//Gold 3 (Spotter)
	class TTT_Gold3_Tropentarn : TTT_Funkerfac_Base {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Gold 3 (Spotter)";
		vehicleClass = "TTT_Gold_Tropentarn";
		uniformClass = "TTT_Uniform_Gold_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_gold_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		weapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Laserdesignator","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_AG_equipped","hgun_Pistol_heavy_01_snds_F","Laserdesignator","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","Laserbatteries"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD","Laserbatteries"};
	};
	
	//Gold 4 (UAV)
	class TTT_Gold4_Tropentarn : TTT_Uavoperator_Base {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Gold 2 (UAV)";
		vehicleClass = "TTT_Gold_Tropentarn";
		uniformClass = "TTT_Uniform_Gold_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_gold_tropentarn.paa"};
		items[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles","ACE_UAVBattery"};
		respawnItems[] = {"BWA3_optic_NSV600","BWA3_muzzle_snds_G36","NVGoggles","ACE_UAVBattery"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","B_UavTerminal","ItemCompass","ItemWatch","tf_anprc152","cse_m_tablet"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","B_UavTerminal","ItemCompass","ItemWatch","tf_anprc152","cse_m_tablet"};
		weapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"BWA3_G36_equipped","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_AP","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_SD"};
	};
	
	
	
	/*
	#############################################################
	### Trupp Gruen (Tropentarn)
	#############################################################
	*/
	
	//Gruen 1 (Zugfuehrer)
	class TTT_Gruen1_Tropentarn : TTT_Truppfuehrer_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gruen 1 (Zugfuehrer)";
		vehicleClass = "TTT_Gruen_Tropentarn";
		uniformClass = "TTT_Uniform_Gruen_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_green_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Gruen 2 (Funker/FAC)
	class TTT_Gruen2_Tropentarn : TTT_Funkerfac_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gruen 2 (Funker/FAC)";
		vehicleClass = "TTT_Gruen_Tropentarn";
		uniformClass = "TTT_Uniform_Gruen_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_green_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Gruen 3 (Gefechtssanitaeter)
	class TTT_Gruen3_Tropentarn : TTT_Gefechtssanitaeter_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Gruen 3 (Gefechtssanitaeter)";
		vehicleClass = "TTT_Gruen_Tropentarn";
		uniformClass = "TTT_Uniform_Gruen_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_green_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Gruen 4 (Gefechtssanitaeter)
	class TTT_Gruen4_Tropentarn : TTT_Gefechtssanitaeter_Base {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Gruen 4 (Gefechtssanitaeter)";
		vehicleClass = "TTT_Gruen_Tropentarn";
		uniformClass = "TTT_Uniform_Gruen_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_green_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Braun (Tropentarn)
	#############################################################
	*/
	
	//Braun 1 (Zugfuehrer)
	class TTT_Braun1_Tropentarn : TTT_Truppfuehrer_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Braun 1 (Zugfuehrer)";
		vehicleClass = "TTT_Braun_Tropentarn";
		uniformClass = "TTT_Uniform_Braun_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_brown_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Braun 2 (Funker/FAC)
	class TTT_Braun2_Tropentarn : TTT_Funkerfac_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Braun 2 (Funker/FAC)";
		vehicleClass = "TTT_Braun_Tropentarn";
		uniformClass = "TTT_Uniform_Braun_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_brown_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Braun 3 (Gefechtssanitaeter)
	class TTT_Braun3_Tropentarn : TTT_Gefechtssanitaeter_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Braun 3 (Gefechtssanitaeter)";
		vehicleClass = "TTT_Braun_Tropentarn";
		uniformClass = "TTT_Uniform_Braun_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_brown_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Schwarz (Tropentarn)
	#############################################################
	*/
	
	//Schwarz 1 (Truppfuehrer)
	class TTT_Schwarz1_Tropentarn : TTT_Truppfuehrer_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 1 (Truppfuehrer)";
		vehicleClass = "TTT_Schwarz_Tropentarn";
		uniformClass = "TTT_Uniform_Schwarz_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_black_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 2 (Grenadier)
	class TTT_Schwarz2_Tropentarn : TTT_Grenadier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 2 (Grenadier)";
		vehicleClass = "TTT_Schwarz_Tropentarn";
		uniformClass = "TTT_Uniform_Schwarz_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_black_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 3 (LMG-Schuetze)
	class TTT_Schwarz3_Tropentarn : TTT_Lmgschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 3 (LMG-Schuetze)";
		vehicleClass = "TTT_Schwarz_Tropentarn";
		uniformClass = "TTT_Uniform_Schwarz_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_black_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 4 (LMG-Schuetze)
	class TTT_Schwarz4_Tropentarn : TTT_Lmgschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 4 (LMG-Schuetze)";
		vehicleClass = "TTT_Schwarz_Tropentarn";
		uniformClass = "TTT_Uniform_Schwarz_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_black_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 5 (AT-Schuetze)
	class TTT_Schwarz5_Tropentarn : TTT_Atschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 5 (AT-Schuetze)";
		vehicleClass = "TTT_Schwarz_Tropentarn";
		uniformClass = "TTT_Uniform_Schwarz_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_black_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Schwarz 6 (AT-Schuetze)
	class TTT_Schwarz6_Tropentarn : TTT_Atschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Schwarz 6 (AT-Schuetze)";
		vehicleClass = "TTT_Schwarz_Tropentarn";
		uniformClass = "TTT_Uniform_Schwarz_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_black_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Rot (Tropentarn)
	#############################################################
	*/
	
	//Rot 1 (Truppfuehrer)
	class TTT_Rot1_Tropentarn : TTT_Truppfuehrer_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 1 (Truppfuehrer)";
		vehicleClass = "TTT_Rot_Tropentarn";
		uniformClass = "TTT_Uniform_Rot_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_red_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Rot 2 (Grenadier)
	class TTT_Rot2_Tropentarn : TTT_Grenadier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 2 (Grenadier)";
		vehicleClass = "TTT_Rot_Tropentarn";
		uniformClass = "TTT_Uniform_Rot_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_red_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Rot 3 (LMG-Schuetze)
	class TTT_Rot3_Tropentarn : TTT_Lmgschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 3 (LMG-Schuetze)";
		vehicleClass = "TTT_Rot_Tropentarn";
		uniformClass = "TTT_Uniform_Rot_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_red_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Rot 4 (LMG-Schuetze)
	class TTT_Rot4_Tropentarn : TTT_Lmgschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 4 (LMG-Schuetze)";
		vehicleClass = "TTT_Rot_Tropentarn";
		uniformClass = "TTT_Uniform_Rot_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_red_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Autorifleman_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Rot 5 (AT-Schuetze)
	class TTT_Rot5_Tropentarn : TTT_Atschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 5 (AT-Schuetze)";
		vehicleClass = "TTT_Rot_Tropentarn";
		uniformClass = "TTT_Uniform_Rot_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_red_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Rot 6 (AT-Schuetze)
	class TTT_Rot6_Tropentarn : TTT_Atschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Rot 6 (AT-Schuetze)";
		vehicleClass = "TTT_Rot_Tropentarn";
		uniformClass = "TTT_Uniform_Rot_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_red_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Bronze (Tropentarn)
	#############################################################
	*/
	
	//Bronze 1 (Truppfuehrer/Kommandant)
	class TTT_Bronze1_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bronze 1 (Truppfuehrer/Kommandant)";
		icon = "iconManLeader";
		vehicleClass = "TTT_Bronze_Tropentarn";
		backpack = "TTT_Backpack_Pilot_Tropentarn";
		uniformClass = "TTT_Uniform_Bronze_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_bronx_tropentarn.paa"};
		items[] = {"NVGoggles","cse_itemHelmetCamera_W","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		respawnItems[] = {"NVGoggles","cse_itemHelmetCamera_W","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
	};
	
	//Bronze 2 (Schuetze)
	class TTT_Bronze2_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bronze 2 (Schuetze)";
		icon = "iconMan";
		vehicleClass = "TTT_Bronze_Tropentarn";
		backpack = "TTT_Backpack_Schuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Bronze_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_bronx_tropentarn.paa"};
		items[] = {"NVGoggles"};
		respawnItems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
	};
	
	//Bronze 3 (Fahrer)
	class TTT_Bronze3_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bronze 3 (Fahrer)";
		icon = "iconMan";
		vehicleClass = "TTT_Bronze_Tropentarn";
		backpack = "TTT_Backpack_Schuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Bronze_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_bronx_tropentarn.paa"};
		items[] = {"NVGoggles"};
		respawnItems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
	};
	
	//Bronze 4 (Truppfuehrer/Kommandant)
	class TTT_Bronze4_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Bronze 4 (Truppfuehrer/Kommandant)";
		icon = "iconManLeader";
		vehicleClass = "TTT_Bronze_Tropentarn";
		backpack = "TTT_Backpack_Pilot_Tropentarn";
		uniformClass = "TTT_Uniform_Bronze_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_bronx_tropentarn.paa"};
		items[] = {"NVGoggles","cse_itemHelmetCamera_W","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		respawnItems[] = {"NVGoggles","cse_itemHelmetCamera_W","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Rangefinder","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
	};
	
	//Bronze 5 (Schuetze)
	class TTT_Bronze5_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Bronze 5 (Schuetze)";
		icon = "iconMan";
		vehicleClass = "TTT_Bronze_Tropentarn";
		backpack = "TTT_Backpack_Schuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Bronze_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_bronx_tropentarn.paa"};
		items[] = {"NVGoggles"};
		respawnItems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
	};
	
	//Bronze 6 (Fahrer)
	class TTT_Bronze6_Tropentarn : TTT_Base_Base {
		author = "Tactical Training Team";
		scope = 1;
		displayName = "Bronze 6 (Fahrer)";
		icon = "iconMan";
		vehicleClass = "TTT_Bronze_Tropentarn";
		backpack = "TTT_Backpack_Schuetze_Tropentarn";
		uniformClass = "TTT_Uniform_Bronze_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_bronx_tropentarn.paa"};
		items[] = {"NVGoggles"};
		respawnItems[] = {"NVGoggles"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","BWA3_CrewmanKSK_Tropen_Headset","ItemMap","ItemCompass","ItemWatch","BWA3_ItemNaviPad","tf_anprc152"};
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_snds_F","Binocular","Throw","Put"}; 
		magazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellPurple","Chemlight_blue","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","ACE_M84","ACE_M84","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_tracer_green"};
	};
	
	/*
	#############################################################
	### Trupp Blau (Tropentarn)
	#############################################################
	*/
	
	//Blau 1 (Truppfuehrer)
	class TTT_Blau1_Tropentarn : TTT_Truppfuehrer_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 1 (Truppfuehrer)";
		vehicleClass = "TTT_Blau_Tropentarn";
		uniformClass = "TTT_Uniform_Blau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_blue_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Blau 2 (Grenadier)
	class TTT_Blau2_Tropentarn : TTT_Grenadier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 2 (Grenadier)";
		vehicleClass = "TTT_Blau_Tropentarn";
		uniformClass = "TTT_Uniform_Blau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_blue_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Blau 3 (MG-Assistent)
	class TTT_Blau3_Tropentarn : TTT_Mgassistent_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 3 (MG-Assistent)";
		vehicleClass = "TTT_Blau_Tropentarn";
		uniformClass = "TTT_Uniform_Blau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_blue_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Blau 4 (MG-Schuetze)
	class TTT_Blau4_Tropentarn : TTT_Mgschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 4 (MG-Schuetze)";
		vehicleClass = "TTT_Blau_Tropentarn";
		uniformClass = "TTT_Uniform_Blau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_blue_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Blau 5 (Pionier)
	class TTT_Blau5_Tropentarn : TTT_Pionier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 5 (Pionier)";
		vehicleClass = "TTT_Blau_Tropentarn";
		uniformClass = "TTT_Uniform_Blau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_blue_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Blau 6 (Pionier)
	class TTT_Blau6_Tropentarn : TTT_Pionier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Blau 6 (Pionier)";
		vehicleClass = "TTT_Blau_Tropentarn";
		uniformClass = "TTT_Uniform_Blau_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_blue_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Violett (Tropentarn)
	#############################################################
	*/
	
	//Violett 1 (Truppfuehrer)
	class TTT_Violett1_Tropentarn : TTT_Truppfuehrer_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 1 (Truppfuehrer)";
		vehicleClass = "TTT_Violett_Tropentarn";
		uniformClass = "TTT_Uniform_Violett_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_violet_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Leader_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Violett 2 (Grenadier)
	class TTT_Violett2_Tropentarn : TTT_Grenadier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 2 (Grenadier)";
		vehicleClass = "TTT_Violett_Tropentarn";
		uniformClass = "TTT_Uniform_Violett_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_violet_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Grenadier_Tropen","TTT_Helmet_2_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Violett 3 (MG-Assistent)
	class TTT_Violett3_Tropentarn : TTT_Mgassistent_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 3 (MG-Assistent)";
		vehicleClass = "TTT_Violett_Tropentarn";
		uniformClass = "TTT_Uniform_Violett_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_violet_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Violett 4 (MG-Schuetze)
	class TTT_Violett4_Tropentarn : TTT_Mgschuetze_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 4 (MG-Schuetze)";
		vehicleClass = "TTT_Violett_Tropentarn";
		uniformClass = "TTT_Uniform_Violett_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_violet_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_4_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Violett 5 (Pionier)
	class TTT_Violett5_Tropentarn : TTT_Pionier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 5 (Pionier)";
		vehicleClass = "TTT_Violett_Tropentarn";
		uniformClass = "TTT_Uniform_Violett_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_violet_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_5_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	//Violett 6 (Pionier)
	class TTT_Violett6_Tropentarn : TTT_Pionier_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Violett 6 (Pionier)";
		vehicleClass = "TTT_Violett_Tropentarn";
		uniformClass = "TTT_Uniform_Violett_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_violet_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Rifleman1_Tropen","TTT_Helmet_6_Tropentarn","ItemMap","ItemCompass","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Wei� (Tropentarn)
	#############################################################
	*/
	
	//Wei� 1 (Feldarzt)
	class TTT_Weiss1_Tropentarn : TTT_Feldarzt_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Weiss 1 (Oberfeldarzt)";
		vehicleClass = "TTT_Weiss_Tropentarn";
		uniformClass = "TTT_Uniform_Weiss_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_white_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_1_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Wei� 2 (Fahrzeugfuehrer)
	class TTT_Weiss2_Tropentarn : TTT_Pilot_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Weiss 2 (Fahrzeugfuehrer)";
		vehicleClass = "TTT_Weiss_Tropentarn";
		uniformClass = "TTT_Uniform_Weiss_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_white_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Falcon","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Falcon","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Wei� 3 (Feldarzt)
	class TTT_Weiss3_Tropentarn : TTT_Feldarzt_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Weiss 3 (Feldarzt)";
		vehicleClass = "TTT_Weiss_Tropentarn";
		uniformClass = "TTT_Uniform_Weiss_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_white_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Medic_Tropen","TTT_Helmet_3_Tropentarn","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Wei� 4 (Stellv.Fahrzeugfuehrer)
	class TTT_Weiss4_Tropentarn : TTT_Pilot_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Weiss 4 (Stellv. Fahrzeugfuehrer)";
		vehicleClass = "TTT_Weiss_Tropentarn";
		uniformClass = "TTT_Uniform_Weiss_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_white_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Falcon","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Falcon","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Adler (Tropentarn)
	#############################################################
	*/
	
	//Adler 1 (Pilot)
	class TTT_Adler1_Tropentarn : TTT_Pilot_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Adler 1 (Pilot)";
		vehicleClass = "TTT_Adler_Tropentarn";
		uniformClass = "TTT_Uniform_Adler_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_silver_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Adler 2 (Copilot)
	class TTT_Adler2_Tropentarn : TTT_Pilot_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Adler 2 (Copilot)";
		vehicleClass = "TTT_Adler_Tropentarn";
		uniformClass = "TTT_Uniform_Adler_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_silver_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Eagle","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	/*
	#############################################################
	### Trupp Bussard (Tropentarn)
	#############################################################
	*/
	
	//Bussard 1 (Pilot)
	class TTT_Bussard1_Tropentarn : TTT_Pilot_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bussard 1 (Pilot)";
		vehicleClass = "TTT_Bussard_Tropentarn";
		uniformClass = "TTT_Uniform_Bussard_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_silver_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Buzzard","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Buzzard","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};
	
	//Bussard 2 (Copilot)
	class TTT_Bussard2_Tropentarn : TTT_Pilot_Base {
		author = "Tactical Training Team";
		scope = 2;
		displayName = "Bussard 2 (Copilot)";
		vehicleClass = "TTT_Bussard_Tropentarn";
		uniformClass = "TTT_Uniform_Bussard_Tropentarn";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_units\bw\tropentarn\uniforms\TTT_uniform_silver_tropentarn.paa"};
		linkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Buzzard","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
		respawnLinkedItems[] = {"BWA3_G_Combat_Clear","BWA3_Vest_Tropen","TTT_Helmet_Buzzard","ItemMap","ItemCompass","BWA3_ItemNaviPad","ItemWatch","tf_anprc152"};
	};