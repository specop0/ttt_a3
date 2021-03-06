/*
    #############################################################
    ### TTT Truppfahrzeug
    #############################################################
    */

class TTT_Truppfahrzeug_Mg_Us_Desert : UK3CB_BAF_Coyote_Passenger_L111A1_D {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    crew = "TTT_Schwarz1_Us_Desert";
    displayName = "TTT Truppfahrzeug MG (US Desert)";
    typicalCargo[] = {};

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};


class TTT_Truppfahrzeug_Gl_Us_Desert : UK3CB_BAF_Coyote_Passenger_L134A1_D {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    crew = "TTT_Schwarz1_Us_Desert";
    displayName = "TTT Truppfahrzeug GL (US Desert)";
    typicalCargo[] = {};

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT OPL-Fahrzeug
#############################################################
*/

class TTT_Oplfahrzeug_Us_Desert : rhsusf_m998_w_4dr_fulltop {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles_us\desert\oplfahrzeug\camo10.paa" };
    crew = "TTT_Gelb1_Us_Desert";
    displayName = "TTT OPL-Fahrzeug (US Desert)";
    typicalCargo[] = {};

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT Sanitaetsfahrzeug
#############################################################
*/

class TTT_Sanitaetsfahrzeug_Us_Desert : rhsusf_m998_d_2dr_fulltop {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetsfahrzeug\camo10.paa" };
    crew = "TTT_Weiss1_Us_Desert";
    displayName = "TTT Sanitaetsfahrzeug (US Desert)";
    typicalCargo[] = {};

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
		//Sanitaetsmaterial
		item_xx(ACE_packingBandage,20);
		item_xx(ACE_elasticBandage,20);
		item_xx(ACE_fieldDressing,20);
		item_xx(ACE_quikclot,15);
		item_xx(ACE_atropine,10);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
		item_xx(ACE_salineIV,15);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT Transporter leicht (offen)
#############################################################
*/

class TTT_TransporterLeichtOffen_Us_Desert : rhsusf_m998_w_2dr {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo1.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo2.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo3.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo4.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo5.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo6.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo7.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo8.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo9.paa", "\ttt_a3\ttt_vehicles_us\desert\transporterLeichtOffen\camo10.paa" };
    crew = "TTT_Schwarz1_Us_Desert";
    displayName = "TTT Transporter leicht (offen) (US Desert)";
    typicalCargo[] = {};
    ace_cargo_space = 8;

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT Schützenpanzer
#############################################################
*/

class TTT_Schuetzenpanzer_Us_Desert : RHS_M2A3_BUSKIII {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\desert\schuetzenpanzer\camo1.paa", "\ttt_a3\ttt_vehicles_us\desert\schuetzenpanzer\camo2.paa", "\ttt_a3\ttt_vehicles_us\desert\schuetzenpanzer\camo3.paa", "\ttt_a3\ttt_vehicles_us\desert\schuetzenpanzer\camo4.paa" };
    crew = "TTT_Bronze1_Us_Desert";
    displayName = "TTT Schuetzenpanzer (US Desert)";
    typicalCargo[] = {};
    damageResistance = 0.02;
    radarType = 8;
    driverCanSee = 31;
    gunnerCanSee = 31;
    commanderCanSee = 31;
    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT Kampfpanzer
#############################################################
*/

class TTT_Kampfpanzer_Us_Desert : rhsusf_m1a2sep1tuskiid_Usarmy {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\desert\kampfpanzer\camo1_co.paa", "\ttt_a3\ttt_vehicles_us\desert\kampfpanzer\camo2_co.paa", "\ttt_a3\ttt_vehicles_us\desert\kampfpanzer\camo3_co.paa", "\ttt_a3\ttt_vehicles_us\desert\kampfpanzer\camo4_co.paa", "\ttt_a3\ttt_vehicles_us\desert\kampfpanzer\camo5_co.paa", "\ttt_a3\ttt_vehicles_us\desert\kampfpanzer\camo6_co.paa"};
    crew = "TTT_Bronze1_Us_Desert";
    displayName = "TTT Kampfpanzer (US Desert)";
    typicalCargo[] = {};

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT Kampfhelikopter
#############################################################
*/

class TTT_Kampfhelikopter_Us_Desert : RHS_AH64D {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\desert\kampfhelikopter\camo1.paa", "\ttt_a3\ttt_vehicles_us\desert\kampfhelikopter\camo2.paa", "\ttt_a3\ttt_vehicles_us\desert\kampfhelikopter\camo3.paa" };
    crew = "TTT_Adler1_Us_Desert";
    displayName = "TTT Kampfhelikopter (US Desert)";
    typicalCargo[] = {};
    accuracy = 1000;

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
		backpack_xx(B_Parachute,2);
    };
};

/*
#############################################################
### TTT Sanitaetshelikopter
#############################################################
*/

class TTT_Sanitaetshelikopter_Us_Desert : RHS_UH60M {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\desert\sanitaetshelikopter\camo1.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetshelikopter\camo2.paa", "\ttt_a3\ttt_vehicles_us\desert\sanitaetshelikopter\camo3.paa" };
    crew = "TTT_Weiss3_Us_Desert";
    displayName = "TTT Sanitaetshelikopter (US Desert)";
    typicalCargo[] = {};

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);	
		//Sanitaetsmaterial
 		item_xx(ACE_packingBandage,20);
		item_xx(ACE_elasticBandage,20);
		item_xx(ACE_fieldDressing,20);
		item_xx(ACE_quikclot,15);
		item_xx(ACE_atropine,10);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
		item_xx(ACE_salineIV,15);
	};
    class TransportMagazines {
    };
    class TransportBackpacks {
    };
};

/*
#############################################################
### TTT Logistikhelikopter
#############################################################
*/

class TTT_Logistikhelikopter_Us_Desert : RHS_CH_47F {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\desert\logistikhelikopter\camo1.paa", "\ttt_a3\ttt_vehicles_us\desert\logistikhelikopter\camo2.paa", "\ttt_a3\ttt_vehicles_us\desert\logistikhelikopter\camo3.paa" };
    crew = "TTT_Bussard1_Us_Desert";
    displayName = "TTT Logistikhelikopter (US Desert)";
    typicalCargo[] = {};
    ace_cargo_space = 16;

    class TransportWeapons {
    };
    class TransportItems {
		item_xx(ToolKit,1);
    };
    class TransportMagazines {
    };
    class TransportBackpacks {
		backpack_xx(B_Parachute,30);
    };
};


/*
#############################################################
### TTT Transporthelikopter
#############################################################
*/

class TTT_Transporthelikopter_Us_Desert : RHS_UH60M {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\desert\transporthelikopter\camo1.paa", "\ttt_a3\ttt_vehicles_us\desert\transporthelikopter\camo2.paa", "\ttt_a3\ttt_vehicles_us\desert\transporthelikopter\camo3.paa" };
    crew = "TTT_Habicht1_Us_Desert";
    displayName = "TTT Transporthelikopter (US Desert)";
    typicalCargo[] = {};
    ace_cargo_space = 8;

    class TransportWeapons {

    };
    class TransportItems {
		item_xx(ToolKit,1);

    };
    class TransportMagazines {

    };
    class TransportBackpacks {

    };
};


/*
#############################################################
### TTT Aufklärungsdrohne
#############################################################
*/

class TTT_Aufklaerungsdrohne_Us_Desert : CUP_B_USMC_MQ9 {
    author = "Tactical Training Team";
    scope = 2;
    faction = "TTT_faction_Us";
    vehicleClass = "TTT_Vehicles_Us";
    displayName = "TTT Aufklaerungsdrohne (US Desert)";
};
