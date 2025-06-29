/* ----------------------------------------------------------------------------
Config: Eden Modules

Description:
	Registers 3DEN Modules to be used by our mission makers to
	make their lives easier.

License GPL-2.0

Author:
	Arend
---------------------------------------------------------------------------- */
class CfgFactionClasses {
	class NO_CATEGORY;
	class LXII_legioArsenal_Modules : NO_CATEGORY {
		displayName = "Legio XII Modules";
	};
};

class CfgVehicles {
	class Logic;
	class Module_F : Logic {
		class AttributesBase {
			// class Default;
			// class Edit;
			class Combo;
			class Checkbox;
			// class CheckboxNumber;
			class ModuleDescription;
			// class Units;
		};

		class ModuleDescription {
			class AnyBrain;
		};
	};

	class LXII_legioArsenal_Barracks_Module : Module_F {
		scope = 2;
		displayName = "Barracks Functions";
		// icon = "";
		category = "LXII_legioArsenal_Modules";

		function = "LXII_legioArsenal_fnc_barracksModule";
		functionPriority = 2;
		isGlobal = 0;
		isTriggerActivated = 0;
		is3DEN = 0;

		curatorInfoType = "RscDisplayAttributeModuleNuke﻿";

		class Attributes : AttributesBase {
			class HasArsenal : Checkbox {
				property = "LXII_legioArsenal_Barracks_Module_HasArsenal";
				displayName = "Arsenal";
				tooltip = "Add Arsenal to the object";
				defaultValue = true;
			};

			class ArsenalFilter : Combo {
				property = "LXII_legioArsenal_Barracks_Module_ArsenalFilter";
				displayName = "Arsenal Filter";
				tooltip = "The filter to set on the Arsenal";
				typeName = "STRING";
				defaultValue = "";
				class Values {
					class None {
						name = "Full";
						value = "";
						default = 1;
					};
					class woodland {
						// all camo kits
						name = "Woodland";
						value = "woodland";
					};
					class desert {
						// all camo kits
						name = "Desert";
						value = "desert";
					};
					class winter {
						// all camo kits
						name = "Winter";
						value = "winter";
					};
					class solar_aux {
						// all camo kits
						name = "Solar Auxilia";
						value = "solar_aux";
					};

					class kasrkin {
						// all camo kits
						name = "Kasrkin";
						value = "kasrkin";
					};
					class scion {
						// all camo kits
						name = "Scion";
						value = "scion";
					};
					class Mission {
						name = "Mission";
						value = "mission";
					};
				};
			};

			class HasFullHeal : Checkbox {
				property = "LXII_legioArsenal_Barracks_Module_HasFullHeal";
				displayName = "Full Heal";
				tooltip = "Add Full Heal to object";
				defaultValue = true;
			};

			class HasSpectator : Checkbox {
				property = "LXII_legioArsenal_Barracks_Module_HasSpectator";
				displayName = "Spectator";
				tooltip = "Add Spectator to object";
				defaultValue = true;
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription {
			description = "Add LXII barracks functions to synced objects";
			sync[] = {"LocationArea_F"};

			class LocationArea_F {
				description[] = {
					"Add barracks functions to synced objects that give the players certain Legio XII functions to use via ACE interaction.",
					"",
					"Barracks functions include:",
					"- Filtered Arsenal",
					"- Full Heal"
				};
				position = 0;
				direction = 0;
				optional = 1;
				duplicate = 1;
				synced[] = {"AnyBrain"};
			};
		};
	};
};
