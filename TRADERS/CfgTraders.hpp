	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"CUPPointerAttachments",
			"MASPointerAttachments",
			//"R3FPointerAttachments",
			"RHSPointerAttachments",
			"SAFAttachments",
			"SMAPointerAttachments",
			"BipodAttachments",
			//"APEXBipodAttachments",		//not used
			//"R3FBipodAttachments",
			"RHSBipodAttachments",
			"SMABipodAttachments",
			"MuzzleAttachments",
			"APEXMuzzleAttachments",
			//"HLCMuzzleAttachments",
			"CUPMuzzleAttachments",
			"MASMuzzleAttachments",
			"NIAMuzzleAttachments",
			//"R3FMuzzleAttachments",
			"RHSMuzzleAttachments",
			"SMAMuzzleAttachments",
			"OpticAttachments",
			"APEXOpticAttachments",
			//"HLCOpticAttachments",
			"CUPOpticAttachments",
			"MASOpticAttachments",
			"NIAOpticAttachments",
			//"R3FOpticAttachments",
			"RHSOpticAttachments",
			"SMAOpticAttachments",
			"NIAAttachments",
			"Ammunition",
			"APEXAmmunition",
			"GREFAmmunition",
			//"HLCAmmunition",
			"CUPAmmunition",
			"MASAmmunition",
			"NIAAmmunition",
			//"R3FAmmunition",
			"RHSAmmunition",
			"SAFAmmunition",
			"SMAAmmunition",
			"Pistols",
			"APEXPistols",
			"CUPPistols",
			"MASPistols",
			//"R3FPistols",
			"RHSPistols",
			"Shotguns",
			"SubMachineGuns",
			"APEXSubMachineGuns",
			"CUPSubMachineGuns",
			"MASSubMachineGuns",
			//"R3FSubMachineGuns",
			"LightMachineGuns",
			"APEXLightMachineGuns",
			//"HLCLightMachineGuns",
			"CUPLightMachineGuns",
			"MASLightMachineGuns",
			"NIALightMachineGuns",
			//"R3FLightMachineGuns",
			"RHSLightMachineGuns",
			"SMALightMachineGuns",
			"AssaultRifles",
			"APEXAssaultRifles",
			//"HAPASSAULTRIFLES",
			//"HLCAssaultRifles",
			"CUPAssaultRifles",
			"MASAssaultRifles",
			"NIAAssaultRifles",
			//"R3FAssaultRifles",
			"RHSAssaultRifles",
			"SMAAssaultRifles",
			"GREFWeapons",
			"SAFWeapons",
			"SniperRifles",
			"APEXSniperRifles",
			//"HAPSNIPERRIFLES",
			//"HLCSniperRifles",
			//"HWPweapons",
			"CUPSniperRifles",
			"MASSniperRifles",
			"NIASniperRifles",
			//"R3FSniperRifles",
			"RHSSniperRifles",
			"NIAMiniGun"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Navigation",
			"ExplosiveWeapons",
			"Explosives",
			"A3Launchers",
			"ApexLaunchers",
			"CUPLaunchers",
			"MASLaunchers",
			//"R3FLaunchers",
			"RHSLaunchers",
			"CUPLauncherAmmo",
			"MASLauncherAmmo",
			//"R3FLauncherAmmo",
			"RHSLauncherAmmo",
			"A3LauncherAmmo",
			"APEXLauncherAmmo",
			"CUPExplosive",
			"MASExplosive",
			"RHSMines",
			"SAFMines"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"APEXHeadgear",
			"CUPHeadgear",
			//"HAPHEADGEAR",
			"MASHeadgear",
			"RHSHeadgear",
			"GREFHeadgear",
			"TRYKHeadgear",
			"SAFHeadgear",
			"Uniforms",
			"APEXUniforms",
			"CUPUniforms",
			//"HAPUNIFORMS",
			"RHSUniforms",
			"GREFUniforms",
			"TRYKUniforms",
			"SAFUniforms",
			"Vests",
			"APEXVests",
			"CUPVests",
			//"HAPVESTS",
			"RHSVests",
			"GREFVests",
			"TACVests",
			"TRYKVests",
			"SAFVests",
			"Backpacks",
			"APEXBackpacks",
			"A3Backpacks",
			"CUPBackpacks",
			//"HAPBACKPACKS",
			"MASBackpacks",
			"TRYKBackpacks",
			"SAFBackpacks",
			"Tools",
			//"APEXTools",		//not used
			"MASTools",
			"FirstAid"


		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			//"R3FTools",
			"ExtendedBaseMod",
			"CBuilding"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Bikes",
			"CUPBikes",
			"Cars",
			"A3Cars",
			"ApexCars",
			//"FMPCars",
			//"FMPTrucks",
			//"HAPCARS",
			//"HVPCars",
			//"JonzieCars",
			"MASCars",
			"CUPUnarmed",
			"ApexTrucks",
			//"HAPTRUCKS",
			"MASTrucks",
			"CUPArmed",
			"MASArmed",
			"A3Armed",
			"RHSVehicles",
			"GREFArmed",
			"GREFUnarmed",
			"SAFArmed",
			"SAFUnarmed",
			//"CTrucks", 	not used any more
			"Trucks",
			"A3Trucks",
			"CUGVs",
			"MASTanks",
			"A3Tanks"
			//"UGV"	
			//"A3UGVs"	
			//"ApexUAVs"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers",
			"ApexChoppers",
			"CChoppers",
			"CUPChoppers",
			"MASChoppers",
			"RHSChoppers",
			"GREFChoppers",
			"SAFChoppers",
			"A3unarmedChoppers",
			"A3armedChoppers",
			"Planes",
			"A3Planes",
			"ApexPlanes",
			"CPlanes",
			"CUPPlanes",
			"HVPPlanes",
			"MASPlanes",
			"RHSPlanes",
			"GREFPlanes"
			//"CUAVs",
			//"A3UAVs",
			//"Pods"		
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats",
			"A3Boats",
			"ApexBoats",
			"CUPBoats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};	
	
	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};
	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};