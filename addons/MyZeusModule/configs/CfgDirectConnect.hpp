/* ----------------------------------------------------------------------------
Config: Direct Connect

Description:
	Registers direct connection tiles to the main menu spotlight.

Author:
	Arend
---------------------------------------------------------------------------- */
class CfgMainMenuSpotlight {
	class bnb_es_operations_server {
		text = "Legio XII Server";
		textIsQuote = 0;
		picture = "MyZeusModule\legio.paa";
		video = "MyZeusModule\LXII_BG_512x512.paa";
		action = "connectToServer [""195.201.242.221"", 2302, """"]"; //This Goes [""IP"", Port, ""Password""], if you dont want the password visible just leave the pasword section empty.
		actionText = "Connect";
		condition = true; //Lies
	};
};