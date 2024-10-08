class CfgPatches {
	class LXII_tl_legioArsenal {
		// Addon identity
		name = "Legio XII - Core";
		author = "Qaiten";
		authors[] = {"Amateur-god","Arend","Qaiten"};
		url = "https://discord.me/legioxii";
		version = 1.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
		requiredAddons[] = {"A3_Modules_F","cba_settings","ace_arsenal","3DEN"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};
class CfgFunctions {
	class LXII_tl_legioArsenal {
		class common {
			file = "\x\LXII_tl\legioArsenal\functions\common";
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
			class setDefaultLoadouts {};
			class openTimerUI {};
			class setRespawnTimer {};
			class getArsenalFilter {};
			class Arsenal {};
			class fullHeal {};
			class teleport {};
		};

		class zeus_modules {
			file = "\x\LXII_tl\legioArsenal\functions\zeus_modules";
			class addBarracks {};
			class forceRespawn {};
			class addMusicRadio {};
		};

		class eden_modules {
			file = "\x\LXII_tl\legioArsenal\functions\eden_modules";
			class barracksModule {};
		};

		class utilities {
			file = "\x\LXII_tl\legioArsenal\functions\utilities";
			class arrayFlatten {};
			class log {};
			class strToArray {};
			class toBoolean {};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class LXII_tl_legioArsenal_preInit {
		init = "call compile preprocessFileLineNumbers '\x\LXII_tl\legioArsenal\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class LXII_tl_legioArsenal_postInit {
		init = "call compile preprocessFileLineNumbers '\x\LXII_tl\legioArsenal\XEH_postInit.sqf'";
	};
};

// Config features/fixes
#include "configs\CfgDefines.hpp"
#include "configs\CfgEdenGUI.hpp"
#include "configs\CfgEdenLoadouts.hpp"
#include "configs\CfgEdenModules.hpp"
#include "configs\CfgEdenTools.hpp"
#include "configs\CfgEnableDebug.hpp"
#include "configs\CfgLadderTweak.hpp"
#include "configs\CfgMedicalEquipment.hpp"
#include "configs\CfgUnitTrainerTools.hpp"
#include "configs\CfgVehicleDeploy.hpp"
#include "configs\CfgZenMenu.hpp"
#include "configs\CfgZeusActions.hpp"