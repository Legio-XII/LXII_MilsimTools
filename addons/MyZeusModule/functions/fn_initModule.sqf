params ["_logic"];

// Debugging hint to check the type and value of _logic
hint format ["_logic type: %1, value: %2", typeName _logic, _logic];

// Ensure _logic is an object
if (typeName _logic != "OBJECT") exitWith {
    hint "Error: _logic is not an object";
};

// Add an event handler to trigger when the module is activated by Zeus
_logic addEventHandler ["CuratorObjectPlaced", {
    params ["_curator", "_module", "_placedObject"];

    // Check if the placed object is the module
    if (_placedObject isEqualTo _module) then {
        // Create the dialog for whitelist selection
        createDialog "MyZeusModule_WhitelistDialog";

        // Populate the combo box with whitelist options
        private _display = findDisplay 312;
        private _listbox = _display displayCtrl 2100;
        {
            _listbox lbAdd _x;
        } forEach ["Kasrkin", "Scions", "Mission"]; // Replace with dynamic loading if needed
    };
}];