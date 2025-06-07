class CfgPatches {
	class LXII_legioArsenal {
		// Addon identity
		name = "Legio XII - Core";
		author = "Qaiten";
		authors[] = {"Amateur-god","Arend","Qaiten"};
		url = "https://discord.me/legioxii";
		version = 1.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
		requiredAddons[] = {
			"3DEN",
			"cba_settings",
			"ace_common",
			"ace_arsenal",
			"ace_explosives",
			"ace_medical",
			"A3_Modules_F",
			"BNB_FA_LXII"
		};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};
class CfgFunctions {
	class LXII_legioArsenal {
		class common {
			file = "\x\LXII\legioArsenal\functions\common";
			class addDeployActions {};
			class addFullHeal {};
			class addSpectator {};
			class changeSpeakVolume {};
			class edenLoadSettings {};
			class edenCreateAssets {};
			class getCurators {};
			class getDeadPlayers {};
			class getDeployAnimations {};
			class isCurator {};
			class listDeadPlayers {};
			class notifyZeus {};
			// class setDefaultLoadouts {}; // in LXII - Factions
			class openTimerUI {};
			class setRespawnTimer {};
			class getArsenalFilter {};
			class Arsenal {};
			class fullHeal {};
			class teleport {};
		};

		class zeus_modules {
			file = "\x\LXII\legioArsenal\functions\zeus_modules";
			class addBarracks {};
			class forceRespawn {};
			// class addMusicRadio {};
		};

		class eden_modules {
			file = "\x\LXII\legioArsenal\functions\eden_modules";
			class barracksModule {};
		};

		class utilities {
			file = "\x\LXII\legioArsenal\functions\utilities";
			class arrayFlatten {};
			class log {};
			class strToArray {};
			class toBoolean {};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class LXII_legioArsenal_preInit {
		init = "call compile preprocessFileLineNumbers '\x\LXII\legioArsenal\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class LXII_legioArsenal_postInit {
		init = "call compile preprocessFileLineNumbers '\x\LXII\legioArsenal\XEH_postInit.sqf'";
	};
};

// Config features/fixes
#include "Configs\CfgDefines.hpp"
#include "Configs\CfgEdenGUI.hpp"
#include "Configs\CfgEdenLoadouts.hpp"
#include "Configs\CfgEdenModules.hpp"
#include "Configs\CfgEdenTools.hpp"
#include "Configs\CfgEnableDebug.hpp"
// #include "Configs\CfgLadderTweak.hpp"
#include "Configs\CfgMedicalEquipment.hpp"
#include "Configs\CfgUnitTrainerTools.hpp"
#include "Configs\CfgVehicleDeploy.hpp"
#include "Configs\CfgZenMenu.hpp"
#include "Configs\CfgZeusActions.hpp"