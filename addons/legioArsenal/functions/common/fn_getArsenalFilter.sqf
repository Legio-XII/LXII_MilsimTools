params [["_filter", "", [""]]];

[format["Getting whitelists for filter %1", _filter], "legioArsenal\functions\common\fn_getArsenalFilter.sqf"] call lxii_legioArsenal_fnc_log;
private _whitelist = [];
switch (toLowerANSI _filter) do {
	case "mission": { _whitelist = parseSimpleArray lxii_legioArsenal_arsenal_whitelist_mission; };
	case "Kasrkin": { _whitelist = parseSimpleArray lxii_legioArsenal_arsenal_whitelist_Kasrkin; };
	default { _whitelist = true; };
};

// Is it empty?
if (_whitelist isEqualTo []) then {
	_whitelist = true;
	_filter = format["(was %1, now reset)", _filter];
	[format["Arsenal Whitelist is empty. Filling Arsenal with everything instead. %1", _filter], "legioArsenal\functions\common\fn_getArsenalFilter.sqf"] call lxii_legioArsenal_fnc_log;
};

_whitelist;