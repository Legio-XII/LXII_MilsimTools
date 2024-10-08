class IGUIBack {
    type = 0;
    idc = -1;
    style = 128;
    text = "";
    colorText[] = {0, 0, 0, 0};
    font = "TahomaB";
    sizeEx = 0;
    shadow = 0;
    colorbackground[] = {0, 0, 0, 0.5};
};

class RscCombo {
    access = 0;
    type = 4;
    colorSelect[] = {0, 0, 0, 1};
    colorText[] = {1, 1, 1, 1};
    colorBackground[] = {0, 0, 0, 1};
    colorScrollbar[] = {1, 0, 0, 1};
    soundSelect[] = {"", 0.1, 1};
    soundExpand[] = {"", 0.1, 1};
    soundCollapse[] = {"", 0.1, 1};
    maxHistoryDelay = 1;
    class ScrollBar {
        color[] = {1, 1, 1, 1};
    };
    style = "0x10 + 0x200";
    x = 0;
    y = 0;
    w = 0.12;
    h = 0.035;
    shadow = 0;
    colorSelectBackground[] = {1, 1, 1, 0.7};
    arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
    arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
    wholeHeight = 0.45;
    colorActive[] = {1, 0, 0, 1};
    colorDisabled[] = {1, 1, 1, 0.25};
    font = "PuristaMedium";
    sizeEx = 0.03921;
};

class RscButton {
    access = 0;
    type = 1;
    text = "";
    colorText[] = {1, 1, 1, 1};
    colorDisabled[] = {0.4, 0.4, 0.4, 1};
    colorBackground[] = {0, 0, 0, 0.8};
    colorBackgroundDisabled[] = {0.95, 0.95, 0.95, 1};
    colorBackgroundActive[] = {0, 0, 0, 1};
    colorFocused[] = {0, 0, 0, 1};
    colorShadow[] = {0, 0, 0, 0};
    colorBorder[] = {0, 0, 0, 1};
    soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
    style = 2;
    x = 0;
    y = 0;
    w = 0.095589;
    h = 0.039216;
    shadow = 2;
    font = "PuristaMedium";
    sizeEx = 0.03921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
};

class MyZeusModule_WhitelistDialog {
    idd = 312;
    movingEnable = false;
    enableSimulation = true;

    class controlsBackground {
        class MainBackground: IGUIBack {
            idc = 2200;
            x = 0.3 * safezoneW + safezoneX;
            y = 0.3 * safezoneH + safezoneY;
            w = 0.4 * safezoneW;
            h = 0.4 * safezoneH;
        };
    };

    class controls {
        class WhitelistCombo: RscCombo {
            idc = 2100;
            x = 0.35 * safezoneW + safezoneX;
            y = 0.35 * safezoneH + safezoneY;
            w = 0.3 * safezoneW;
            h = 0.04 * safezoneH;
        };

        class ConfirmButton: RscButton {
            idc = 1600;
            text = "Confirm";
            x = 0.45 * safezoneW + safezoneX;
            y = 0.45 * safezoneH + safezoneY;
            w = 0.1 * safezoneW;
            h = 0.04 * safezoneH;
            action = "[] call MyZeusModule_fnc_applyWhitelist";
        };
    };
};