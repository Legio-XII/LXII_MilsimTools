/* ----------------------------------------------------------------------------
Config: Medical Equipment

Description:
	Modifies the configs of the ACE Medical equipment.

Author:
	Arend
License GPL-2.0

---------------------------------------------------------------------------- */
class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;

	class ACE_plasmaIV : ACE_ItemCore {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 11.3; // 1.025kg is 2.260lb would be represented as --- mass = 22.60
		};
	};

	class ACE_plasmaIV_500 : ACE_plasmaIV {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 5.65; // 0.5125kg is 1.130lb
		};
	};

	class ACE_plasmaIV_250 : ACE_plasmaIV {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 2.825; // 0.25625kg is 0.565lb
		};
	};

	class ACE_bloodIV : ACE_ItemCore {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 11.575; // 1.05kg is 2.315lb
		};
	};

	class ACE_bloodIV_500 : ACE_bloodIV {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 5.7875; // 0.525kg is 1.157lb
		};
	};

	class ACE_bloodIV_250 : ACE_bloodIV {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 2.895; // 0.2625kg is 0.579lb
		};
	};

	class ACE_salineIV : ACE_ItemCore {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 23.92; // 2.17kg is 4.784lb
		};
	};

	class ACE_salineIV_500 : ACE_salineIV {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 11.96; // 1.085kg is 2.392lb
		};
	};

	class ACE_salineIV_250 : ACE_salineIV {
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 5.98; // 0.5425kg is 1.196lb
		};
	};
};
