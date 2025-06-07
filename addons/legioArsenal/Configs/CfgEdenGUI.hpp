/*License GPL-2.0*/
class LXII_legioArsenal_edenGUI {
	idd = 1901;
	movingEnable = 1;
	class Controls{
		class LXII_legioArsenal_frame: RscFrame {
			idc = 1800;
			x = 0.1;
			y = 0.02;
			w = 0.734999;
			h = 0.58;
		};
		class LXII_legioArsenal_background: RscBackground {
			idc = 1000;
			x = 0.1;
			y = 0.02;
			w = 0.7375;
			h = 0.58;
			colorBackground[] = {0,0,0,0.6};
			sizeEx = 1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
		};
		class LXII_legioArsenal_callsignSectionText: RscText {
			idc = 1001;
			text = "Section Callsign :";
			x = 0.112499;
			y = 0.12;
			w = 0.24;
			h = 0.04;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class LXII_legioArsenal_callsignSectionEdit: RscEdit {
			idc = 1400;
			x = 0.124999;
			y = 0.18;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Callsign of sections. Default: Cohort";
			sizeEx = 1.1 * GUI_GRID_H;
			canModify = 1;
		};
		class LXII_legioArsenal_callsignZeusText: RscText {
			idc = 1002;
			text = "HQ Callsign :";
			x = 0.1125;
			y = 0.28;
			w = 0.2375;
			h = 0.04;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class LXII_legioArsenal_callsignZeusEdit: RscEdit {
			idc = 1461;
			x = 0.124999;
			y = 0.34;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Callsign for zeus. Default: Centurion";
			sizeEx = 1.1 * GUI_GRID_H;
			canModify = 1;
		};

		class LXII_legioArsenal_camoSelectionText: RscText {
			idc = 1033;
			text = "Camo Selection:";
			x = 0.4;
			y = 0.12;
			w = 0.225;
			h = 0.06;
			sizeEx = 1.2  * GUI_GRID_H;
		};

		class LXII_legioArsenal_camoSelectionDropdown: RscCombo {
			idc = 1902;
			x = 0.4;
			y = 0.18;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Select camo option";
			sizeEx = 1.1 * GUI_GRID_H;

			class Items {
				class Woodland {
					text = "Woodland";
					data = "WOODLAND";
				};
				class Desert {
					text = "Desert";
					data = "DESERT";
				};
				class Winter {
					text = "Winter";
					data = "WINTER";
				};
				class Solar_Aux {
					text = "Solar Auxilia";
					data = "SOLAR_AUX";
				};
			};
		};

		// class LXII_legioArsenal_spawnDefaultsText: RscText {
		// 	idc = 1023;
		// 	text = "Create Defaults?";
		// 	x = 0.4;
		// 	y = 0.28;
		// 	w = 0.225;
		// 	h = 0.06;
		// 	sizeEx = 1.2  * GUI_GRID_H;
		// };

		// class LXII_legioArsenal_spawnDefaultsCheckbox: RscCheckbox {
		// 	idc = 1903;
		// 	x = 0.4;
		// 	y = 0.34;
		// 	w = 0.05;
		// 	h = 0.05;
		// 	sizeEx = 1.2  * GUI_GRID_H;
		// };

		class LXII_legioArsenal_sectionAmountSlider: RscXSliderH {
			idc = 1900;
			x = 0.112499;
			y = 0.52;
			w = 0.225;
			h = 0.04;
			color[] = {1,1,1,0.6};
			colorActive[] = {1,1,1,1};
			colorDisable[] = {1,1,1,0.4};
			sliderRange[] = {0, 9};
			sliderPosition = 3;
			tooltip = "Number of sections to spawn. Default: 3";
			sliderStep = 1;
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			onSliderPosChanged = "(findDisplay 1901 displayCtrl 1006) ctrlSetText str sliderPosition (findDisplay 1901 displayCtrl 1900)";
			};
		class LXII_legioArsenal_sectionAmountCounter: RscText {
			idc = 1006;
			text = "3";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class LXII_legioArsenal_sectionAmountText: RscText {
			idc = 1003;
			text = "Number of Sections";
			x = 0.112499;
			y = 0.46;
			w = 0.225;
			h = 0.04;
			sizeEx = 1.2 * GUI_GRID_H;
		};
		class LXII_legioArsenal_title: RscText {
			idc = 1004;
			text = "Load LXII Slots & Modules";
			x = 0.112499;
			y = 0.04;
			w = 0.554999;
			h = 0.04;
			sizeEx = 1.5  * GUI_GRID_H;
		};
		class LXII_legioArsenal_okButton: RscButtonMenuOK {
			x = 0.562499;
			y = 0.54;
			w = 0.12;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
   			onButtonClick = "private _callsign = ctrlText (findDisplay 1901 displayCtrl 1400); private _zeusCallsign = ctrlText (findDisplay 1901 displayCtrl 1461); private _camoCtrl = findDisplay 1901 displayCtrl 1902; private _camo = _camoCtrl lbData (lbCurSel _camoCtrl); private _numberOfSections = sliderPosition (findDisplay 1901 displayCtrl 1900); private _createDefaults = cbChecked (findDisplay 1901 displayCtrl 1903); diag_log format['Callsign: %1, Zeus Callsign: %2, Camo: %3, Number of Sections: %4, Create Defaults: %5', _callsign, _zeusCallsign, _camo, _numberOfSections, _createDefaults]; [ctrlText (findDisplay 1901 displayCtrl 1400), ctrlText (findDisplay 1901 displayCtrl 1461), _camo, _numberOfSections, _createDefaults] call LXII_legioArsenal_fnc_edenCreateAssets;";
		};
		class LXII_legioArsenal_cancelButton: RscButtonMenuCancel {
			x = 0.7;
			y = 0.54;
			w = 0.12;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
	};
};
