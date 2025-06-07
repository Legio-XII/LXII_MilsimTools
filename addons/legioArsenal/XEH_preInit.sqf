/*
License GPL-2.0
*/
private _LXII_legioArsenal_settings = [
    [
		"LXII_legioArsenal_debug",
		"CHECKBOX",
		["Enable Debug", "Tick enable Legio XII debug messages to appear in RPT and systemChat"],
		["Legio XII Common", "Development"],
		false
	],
	[
		"LXII_legioArsenal_arsenal_objects",
		"EDITBOX",
		["Arsenal Objects", "Classnames, separated by commas and without double quotations, of objects that are spawnable by ""Add Filtered Arsenal"" module"],
		["Legio XII Zeus", "Modules"],
		"C_supplyCrate_F,B_Slingload_01_Ammo_F"
	],
	[
		"LXII_legioArsenal_respawn_timer",
		"SLIDER",
		["Respawn Timer (seconds)", "Number of seconds player waves need to wait before respawn (0 -> 600 (10 minutes))"],
		["Legio XII Zeus", "Respawn"],
		[1, 600, 5, 0],
		1,
		{
			setPlayerRespawnTime _this;
		}
	],
	[
		"LXII_legioArsenal_map_volume",
		"SLIDER",
		["Map Volume", "Volume to set when in a vehicle and looking at the map (so that you don't have to listen to loud as fuck helicopter rotors)"],
		"Legio XII Common",
		[0, 1, 0.20, 2]
	],
	[
        "LXII_legioArsenal_arsenal_whitelist_woodland",
        "EDITBOX",
        ["Woodland", "Default equipment whitelist"],
        ["Legio XII Arsenal", "Arsenal Whitelists"],
        "[]",
        1,
        {
            // One day this will re-init all arsenals that have this filter set
        },
        true
    ],
	[
        "LXII_legioArsenal_arsenal_whitelist_desert",
        "EDITBOX",
        ["Desert", "Default equipment whitelist"],
        ["Legio XII Arsenal", "Arsenal Whitelists"],
        "[]",
        1,
        {
            // One day this will re-init all arsenals that have this filter set
        },
        true
    ],
	[
        "LXII_legioArsenal_arsenal_whitelist_winter",
        "EDITBOX",
        ["Winter", "Default equipment whitelist"],
        ["Legio XII Arsenal", "Arsenal Whitelists"],
        "[]",
        1,
        {
            // One day this will re-init all arsenals that have this filter set
        },
        true
    ],
	[
        "LXII_legioArsenal_arsenal_whitelist_winter",
        "EDITBOX",
        ["Winter", "Default equipment whitelist"],
        ["Legio XII Arsenal", "Arsenal Whitelists"],
        "[]",
        1,
        {
            // One day this will re-init all arsenals that have this filter set
        },
        true
    ],
	[
		"LXII_legioArsenal_arsenal_whitelist_solar_aux",
		"EDITBOX",
		["Solar Auxilia", "Mission specific equipment whitelist"],
		["Legio XII Arsenal", "Arsenal Whitelists"],
		"[]",
		1,
		{
			// One day this will re-init all arsenals that have this filter set
		},
		true
	],
	[
        "LXII_legioArsenal_arsenal_whitelist_kasrkin",
        "EDITBOX",
        ["Kasrkin", "Default equipment whitelist"],
        ["Legio XII Arsenal", "Arsenal Whitelists"],
        "[]",
        1,
        {
            // One day this will re-init all arsenals that have this filter set
        },
        true
    ],
	[
        "LXII_legioArsenal_arsenal_whitelist_scion",
        "EDITBOX",
        ["Scion", "Default equipment whitelist"],
        ["Legio XII Arsenal", "Arsenal Whitelists"],
        "[]",
        1,
        {
            // One day this will re-init all arsenals that have this filter set
        },
        true
    ]
];

{_x call CBA_Settings_fnc_init;} forEach _LXII_legioArsenal_settings;
CHVD_allowNoGrass = false;
