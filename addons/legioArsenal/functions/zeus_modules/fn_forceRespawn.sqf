/* ----------------------------------------------------------------------------
Function: LXII_legioArsenal_fnc_forceRespawn

Description:
	Forces all the dead people to respawn immediately.
	After that the respawn is once again set to default timer value.

Parameters:
	Nothing

Returns:
	Nothing

Examples:
	[] call LXII_legioArsenal_fnc_forceRespawn;

Author:
	Ford
	Arend
License GPL-2.0
---------------------------------------------------------------------------- */
{
	setPlayerRespawnTime 0;
	sleep 2;
	setPlayerRespawnTime LXII_legioArsenal_respawn_timer;
} remoteExec ["BIS_fnc_call", 0];
