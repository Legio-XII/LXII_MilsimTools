/* ----------------------------------------------------------------------------
Config: Zeus Actions

Description:
	Registers Zeus ACE interactions for Zeus tools where a Module is
	overkill.

Author:
	Arend

License GPL-2.0
---------------------------------------------------------------------------- */
class ACE_ZeusActions {
	class LXII_tl_legioArsenal_Zeus_Tools {
		displayName = "Legio XII Tools";
		icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";

		class Get_Dead_Players {
			displayName = "List dead players";
			icon = "z\ace\addons\respawn\UI\Icon_Module_Rallypoint_ca.paa";
			statement = "[] call LXII_tl_legioArsenal_fnc_listDeadPlayers";

			class Get_Dead_West_Players {
				displayName = "List dead BLUFOR players";
				icon = "z\ace\addons\respawn\UI\Icon_Module_Rallypoint_ca.paa";
				statement = "[west] call LXII_tl_legioArsenal_fnc_listDeadPlayers";
				condition = "count ((call LXII_tl_legioArsenal_fnc_getDeadPlayers) select 0) > 0";
			};

			class Get_Dead_East_Players {
				displayName = "List dead OPFOR players";
				icon = "z\ace\addons\respawn\UI\Icon_Module_Rallypoint_ca.paa";
				statement = "[east] call LXII_tl_legioArsenal_fnc_listDeadPlayers";
				condition = "count ((call LXII_tl_legioArsenal_fnc_getDeadPlayers) select 1) > 0";
			};

			class Get_Dead_Resistance_Players {
				displayName = "List dead Independent players";
				icon = "z\ace\addons\respawn\UI\Icon_Module_Rallypoint_ca.paa";
				statement = "[resistance] call LXII_tl_legioArsenal_fnc_listDeadPlayers";
				condition = "count ((call LXII_tl_legioArsenal_fnc_getDeadPlayers) select 2) > 0";
			};

			class Get_Dead_Civilian_Players {
				displayName = "List dead Civilian players";
				icon = "z\ace\addons\respawn\UI\Icon_Module_Rallypoint_ca.paa";
				statement = "[civilian] call LXII_tl_legioArsenal_fnc_listDeadPlayers";
				condition = "count ((call LXII_tl_legioArsenal_fnc_getDeadPlayers) select 3) > 0";
			};
		};

		class Set_Respawn_Timer {
			displayName = "Set Respawn Timer";
			icon = "\z\ace\addons\explosives\data\UI\Timer.paa";
			statement = "[LXII_tl_legioArsenal_respawn_timer] call LXII_tl_legioArsenal_fnc_openTimerUI";
		};
	};
};
