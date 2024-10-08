/*License GPL-2.0*/
class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			class LXII_legioArsenal
			{
				displayName = "Legio XII";
				collapsed = 1;
				class Attributes
				{
					class LXII_legioArsenal_IsLoadout
					{
						displayName = "Default Loadout?";
						tooltip = "Use this unit as a default loadout for the mission";
						property = "LXII_legioArsenal_3den_Loadout";
						control = "CheckboxState";
						expression = "if (_value == true) then {_this setVariable ['LXII_legioArsenal_isLoadout',true, true];}";
						defaultValue = "false";
						condition = "objectControllable";
					};
					class LXII_legioArsenal_LoadoutRole
					{
						displayName = "Name:";
						tooltip = "Name of the loadout in the Arsenal; Accepts any string, including nothing. Duplicates will overwrite.";
						property = "LXII_legioArsenal_3den_LoadoutName";
						control = "Edit";
						expression = "_this setVariable ['LXII_legioArsenal_loadout_role',_value, true];";
						defaultValue = "''";
						typeName = "STRING";
						condition = "objectControllable";
					};
				};
			};
		};
	};
};
