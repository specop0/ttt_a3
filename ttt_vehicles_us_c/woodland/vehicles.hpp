	/*
	#############################################################
	### TTT Truppfahrzeug
	#############################################################
	*/
	
	class TTT_Truppfahrzeug_Mg_Us_Woodland : UK3CB_BAF_Coyote_Passenger_L111A1_W {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Us";
		vehicleClass = "TTT_Vehicles_Us";
		crew = "TTT_Schwarz1_Us_Woodland";
		displayName = "TTT Truppfahrzeug MG (US Woodland)";
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
	
	
	class TTT_Truppfahrzeug_Gl_Us_Woodland : UK3CB_BAF_Coyote_Passenger_L134A1_W {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Us";
		vehicleClass = "TTT_Vehicles_Us";
		crew = "TTT_Schwarz1_Us_Woodland";
		displayName = "TTT Truppfahrzeug GL (US Woodland)";
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
	
	class TTT_Oplfahrzeug_Us_Woodland : TTT_Oplfahrzeug_Us_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles_us\woodland\oplfahrzeug\camo10.paa"};
		crew = "TTT_Gelb1_Us_Woodland";
		displayName = "TTT OPL-Fahrzeug (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Sanitaetsfahrzeug
	#############################################################
	*/
	
	class TTT_Sanitaetsfahrzeug_Us_Woodland : TTT_Sanitaetsfahrzeug_Us_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetsfahrzeug\camo10.paa"};
		crew = "TTT_Weiss1_Us_Woodland";
		displayName = "TTT Sanitaetsfahrzeug (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Transporter leicht (offen)
	#############################################################
	*/
	
	class TTT_TransporterLeichtOffen_Us_Woodland : TTT_TransporterLeichtOffen_Us_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo1.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo2.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo3.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo4.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo5.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo6.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo7.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo8.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo9.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporterLeichtOffen\camo10.paa"};
		crew = "TTT_Schwarz1_Us_Woodland";
		displayName = "TTT Transporter leicht (offen) (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Schützenpanzer
	#############################################################
	*/

	class TTT_Schuetzenpanzer_Us_Woodland : TTT_Schuetzenpanzer_Us_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\woodland\schuetzenpanzer\camo1.paa", "\ttt_a3\ttt_vehicles_us\woodland\schuetzenpanzer\camo2.paa", "\ttt_a3\ttt_vehicles_us\woodland\schuetzenpanzer\camo3.paa", "\ttt_a3\ttt_vehicles_us\woodland\schuetzenpanzer\camo4.paa"};
		crew = "TTT_Bronze1_Us_Woodland";
		displayName = "TTT Schuetzenpanzer (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Kampfpanzer
	#############################################################
	*/
	
	class TTT_Kampfpanzer_Us_Woodland : TTT_Kampfpanzer_Us_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\woodland\kampfpanzer\camo1_co.paa", "\ttt_a3\ttt_vehicles_us\woodland\kampfpanzer\camo2_co.paa", "\ttt_a3\ttt_vehicles_us\woodland\kampfpanzer\camo3_co.paa", "\ttt_a3\ttt_vehicles_us\woodland\kampfpanzer\camo4_co.paa", "\ttt_a3\ttt_vehicles_us\woodland\kampfpanzer\camo5_co.paa", "\ttt_a3\ttt_vehicles_us\woodland\kampfpanzer\camo6_co.paa"};
		crew = "TTT_Bronze1_Us_Woodland";
		displayName = "TTT Kampfpanzer (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Kampfhelikopter
	#############################################################
	*/
	
	class TTT_Kampfhelikopter_Us_Woodland : TTT_Kampfhelikopter_Us_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\woodland\kampfhelikopter\camo1.paa", "\ttt_a3\ttt_vehicles_us\woodland\kampfhelikopter\camo2.paa", "\ttt_a3\ttt_vehicles_us\woodland\kampfhelikopter\camo3.paa"};
		crew = "TTT_Adler1_Us_Woodland";
		displayName = "TTT Kampfhelikopter (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Sanitaetshelikopter
	#############################################################
	*/	
	
	class TTT_Sanitaetshelikopter_Us_Woodland : TTT_Sanitaetshelikopter_Us_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\woodland\sanitaetshelikopter\camo1.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetshelikopter\camo2.paa", "\ttt_a3\ttt_vehicles_us\woodland\sanitaetshelikopter\camo3.paa"};
		crew = "TTT_Weiss3_Us_Woodland";
		displayName = "TTT Sanitaetshelikopter (US Woodland)";
	};
	
	/*
	#############################################################
	### TTT Logistikhelikopter
	#############################################################
	*/
	
	class TTT_Logistikhelikopter_Us_Woodland : TTT_Logistikhelikopter_Us_Desert {
		author = "Tactical Training Team";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_us\woodland\logistikhelikopter\camo1.paa", "\ttt_a3\ttt_vehicles_us\woodland\logistikhelikopter\camo2.paa", "\ttt_a3\ttt_vehicles_us\woodland\logistikhelikopter\camo3.paa"};
		crew = "TTT_Bussard1_Us_Woodland";
		displayName = "TTT Logistikhelikopter (US Woodland)";
	};

    /*
    #############################################################
    ### TTT Transporthelikopter
    #############################################################
    */

    class TTT_Transporthelikopter_Us_Woodland : TTT_Transporthelikopter_Us_Desert {
        author = "Tactical Training Team";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_us\woodland\transporthelikopter\camo1.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporthelikopter\camo2.paa", "\ttt_a3\ttt_vehicles_us\woodland\transporthelikopter\camo3.paa" };
        crew = "TTT_Habicht1_Us_Woodland";
        displayName = "TTT Transporthelikopter (US Woodland)";
    };
	
	/*
	#############################################################
	### TTT Aufklärungsdrohne
	#############################################################
	*/
	
	class TTT_Aufklaerungsdrohne_Us_Woodland : TTT_Aufklaerungsdrohne_Us_Desert {
		author = "Tactical Training Team";
		displayName = "TTT Aufklaerungsdrohne (US Woodland)";
	};
