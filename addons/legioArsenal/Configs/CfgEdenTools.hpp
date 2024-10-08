/*License GPL-2.0*/
#define MTP_ASTEAMLEADER "B_Soldier_SL_F"
#define MTP_TEAMLEADER "B_Soldier_TL_F"
#define MTP_MEDIC "B_medic_F"
#define MTP_RIFLEMAN "B_Soldier_F"

#define PACIFIC_ASTEAMLEADER "B_T_Soldier_SL_F"
#define PACIFIC_TEAMLEADER "B_T_Soldier_TL_F"
#define PACIFIC_MEDIC "B_T_Medic_F"
#define PACIFIC_RIFLEMAN "B_T_Soldier_F"

#define WOODLAND_ASTEAMLEADER "B_W_Soldier_SL_F"
#define WOODLAND_TEAMLEADER "B_W_Soldier_TL_F"
#define WOODLAND_MEDIC "B_W_Medic_F"
#define WOODLAND_RIFLEMAN "B_W_Soldier_F"

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
					action = "['Are you sure you want to overwrite current settings with VS defaults?', 'Load VS Settings', ['Overwrite', {[] call LXII_legioArsenal_fnc_edenLoadSettings}], true] call BIS_fnc_3DENShowMessage";
				};
				class LXII_legioArsenal_assets {
					text = "Load LXII Slots & Modules";
					action = "findDisplay 313 createDisplay 'LXII_legioArsenal_edenGUI'";
				};
			};
		};
	};
};
class CfgGroups
{
	class West {
		class LXII_legioArsenal_compositions {
			name = "LXII";
			scope = 0;
			class infantry {
				name = "";
				class MTP_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = MTP_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = MTP_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class MTP_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = MTP_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = MTP_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = MTP_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = MTP_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = MTP_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = MTP_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = MTP_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = MTP_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class MTP_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = MTP_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = MTP_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = MTP_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = MTP_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class MTP_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = MTP_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-6,0};
						vehicle = MTP_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-9,0};
						vehicle = MTP_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class PACIFIC_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = PACIFIC_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = PACIFIC_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class PACIFIC_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = PACIFIC_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = PACIFIC_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = PACIFIC_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = PACIFIC_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = PACIFIC_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = PACIFIC_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = PACIFIC_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = PACIFIC_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class PACIFIC_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = PACIFIC_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = PACIFIC_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = PACIFIC_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = PACIFIC_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class PACIFIC_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = PACIFIC_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-6,0};
						vehicle = PACIFIC_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-9,0};
						vehicle = PACIFIC_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class WOODLAND_zeus {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = WOODLAND_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {1,0,0};
						vehicle = WOODLAND_ASTEAMLEADER;
						rank = "PRIVATE";
					};
				};
				class WOODLAND_section {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = WOODLAND_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = WOODLAND_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = WOODLAND_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = WOODLAND_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4 {
						position[] = {1,0,0};
						vehicle = WOODLAND_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5 {
						position[] = {1,-3,0};
						vehicle = WOODLAND_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6 {
						position[] = {1,-6,0};
						vehicle = WOODLAND_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7 {
						position[] = {1,-9,0};
						vehicle = WOODLAND_RIFLEMAN;
						rank = "PRIVATE";
					};

				};
				class WOODLAND_command {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = WOODLAND_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1 {
						position[] = {0,-3,0};
						vehicle = WOODLAND_ASTEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit2{
						position[] = {0,-6,0};
						vehicle = WOODLAND_MEDIC;
						rank = "PRIVATE";
					};
					class Unit3 {
						position[] = {0,-9,0};
						vehicle = WOODLAND_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class WOODLAND_defaults {
					name = "";
					scope = 0;
					faction = "BLU_F";
					side = 1;
					class Unit0 {
						position[] = {0,0,0};
						vehicle = WOODLAND_TEAMLEADER;
						rank = "PRIVATE";
					};
					class Unit1{
						position[] = {0,-3,0};
						vehicle = WOODLAND_MEDIC;
						rank = "PRIVATE";
					};
					class Unit2 {
						position[] = {0,-6,0};
						vehicle = WOODLAND_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
			};
		};
	};
};
