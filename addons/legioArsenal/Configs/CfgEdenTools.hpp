/*License GPL-2.0*/
#define LXII_ASTEAMLEADER_WDLD "BNB_FA_LXII_IC_Woodland"
#define LXII_TEAMLEADER_WDLD "BNB_FA_LXII_IC_Woodland"
#define LXII_MEDIC_WDLD "BNB_FA_LXII_Medic_Woodland"
#define LXII_RIFLEMAN_WDLD "BNB_FA_LXII_Rifleman_Woodland"
#define LXII_ASTEAMLEADER_DSRT "BNB_FA_LXII_IC_Desert"
#define LXII_TEAMLEADER_DSRT "BNB_FA_LXII_IC_Desert"
#define LXII_MEDIC_DSRT "BNB_FA_LXII_Medic_Desert"
#define LXII_RIFLEMAN_DSRT "BNB_FA_LXII_Rifleman_Desert"
#define LXII_ASTEAMLEADER_WNTR "BNB_FA_LXII_IC_Winter"
#define LXII_TEAMLEADER_WNTR "BNB_FA_LXII_IC_Winter"
#define LXII_MEDIC_WNTR "BNB_FA_LXII_Medic_Winter"
#define LXII_RIFLEMAN_WNTR "BNB_FA_LXII_Rifleman_Winter"
#define LXII_ASTEAMLEADER_SA "BNB_FA_LXII_IC_SA"
#define LXII_TEAMLEADER_SA "BNB_FA_LXII_IC_SA"
#define LXII_MEDIC_SA "BNB_FA_LXII_Medic_SA"
#define LXII_RIFLEMAN_SA "BNB_FA_LXII_Rifleman_SA"

class ctrlMenuStrip;
class display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class Tools {
					items[] += {"LXII_legioArsenal_Tools"};
				};
				class LXII_legioArsenal_tools {
					text = "LXII Tools...";
					items[] = {"LXII_legioArsenal_Settings", "LXII_legioArsenal_Assets"};
				};
				class LXII_legioArsenal_settings {
					text = "Load LXII Settings";
					action = "['Are you sure you want to overwrite current settings with LXII defaults?', 'Load LXII Settings', ['Overwrite', {[] call LXII_legioArsenal_fnc_edenLoadSettings}], true] call BIS_fnc_3DENShowMessage";
				};
				class LXII_legioArsenal_assets {
					text = "Load LXII Slots & Modules";
					action = "findDisplay 313 createDisplay 'LXII_legioArsenal_edenGUI'";
				};
			};
		};
	};
};

// Create a completely hidden faction for these groups
class CfgFactionClasses {
	class LXII_legioArsenal_hidden_faction {
		displayName = "";
		scope = 1;  // Completely hidden faction
		priority = 0;
		side = 1;
	};
};

class CfgGroups
{
	class West {
		class LXII_legioArsenal_hidden_faction {
			name = "LXII (3DEN Script Use)";
			scope = 1;
				class infantry {
					name = "Infantry";
					scope = 1;
					class LXII_zeus_WDLD {
						name = "Zeus Woodland";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							position[] = {0,0,0};
							vehicle = LXII_ASTEAMLEADER_WDLD;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							position[] = {1,0,0};
							vehicle = LXII_ASTEAMLEADER_WDLD;
							rank = "PRIVATE";
						};
					};
					class LXII_section_WDLD {
						name = "Section Woodland";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_TEAMLEADER_WDLD;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {0,-3,0};
							vehicle = LXII_ASTEAMLEADER_WDLD;
							rank = "PRIVATE";
						};
						class Unit2 {
							side = 1;
							scope = 1;
							position[] = {0,-6,0};
							vehicle = LXII_MEDIC_WDLD;
							rank = "PRIVATE";
						};
						class Unit3 {
							side = 1;
							scope = 1;
							position[] = {0,-9,0};
							vehicle = LXII_RIFLEMAN_WDLD;
							rank = "PRIVATE";
						};
						class Unit4 {
							side = 1;
							scope = 1;
							position[] = {1,0,0};
							vehicle = LXII_RIFLEMAN_WDLD;
							rank = "PRIVATE";
						};
						class Unit5 {
							side = 1;
							scope = 1;
							position[] = {1,-3,0};
							vehicle = LXII_RIFLEMAN_WDLD;
							rank = "PRIVATE";
						};
						class Unit6 {
							side = 1;
							scope = 1;
							position[] = {1,-6,0};
							vehicle = LXII_RIFLEMAN_WDLD;
							rank = "PRIVATE";
						};
						class Unit7 {
							side = 1;
							scope = 1;
							position[] = {1,-9,0};
							vehicle = LXII_RIFLEMAN_WDLD;
							rank = "PRIVATE";
						};

					};
					class LXII_command_WDLD {
						name = "Command Section Woodland";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_TEAMLEADER_WDLD;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {0,-3,0};
							vehicle = LXII_ASTEAMLEADER_WDLD;
							rank = "PRIVATE";
						};
						class Unit2{
							side = 1;
							scope = 1;
							position[] = {0,-6,0};
							vehicle = LXII_MEDIC_WDLD;
							rank = "PRIVATE";
						};
						class Unit3 {
							side = 1;
							scope = 1;
							position[] = {0,-9,0};
							vehicle = LXII_RIFLEMAN_WDLD;
							rank = "PRIVATE";
						};
					};
					class LXII_zeus_DSRT {
						name = "Zeus Desert";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_ASTEAMLEADER_DSRT;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {1,0,0};
							vehicle = LXII_ASTEAMLEADER_DSRT;
							rank = "PRIVATE";
						};
					};
					class LXII_section_DSRT {
						name = "Section Desert";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_TEAMLEADER_DSRT;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {0,-3,0};
							vehicle = LXII_ASTEAMLEADER_DSRT;
							rank = "PRIVATE";
						};
						class Unit2 {
							side = 1;
							scope = 1;
							position[] = {0,-6,0};
							vehicle = LXII_MEDIC_DSRT;
							rank = "PRIVATE";
						};
						class Unit3 {
							side = 1;
							scope = 1;
							position[] = {0,-9,0};
							vehicle = LXII_RIFLEMAN_DSRT;
							rank = "PRIVATE";
						};
						class Unit4 {
							side = 1;
							scope = 1;
							position[] = {1,0,0};
							vehicle = LXII_RIFLEMAN_DSRT;
							rank = "PRIVATE";
						};
						class Unit5 {
							side = 1;
							scope = 1;
							position[] = {1,-3,0};
							vehicle = LXII_RIFLEMAN_DSRT;
							rank = "PRIVATE";
						};
						class Unit6 {
							side = 1;
							scope = 1;
							position[] = {1,-6,0};
							vehicle = LXII_RIFLEMAN_DSRT;
							rank = "PRIVATE";
						};
						class Unit7 {
							side = 1;
							scope = 1;
							position[] = {1,-9,0};
							vehicle = LXII_RIFLEMAN_DSRT;
							rank = "PRIVATE";
						};
					};
					class LXII_command_DSRT {
						name = "Command Section Desert";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_TEAMLEADER_DSRT;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {0,-3,0};
							vehicle = LXII_ASTEAMLEADER_DSRT;
							rank = "PRIVATE";
						};
						class Unit2{
							side = 1;
							scope = 1;
							position[] = {0,-6,0};
							vehicle = LXII_MEDIC_DSRT;
							rank = "PRIVATE";
						};
						class Unit3 {
							side = 1;
							scope = 1;
							position[] = {0,-9,0};
							vehicle = LXII_RIFLEMAN_DSRT;
							rank = "PRIVATE";
						};
					};
					class LXII_zeus_WNTR {
						name = "Zeus Winter";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_ASTEAMLEADER_WNTR;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {1,0,0};
							vehicle = LXII_ASTEAMLEADER_WNTR;
							rank = "PRIVATE";
						};
					};
					class LXII_section_WNTR {
						name = "Section Winter";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_TEAMLEADER_WNTR;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {0,-3,0};
							vehicle = LXII_ASTEAMLEADER_WNTR;
							rank = "PRIVATE";
						};
						class Unit2 {
							side = 1;
							scope = 1;
							position[] = {0,-6,0};
							vehicle = LXII_MEDIC_WNTR;
							rank = "PRIVATE";
						};
						class Unit3 {
							side = 1;
							scope = 1;
							position[] = {0,-9,0};
							vehicle = LXII_RIFLEMAN_WNTR;
							rank = "PRIVATE";
						};
						class Unit4 {
							side = 1;
							scope = 1;
							position[] = {1,0,0};
							vehicle = LXII_RIFLEMAN_WNTR;
							rank = "PRIVATE";
						};
						class Unit5 {
							side = 1;
							scope = 1;
							position[] = {1,-3,0};
							vehicle = LXII_RIFLEMAN_WNTR;
							rank = "PRIVATE";
						};
						class Unit6 {
							side = 1;
							scope = 1;
							position[] = {1,-6,0};
							vehicle = LXII_RIFLEMAN_WNTR;
							rank = "PRIVATE";
						};
						class Unit7 {
							side = 1;
							scope = 1;
							position[] = {1,-9,0};
							vehicle = LXII_RIFLEMAN_WNTR;
							rank = "PRIVATE";
						};
					};
					class LXII_command_WNTR {
						name = "Command Section Winter";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_TEAMLEADER_WNTR;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {0,-3,0};
							vehicle = LXII_ASTEAMLEADER_WNTR;
							rank = "PRIVATE";
						};
						class Unit2 {
							side = 1;
							scope = 1;
							position[] = {0,-6,0};
							vehicle = LXII_MEDIC_WNTR;
							rank = "PRIVATE";
						};
						class Unit3 {
							side = 1;
							scope = 1;
							position[] = {0,-9,0};
							vehicle = LXII_RIFLEMAN_WNTR;
							rank = "PRIVATE";
						};
					};
					class LXII_section_SA {
						name = "Section Solar Auxilia";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_TEAMLEADER_SA;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {0,-3,0};
							vehicle = LXII_ASTEAMLEADER_SA;
							rank = "PRIVATE";
						};
						class Unit2 {
							side = 1;
							scope = 1;
							position[] = {0,-6,0};
							vehicle = LXII_MEDIC_SA;
							rank = "PRIVATE";
						};
						class Unit3 {
							side = 1;
							scope = 1;
							position[] = {0,-9,0};
							vehicle = LXII_RIFLEMAN_SA;
							rank = "PRIVATE";
						};
						class Unit4 {
							side = 1;
							scope = 1;
							position[] = {1,0,0};
							vehicle = LXII_RIFLEMAN_SA;
							rank = "PRIVATE";
						};
						class Unit5 {
							side = 1;
							scope = 1;
							position[] = {1,-3,0};
							vehicle = LXII_RIFLEMAN_SA;
							rank = "PRIVATE";
						};
						class Unit6 {
							side = 1;
							scope = 1;
							position[] = {1,-6,0};
							vehicle = LXII_RIFLEMAN_SA;
							rank = "PRIVATE";
						};
						class Unit7 {
							side = 1;
							scope = 1;
							position[] = {1,-9,0};
							vehicle = LXII_RIFLEMAN_SA;
							rank = "PRIVATE";
						};
					};
					class LXII_command_SA {
						name = "Command Section Solar Auxilia";
						scope = 1;
						faction = "LXII_legioArsenal_hidden_faction";
						side = 1;
						position[] = {0,0,0};
						class Unit0 {
							side = 1;
							scope = 1;
							position[] = {0,0,0};
							vehicle = LXII_TEAMLEADER_SA;
							rank = "PRIVATE";
						};
						class Unit1 {
							side = 1;
							scope = 1;
							position[] = {0,-3,0};
							vehicle = LXII_ASTEAMLEADER_SA;
							rank = "PRIVATE";
						};
						class Unit2 {
							side = 1;
							scope = 1;
							position[] = {0,-6,0};
							vehicle = LXII_MEDIC_SA;
							rank = "PRIVATE";
						};
						class Unit3 {
							side = 1;
							scope = 1;
							position[] = {0,-9,0};
							vehicle = LXII_RIFLEMAN_SA;
							rank = "PRIVATE";
						};
					};
				};
		};
	};
};
