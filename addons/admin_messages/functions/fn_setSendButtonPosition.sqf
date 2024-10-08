#include "..\gui\defines.hpp"

params [["_ctrl",controlNull]];

if !([] call LXII_CORE_admin_messages_fnc_isAdminOrZeus) exitWith {};

_ctrl ctrlSetPosition [LXII_CORE_ADMIN_MESSAGES_TITLE_X,LXII_CORE_ADMIN_MESSAGES_SENDBUTTON_Y_2];
_ctrl ctrlCommit 0;
