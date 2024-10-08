/* ----------------------------------------------------------------------------
Function: LXII_legioArsenal_fnc_setRespawnTimer

Description:
	Set the respawn timer CBA Setting.

Parameters:
	0: _time - Time in seconds to set to <NUMBER>

Returns:
	Nothing

Examples:
	[134] call LXII_legioArsenal_fnc_setRespawnTimer;

Author:
	Arend
License GPL-2.0
---------------------------------------------------------------------------- */
params [["_time", 0, [0]]];

[
	"cba_settings_setSettingMission",
	[
		"LXII_legioArsenal_respawn_timer",
		_time,
		1 // Priority
	],
	"LXII_legioArsenal_respawn_timer_event" // Event ID, must be unique
] call CBA_fnc_globalEventJIP;

[format["Respawn timer set to %1", [_time, "M:SS"] call CBA_fnc_formatElapsedTime]] call LXII_legioArsenal_fnc_notifyZeus;
[format["Respawn timer set to %1", [_time, "M:SS"] call CBA_fnc_formatElapsedTime], "legioArsenal\functions\common\fn_setRespawnTimer.sqf"] call LXII_legioArsenal_fnc_log;
