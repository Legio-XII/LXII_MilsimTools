class CfgPatches {
    class MyZeusModule {
        author = "FarCry";
        version = 1.0.0;
        icon = "\MyZeusModule\legio.paa";
        units[] = {"MyZeusModule_ACEArsenal"};
        requiredAddons[] = {"A3_Modules_F", "A3_Modules_F_Curator", "A3_UI_F", "A3_UI_F_Curator", "ace_arsenal"};
    };
};

class CfgFunctions {
    class MyZeusModule {
        class Functions {
            file = "\MyZeusModule\functions";
            class initModule {
                postInit = 1;
            };
            class applyWhitelist {};
        };
    };
};

class CfgFactionClasses 
{
	class NO_CATEGORY;
	class LegioXII_Tools : NO_CATEGORY {
		displayName = "Legio XII Tools";
	};
};

class CfgVehicles {
    class Logic;
    class Module_F: Logic {

        class ArgumentsBaseUnits {
			class Units;
        };

        class ModuleDescription {
            class AnyBrain;
            class AnyPlayer;
        };
    };

    class MyZeusModule_ACEArsenal: Module_F 
    {
        author = "FarCry";
        vehicleClass = "Modules";
        category = "LegioXII_Tools";

        scope = 2;
        scopeCurator = 2;

        displayName = "LXII Arsenal";
        icon = "\MyZeusModule\legio.paa";
        function = "MyZeusModule_fnc_initModule";
        functionPriority = 1;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 1;
        curatorCanAttach = 1;
        //curatorInfoType = "RscDisplayAttributeModuleArsenal";

        class Arguments: ArgumentsBaseUnits {};

        class ModuleDescription: ModuleDescription 
        {
            description = "Select an ACE Arsenal Whitelist and apply it to a supply crate.";
            sync[] = {};
        };
    };
};

#include "\MyZeusModule\whitelists.hpp"
#include "\MyZeusModule\dialogs\dialog.hpp"