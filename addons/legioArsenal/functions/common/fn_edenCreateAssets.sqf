/* ----------------------------------------------------------------------------
	Function: LXII_legioArsenal_fnc_edenCreateAssets

	Description:
	Creates mission slots, modules and markers.

	Parameters:
	0: _callsign - The platoon callsign that all sections will use <String>
	1: _zeusCallsign - The callsign that HQ will use <String>
	2: _camo - The camo the units will use <String>
	3: _numberOfSections - The number of sections to spawn <Number>
	4: _createDefaults - Whether to create a section to use as default loadout units <Bool>

	Returns:
	Nothing.

	Examples:
	["Odin", "Valhalla", "Woodland", 3, false] call LXII_legioArsenal_fnc_edenCreateAssets;

	Author:
	Met
License GPL-2.0
---------------------------------------------------------------------------- */
params [["_callsign", "Cohort", [""]], ["_zeusCallsign", "Centurion", [""]], ["_camo", "Woodland", [""]], ["_numberOfSections", 3, [0]]];

if (_callsign == "") then {
	_callsign = "Cohort";
};

if (_zeusCallsign == "") then {
	_zeusCallsign = "Centurion";
};

if (_camo == "") then {
	_camo = "Woodland";
};

_camo = toUpper _camo;
private _camoMap = [
    ["WOODLAND", "WDLD"],
    ["DESERT", "DSRT"],
    ["WINTER", "WNTR"],
    ["SOLAR_AUX", "SA"]
];
private _camoShort = _camo;
{
    if (_camo == _x select 0) exitWith { _camoShort = _x select 1; };
} forEach _camoMap;

_nameZeus = format ["LXII_zeus_%1", _camoShort];
_nameSection = format ["LXII_section_%1", _camoShort];
_nameCommand = format ["LXII_command_%1", _camoShort];
_nameDefaults = format ["LXII_defaults_%1", _camoShort];

_centralPos = screenToWorld [0.5, 0.5];
_camPos = [getPosATL get3DENCamera select 0, getPosATL get3DENCamera select 1, 0];
_spawnPos = _centralPos;
if (_centralPos distance _camPos > 500) then {
	_spawnPos = _camPos;
};

_entities =
[
	[
		["Marker", "mil_circle", _spawnPos vectorAdd [10, 0]],
		["markerName", "respawn"],
		["text", "respawn"]
	],
	[
		["Logic", "ModuleCurator_F", _spawnPos vectorAdd [-1, 0]],
		["ModuleCurator_F_Owner", "zeusOne"],
		["ModuleCurator_F_Name", "Active Zeus"],
		["ModuleCurator_F_Addons", 3]
	],
	[
		["Logic", "ModuleCurator_F", _spawnPos vectorAdd [-1, -1]],
		["ModuleCurator_F_Owner", "zeusTwo"],
		["ModuleCurator_F_Name", "Assistant Zeus"],
		["ModuleCurator_F_Addons", 3]
	],
	[
		["Logic", "ModuleCurator_F", _spawnPos vectorAdd [-1, -2]],
		["ModuleCurator_F_Owner", "#adminLogged"],
		["ModuleCurator_F_Name", "Admin"],
		["ModuleCurator_F_Addons", 3]
	],
	[
		["Object", "B_supplyCrate_F", _spawnPos vectorAdd [-3, 6]],
		["allowDamage", false],
		["ArsenalObject", true]
	],
	[
		["Logic", "LXII_legioArsenal_Barracks_Module", _spawnPos vectorAdd [-4, 7]],
		["LXII_legioArsenal_Barracks_Module_ArsenalFilter", "Full"],
		["ArsenalObject", true]
	],
	[
		["Object", "B_supplyCrate_F", _spawnPos vectorAdd [-5, 6]],
		["allowDamage", false],
		["ArsenalObject", true]
	]
];

_sections =
[
    [
        [configfile >> "CfgGroups" >> "West" >> "LXII_legioArsenal_hidden_faction" >> "LXII_legioArsenal_tools" >> "infantry" >> _nameCommand, _spawnPos vectorAdd [0, 0]],
        "Command",
        ["description", format ["1: 1IC@%1 1-Actual", _callsign ]]
    ],
    [
        [configfile >> "CfgGroups" >> "West" >> "LXII_legioArsenal_hidden_faction" >> "LXII_legioArsenal_tools" >> "infantry" >> _nameZeus, _spawnPos vectorAdd [1, 2]],
        "Zeus",
        ["description", format ["1: Zeus@%1", _zeusCallsign]]
    ]
];

// The main sections
_num = 0;
for "_i" from 1 to _numberOfSections do {
    create3DENComposition [configfile >> "CfgGroups" >> "West" >> "LXII_legioArsenal_hidden_faction" >> "LXII_legioArsenal_tools" >> "infantry" >> _nameSection, _spawnPos vectorAdd [_num, 0, 0]];
	set3DENAttributes [[get3DENSelected "Group", "groupID", format ["1-%1 Sec", _i]], [get3DENSelected "Object", "ControlMP", true]];
	_group = get3DENselected "Object" select 0;
	_ix = 3;
	{
		_unitDisplayName = [configfile >> "CfgVehicles" >> typeOf _x] call BIS_fnc_displayName;
		if (_unitDisplayName == "IC Woodland" && !isFormationLeader _x) then {
			_x set3DENAttribute ["description", "2: 2IC"];
		} else {
			if (_x getUnitTrait "Medic") then {
				_x set3DENAttribute ["description", "3: Medic"];
			} else {
				if (_ix <= 6) then {
					_x set3DENAttribute ["description", format ["%1: Open", _ix]];
				} else {
					_x set3DENAttribute ["description", format ["%1: Rifleman", _ix]];
				};
				_ix = _ix + 1;
			};
		};
	} forEach units _group;
	leader _group set3DENAttribute ["description", format ["1: 1IC@%1 1-%2", _callsign, _i]];
	set3DENSelected [];
	_num = _num + 2;
};

// Command and Zeus
{
	_configPath = _x select 0;
	_attributeOne = _x select 1;
	_attributeTwo = _x select 2;
	create3DENComposition _configPath;
	set3DENAttributes [[get3DENSelected "Group", "groupID", _attributeOne], [get3DENSelected "Object", "ControlMP", true]];
	_groupComp = get3DENSelected "Object";
	_group = _groupComp select 0;
	if ((_attributeOne) == "Zeus") then {
    private _zeusUnits = units _group;
    if (count _zeusUnits > 0) then {
        (_zeusUnits select 0) set3DENAttribute ["name", "zeusOne"];
    };
    if (count _zeusUnits > 1) then {
        (_zeusUnits select 1) set3DENAttribute ["name", "zeusTwo"];
        (_zeusUnits select 1) set3DENAttribute ["description", "2: A.Zeus"];
    };
} else {
		{
			_unitDisplayName = [configfile >> "CfgVehicles" >> typeOf _x] call BIS_fnc_displayName;
			if (_unitDisplayName == "IC Woodland" && !isFormationLeader _x) then {
				_x set3DENAttribute ["description", "2: 2IC"];
			} else {
				if (_x getUnitTrait "Medic") then {
					_x set3DENAttribute ["description", "3: Medic"];
				} else {
					_x set3DENAttribute ["description", "4: Open"];
				};
			};
		} forEach units _group;
	};
	leader _group set3DENAttribute _attributeTwo;
	set3DENSelected [];
} forEach _sections;

// default Loadouts
// if (_createDefaults) then {
// 	create3DENComposition [configfile >> "CfgGroups" >> "West" >> "LXII_legioArsenal_compositions" >> "infantry" >> _nameDefaults, _spawnPos vectorAdd [_num + 2, 3, 0]];
// 	set3DENAttributes [[get3DENSelected "Group", "groupID", "Default Loadouts"], [get3DENSelected "Object", "LXII_legioArsenal_3den_Loadout", true]];
// 	_groupComp = get3DENSelected "Object";
// 	{
// 		_unitDisplayName = [configfile >> "CfgVehicles" >> typeOf _x] call BIS_fnc_displayName;
// 		_x set3DENAttribute ["LXII_legioArsenal_3den_LoadoutName", _unitDisplayName];
// 	} forEach _groupComp;
// 	set3DENSelected [];
// };

// Spawn entities (Zeus modules, Arsenals, etc.)
{
    private _entityData = _x;
    private _args = _entityData select 0;
    private _attributes = _entityData select [1, count _entityData - 1];
    private _entity = create3DENEntity _args;
    {
        _entity set3DENAttribute _x;
    } forEach _attributes;
} forEach _entities;

// Close the dialog after spawning assets
closeDialog 0;
