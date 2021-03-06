/*
	#############################################################
	### TTT Truppfahrzeug
	#############################################################
	*/
	
    class TTT_Truppfahrzeug_Mg_Bw_Tropentarn : CUP_B_Dingo_Wdl {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT Truppfahrzeug MG (BW Tropentarn)";
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

	
    class TTT_Truppfahrzeug_Gl_Bw_Tropentarn : CUP_B_Dingo_GL_Wdl {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT Truppfahrzeug GL (BW Tropentarn)";
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
	
	class TTT_Oplfahrzeug_Bw_Tropentarn : rhsusf_m998_w_4dr_fulltop {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo10.paa"};
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT OPL-Fahrzeug (BW Tropentarn)";
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

    class TTT_Sanitaetsfahrzeug_Bw_Tropentarn : rhsusf_m998_d_2dr_fulltop {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo10.paa" };
        crew = "TTT_Weiss1_Bw_Tropentarn";
        displayName = "TTT Sanitaetsfahrzeug (BW Tropentarn)";
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

    class TTT_TransporterLeichtOffen_Bw_Tropentarn : rhsusf_m998_w_2dr {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo4.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo5.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo6.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo7.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo8.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo9.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo10.paa" };
        crew = "TTT_Schwarz1_Bw_Tropentarn";
        displayName = "TTT Transporter leicht (offen) (BW Tropentarn)";
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
	
    class TTT_Schuetzenpanzer_Bw_Tropentarn : BWA3_Puma_Tropen {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\schuetzenpanzer\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\schuetzenpanzer\camo2_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\schuetzenpanzer\camo3_ca.paa", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)" };
		crew = "TTT_Bronze1_Bw_Tropentarn";
		displayName = "TTT Schuetzenpanzer (BW Tropentarn)";
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
	### TTT Kampfpanzer
	#############################################################
	*/
	
    class TTT_Kampfpanzer_Bw_Tropentarn : BWA3_Leopard2A6M_Tropen {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo2_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo3_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo4_ca.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo5_ca.paa", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)" };
		crew = "TTT_Bronze1_Bw_Tropentarn";
		displayName = "TTT Kampfpanzer (BW Tropentarn)";
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
	
    class TTT_Kampfhelikopter_Bw_Tropentarn : BWA3_Tiger_RMK_Universal {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo2_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo3_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo4_ca.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo5_ca.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo6_ca.paa", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)" };
		crew = "TTT_Adler1_Bw_Tropentarn";
		displayName = "TTT Kampfhelikopter (BW Tropentarn)";
		typicalCargo[] = {};
		accuracy=1000;

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
	
    class TTT_Sanitaetshelikopter_Bw_Tropentarn : RHS_UH60M {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		crew = "TTT_Weiss3_Bw_Tropentarn";
		displayName = "TTT Sanitaetshelikopter (BW Tropentarn)";
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
	
    class TTT_Logistikhelikopter_Bw_Tropentarn : CUP_B_CH53E_GER {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\logistikhelikopter\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\logistikhelikopter\camo2_co.paa"};
		crew = "TTT_Bussard1_Bw_Tropentarn";
		displayName = "TTT Logistikhelikopter (BW Tropentarn)";
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

    class TTT_Transporthelikopter_Bw_Tropentarn : RHS_UH60M {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        crew = "TTT_Habicht1_Bw_Tropentarn";
        displayName = "TTT Transporthelikopter (BW Tropentarn)";
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

    class TTT_Aufklaerungsdrohne_Bw_Tropentarn : CUP_B_USMC_MQ9 {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        displayName = "TTT Aufklaerungsdrohne (BW Tropentarn)";
    };


    /*
    #############################################################
    ### TTT Jet
    #############################################################
    */

    class TTT_Kampfjet_Bw_Tropentarn : FIR_F16C_Standard {
        author = "Tactical Training Team";
        scope = 2;
        scopeCurator = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        displayName = "TTT Kampfjet (BW Tropentarn)";
        crew = "TTT_Platin1_Bw_Tropentarn";
        typicalCargo[] = {};

		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
		};
		class TransportBackpacks {
			backpack_xx(B_Parachute,1);
		};		
    };
