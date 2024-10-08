params ["_sender","_UID","_message",["_receiveCondition",{[] call LXII_CORE_admin_messages_fnc_isAdminOrZeus}],["_receiveConditionParams",[]]];

if !(hasInterface) exitWith {};
if !(_receiveConditionParams call _receiveCondition) exitWith {};
if (profileName == _sender) exitWith {};

if (isNil "LXII_CORE_admin_messages_latestConvos") then {LXII_CORE_admin_messages_latestConvos = []};
if (LXII_CORE_admin_messages_latestConvos find [toUpper _sender,_UID] < 0) then {
	reverse LXII_CORE_admin_messages_latestConvos;
	LXII_CORE_admin_messages_latestConvos pushBack [toUpper _sender,_UID];
	reverse LXII_CORE_admin_messages_latestConvos;
};
if (count LXII_CORE_admin_messages_latestConvos > 5) then {LXII_CORE_admin_messages_latestConvos resize 5};

[_sender,_message] call LXII_CORE_admin_messages_fnc_displayMessage;

playSound "3DEN_notificationWarning";
