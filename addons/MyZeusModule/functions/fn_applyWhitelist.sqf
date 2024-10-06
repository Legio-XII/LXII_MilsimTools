private _display = findDisplay -1;
private _combo = _display displayCtrl 2100;
private _selectedWhitelist = lbText [_combo, lbCurSel _combo];

// Create the supply crate
private _crate = createVehicle ["Box_NATO_Ammo_F", position player, [], 0, "NONE"];

// Apply the whitelist (pseudo-code, replace with actual ACE Arsenal function)
[_crate, _selectedWhitelist] call ace_arsenal_fnc_setWhitelist;