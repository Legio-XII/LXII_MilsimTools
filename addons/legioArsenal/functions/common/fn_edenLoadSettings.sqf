/* ----------------------------------------------------------------------------
Function: LXII_tl_legioArsenal_fnc_edenLoadSettings

Description:
	Loads standard mission settings.

Parameters:
	None

Returns:
	Nothing.

Examples:
	[] call LXII_tl_legioArsenal_fnc_edenLoadSettings;

Author:
	Met
License GPL-2.0
---------------------------------------------------------------------------- */
set3DENMissionAttributes
[
	["Multiplayer", "gameType", "Zeus"],
	["Multiplayer", "minPlayers", 0],
	["Multiplayer", "maxPlayers", 64],
	["Multiplayer", "disabledAI", true],
	["Multiplayer", "respawn", 3],
	["Multiplayer", "respawnTemplates", ["ace_spectator", "Counter", "Wave"]],
	["Multiplayer", "respawnDelay", 90]
];
systemChat "Loaded LXII Settings";
