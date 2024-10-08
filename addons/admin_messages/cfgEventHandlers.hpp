class Extended_PostInit_EventHandlers {
	class LXII_CORE_admin_messages {
		serverInit = "call compile preprocessFileLineNumbers '\x\LXII_tl\admin_messages\XEH_postInit.sqf'";
	};
};

class Extended_PreInit_EventHandlers {
	class LXII_CORE_admin_messages {
		clientInit = "call compile preprocessFileLineNumbers '\x\LXII_tl\admin_messages\XEH_preClientInit.sqf'";
	};
};
