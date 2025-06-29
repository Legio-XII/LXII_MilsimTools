/* ----------------------------------------------------------------------------
Function: LXII_legioArsenal_fnc_addBarracks

Description:
	Adds filtered Arsenal, and other Viking Studios functions such as "Full Heal", etc.
	to an object.

Parameters:
	0: _position - of the module <ARRAY>
	1: _objectUnderCursor - object the module was placed on <OBJECT>

Returns:
	Nothing

Examples:
	[_position, _objectUnderCursor] call LXII_legioArsenal_fnc_addBarracks;

Author:
	Arend
License GPL-2.0
---------------------------------------------------------------------------- */
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull, []]]];

private _objects = _objectUnderCursor;
if (_objects isEqualType objNull) then {
	_objects = [_objects];
};


// Show Filter Dialog
private _availableFilters = [
	"",
	"woodland",
	"desert",
	"winter",
	"solar_auxilia",
	"kasrkin",
	"scion",
	"mission"
];

private _availableFilterNames = [
	["Full", "Unlimited Arsenal!"],
	["Woodland", "Woodland Guardsmen Equipment"],
	["Desert", "Desert Guardsmen Equipment"],
	["Winter", "Winter Guardsmen Equipment"],
	["Solar Auxilia", "Solar Auxilia Equipment"],
	["Kasrkin", "All Legio XII equipment"],
	["Scion", "Scion Equipment Legio XII"],
	["Mission", "Mission Specific Equipment"]
];

private _arsenalObjects = [LXII_legioArsenal_arsenal_objects, true] call LXII_legioArsenal_fnc_strToArray;

private _dialogOptions = [["COMBO", "Filter", [_availableFilters, _availableFilterNames]]];
private _dialogParameters = [["_filter", ""]];

if (isNull (_objects select 0)) then {
	_dialogOptions = [[
		"COMBO",
		"Select object to spawn",
		[
			_arsenalObjects,
			(_arsenalObjects apply {getText (configfile >> "CfgVehicles" >> _x >> "displayName")})
		]
	]] + _dialogOptions;

	_dialogParameters = [["_arsenalObject", ""]] + _dialogParameters;
};


// Add Full Heal?
_dialogOptions = _dialogOptions + [["CHECKBOX", "Add Full Heal?", false]];
_dialogParameters = _dialogParameters + [["_hasFullHeal", false]];


// Add Spectator?
_dialogOptions = _dialogOptions + [["CHECKBOX", "Add Spectator?", false]];
_dialogParameters = _dialogParameters + [["_hasSpectator", false]];

[format["Dialog Settings: %1, Dialog Controls: %2, Obj: %3", _dialogOptions, _dialogParameters, _objects], "legioArsenal\functions\zeus_modules\fn_addBarracks.sqf"] call LXII_legioArsenal_fnc_log;
["Add Filtered Arsenal", _dialogOptions, {
	(_this select 1) params ["_objects", "_position", "_dialogParameters"];
	(_this select 0) params _dialogParameters;

	// Check if module placed on an object
	if (isNull (_objects select 0)) then {
		// Object selected to be spawned
		private _object = _arsenalObject createVehicle _position;
		[format["Object: %1, Chosen Object: %2", _object, _arsenalObject], "legioArsenal\functions\zeus_modules\fn_addBarracks.sqf"] call LXII_legioArsenal_fnc_log;

		["zen_common_addObjects", [[_object], _curator]] call CBA_fnc_serverEvent;
		_objects = [_object];
	};


	// Give server the object, so that everything in future can be applied to the object locally
	if (!isServer) then {
		{
			if (_x setOwner 2) then {
				[format["Changed ownership of %1 to %2", _x, owner _x], "legioArsenal\functions\zeus_modules\fn_addBarracks.sqf"] call LXII_legioArsenal_fnc_log;
			} else {
				[format["Could not change ownership of %1 to %2", _x, owner _x], "legioArsenal\functions\zeus_modules\fn_addBarracks.sqf"] call LXII_legioArsenal_fnc_log;
			};
		} foreach _objects;
	};


	// Add Arsenal 
	[_filter, _objects] remoteExec ["LXII_legioArsenal_fnc_arsenal", 2];

	if (_hasFullHeal) then {
		[_objects] remoteExec ["LXII_legioArsenal_fnc_fullHeal", 2];
	};

	if (_hasSpectator) then {
		{
			[[_x], {[_this select 0] call LXII_legioArsenal_fnc_addSpectator;}] remoteExec ["BIS_fnc_call", 0, _x];
		} foreach _objects;
	};

	// Show Message
	["Barracks functions added!"] call LXII_legioArsenal_fnc_notifyZeus;
}, {}, [_objects, _position, _dialogParameters]] call zen_dialog_fnc_create;
