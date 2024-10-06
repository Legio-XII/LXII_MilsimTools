params [
	["_logic", objNull, [objNull]],
	["_units", [], []],
	["_activated", true, [true]]
];

if (_activated) then

{
	// Create the dialog for whitelist selection
	createDialog "MyZeusModule_WhitelistDialog";

	// Populate the combo box with whitelist options
	private _combo = findDisplay -1 displayCtrl 2100;
	{
		_combo lbAdd _x;
	} forEach ["Whitelist1", "Whitelist2", "Whitelist3"]; // Replace with dynamic loading if needed
}