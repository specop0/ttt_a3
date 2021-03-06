/*
    #############################################################
    ### Desert Rucksaecke
    #############################################################
    */

//Truppfuehrer Rucksack
class TTT_Backpack_Truppfuehrer_Us_Desert : B_AssaultPack_cbr {
    displayName = "TTT Truppfuehrer Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\assault.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
        class _xx_ACE_GD300_b {
            name = "ACE_GD300_b";
            count = 1;
        };
		class Binocular {
			name = "Binocular";
			count = 1;
		};		
    };
    class TransportMagazines {
        class _xx_1Rnd_Smoke_Grenade_shell {
            count = 6;
            magazine = "1Rnd_Smoke_Grenade_shell";
        };
        class _xx_1Rnd_SmokeRed_Grenade_shell {
            count = 6;
            magazine = "1Rnd_SmokeRed_Grenade_shell";
        };
    };
};

//Grenadier Rucksack
class TTT_Backpack_Grenadier_Us_Desert : B_AssaultPack_cbr {
    displayName = "TTT Grenadier Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\assault.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
    };
    class TransportMagazines {
        class _xx_1Rnd_HE_Grenade_shell {
            count = 12;
            magazine = "1Rnd_HE_Grenade_shell";
        };
    };
};

//MG-Assistent Rucksack
class TTT_Backpack_Mgassistent_Us_Desert : B_AssaultPack_cbr {
    displayName = "TTT MG-Assistent Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\assault.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
    };
    class TransportMagazines {
        class _xx_rhsusf_100Rnd_762x51_m80a1epr {
            count = 2;
            magazine = "rhsusf_100Rnd_762x51_m80a1epr";
        };
    };
};

//MG-Schuetze Rucksack
class TTT_Backpack_Mgschuetze_Us_Desert : B_AssaultPack_cbr {
    displayName = "TTT MG-Schuetze Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\assault.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
        class _xx_ACE_SpareBarrel {
            name = "ACE_SpareBarrel";
            count = 1;
        };
    };
    class TransportMagazines {
        class _xx_rhsusf_100Rnd_762x51_m80a1epr {
            count = 2;
            magazine = "rhsusf_100Rnd_762x51_m80a1epr";
        };
    };

};

//LMG-Schuetze Rucksack
class TTT_Backpack_Lmgschuetze_Us_Desert : B_AssaultPack_cbr {
    displayName = "TTT LMG-Schuetze Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\assault.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
        class _xx_ACE_SpareBarrel {
            name = "ACE_SpareBarrel";
            count = 1;
        };
    };
    class TransportMagazines {
        class _xx_rhsusf_200Rnd_556x45_soft_pouch {
            count = 3;
            magazine = "rhsusf_200Rnd_556x45_soft_pouch";
        };
    };
};

//AT-Schuetze Rucksack
class TTT_Backpack_Atschuetze_Us_Desert : B_AssaultPack_cbr {
    displayName = "TTT AT-Schuetze Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\assault.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
    };
};

//Schuetze Rucksack
class TTT_Backpack_Schuetze_Us_Desert : B_AssaultPack_cbr {
    displayName = "TTT Schuetze Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\assault.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
    };
};

//Funker/FAC Rucksack
class TTT_Backpack_Funkerfac_Us_Desert : tf_rt1523g_big_rhs {
    displayName = "TTT Funker/FAC Rucksack (US Desert)";
    tf_range = 50000;
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
        class _xx_ACE_GD300_b {
            name = "ACE_GD300_b";
            count = 1;
        };
    };
    class TransportMagazines {
        class _xx_1Rnd_SmokeRed_Grenade_shell {
            count = 6;
            magazine = "1Rnd_SmokeRed_Grenade_shell";
        };
    };
};

//Pionier Rucksack
class TTT_Backpack_Pionier_Us_Desert : B_Carryall_cbr {
    displayName = "TTT Pionier Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\carryall.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
        class _xx_ACE_VMH3 {
            name = "ACE_VMH3";
            count = 1;
        };
        class _xx_ACE_DefusalKit {
            name = "ACE_DefusalKit";
            count = 1;
        };
        class _xx_ACE_M26_Clacker {
            name = "ACE_M26_Clacker";
            count = 1;
        };
    };
    class TransportMagazines {
        class _xx_SLAMDirectionalMine_Wire_Mag {
            magazine = "SLAMDirectionalMine_Wire_Mag";
            count = 2;
        };
        class _xx_DemoCharge_Remote_Mag {
            magazine = "DemoCharge_Remote_Mag";
            count = 2;
        };
    };
};

//Gefechtssanitaeter Rucksack
class TTT_Backpack_Gefechtssanitaeter_Us_Desert : B_Kitbag_cbr {
    displayName = "TTT Gefechtssanitaeter Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\kitbag.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 10;
        };
        class _xx_ACE_elasticBandage {
            name = "ACE_elasticBandage";
            count = 25;
        };
        class _xx_ACE_quikclot {
            name = "ACE_quikclot";
            count = 20;
        };
        class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 15;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 3;
        };
        class _xx_ACE_salineIV_500 {
            name = "ACE_salineIV_500";
            count = 4;
        };
		class _xx_ACE_salineIV {
            name = "ACE_salineIV";
            count = 2;
        };
        class _xx_ACE_atropine {
            name = "ACE_atropine";
            count = 5;
        };
        class _xx_ACE_epinephrine {
            name = "ACE_epinephrine";
            count = 8;
        };
        class _xx_ACE_morphine {
            name = "ACE_morphine";
            count = 8;
        };
        class _xx_ACE_surgicalKit {
            name = "ACE_surgicalKit";
            count = 3;
        };
    };
};

//Feldarzt Rucksack
class TTT_Backpack_Feldarzt_Us_Desert : B_Kitbag_cbr {
    displayName = "TTT Feldarzt Rucksack (US Desert)";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\backpacks\kitbag.paa" };
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 15;
        };
        class _xx_ACE_elasticBandage {
            name = "ACE_elasticBandage";
            count = 15;
        };
        class _xx_ACE_quikclot {
            name = "ACE_quikclot";
            count = 15;
        };
        class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 15;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
        class _xx_ACE_salineIV {
            name = "ACE_salineIV";
            count = 6;
        };
        class _xx_ACE_atropine {
            name = "ACE_atropine";
            count = 5;
        };
        class _xx_ACE_epinephrine {
            name = "ACE_epinephrine";
            count = 12;
        };
        class _xx_ACE_morphine {
            name = "ACE_morphine";
            count = 12;
        };
        class _xx_ACE_personalAidKit {
            name = "ACE_personalAidKit";
            count = 3;
        };
        class _xx_ACE_surgicalKit {
            name = "ACE_surgicalKit";
            count = 5;
        };
        class _xx_ACE_GD300_b {
            name = "ACE_GD300_b";
            count = 1;
        };
    };
};

//Pilot Rucksack
class TTT_Backpack_Pilot_Us_Desert : tf_rt1523g_big_rhs {
    displayName = "TTT Pilot Rucksack (US Desert)";
    tf_range = 50000;
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
        class _xx_ACE_GD300_b {
            name = "ACE_GD300_b";
            count = 1;
        };
    };
};

//OPL Rucksack
class TTT_Backpack_Opl_Us_Desert : tf_rt1523g_big_rhs {
    displayName = "TTT OPL Rucksack (US Desert)";
    tf_range = 50000;
    class TransportItems {
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 9;
        };
		class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 3;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 2;
        };
        class _xx_ACE_DK10_b {
            name = "ACE_DK10_b";
            count = 1;
        };
    };
};