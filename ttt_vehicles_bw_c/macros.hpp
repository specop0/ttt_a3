/// item macros definition ///
#define item_2(a) a, a
#define item_3(a) a, a, a
#define item_4(a) a, a, a, a
#define item_5(a) a, a, a, a, a
#define item_6(a) a, a, a, a, a, a
#define item_7(a) a, a, a, a, a, a, a
#define item_8(a) a, a, a, a, a, a, a, a
#define item_9(a) a, a, a, a, a, a, a, a, a
#define item_10(a) a, a, a, a, a, a, a, a, a, a
#define item_11(a) a, a, a, a, a, a, a, a, a, a, a
#define item_12(a) a, a, a, a, a, a, a, a, a, a, a, a

/// Equipment list macros definition ///
#define mag_xx(a,b) class _xx_##a {magazine = #a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = #a; count = b;}
#define item_xx(a,b) class _xx_##a {name = #a; count = b;}
#define backpack_xx(a,b) class _xx_##a {backpack = #a; count = b;}

/// Standardausrüstung ///
#define default_weapons "Throw", "Put"
#define default_linkedItems "BWA3_G_Combat_Clear", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" 
#define default_ace_items "ACE_NVG_Wide", item_2(ACE_IR_Strobe_Item), "ACE_MapTools", "ACE_Flashlight_MX991"

/// Backpack Medic Stuff ///		
#define vehicle_medic_supply_standard \
	item_xx(ACE_elasticBandage,15); \
	item_xx(packingBandage,10);
	
/// Vest Config ///
#define get_vest(army,group,kind,camo) get_str(append_dummy(append_dummy(append_dummy(TTT_Vest_##kind)_##group)_##army)_##camo)

/// Stringification Marco ///
#define get_str(string) #string

///Dummy Marco for Appending Strings ///
#define append_dummy(str) str
