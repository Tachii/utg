class CfgPatches
{
	class utg_rhs_fixes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		author="RHS, fix by JonnyGreen";
		requiredAddons[]=
		{
			"rhs_c_troops",
			"rhs_c_weapons",
			"A3_Weapons_F"
		};
	};
};
class Rifle_Base_F;
class WeaponSlotsInfo;
class GunParticles;
class UGL_F;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class GrenadeLauncher;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class DefaultEventHandlers;
class rhs_weap_ak74m_Base_F: Rifle_Base_F
{
	class Single: Mode_SemiAuto
	{
		recoil="recoil_single_ktb";
		recoilProne="recoil_single_prone_ktb";
	};
	class FullAuto: Mode_FullAuto
	{
		recoil="recoil_auto_ktb";
		recoilProne="recoil_auto_prone_ktb";
	};
};
class rhs_weap_svd
{
	class Single: Mode_SemiAuto
	{
		recoil="recoil_single_ebr";
		recoilProne="recoil_single_prone_ebr";
	};
};
class Rifle_Long_Base_F: Rifle_Base_F
{
};
class rhs_pkp_base: Rifle_Long_Base_F
{
	class Single: Mode_SemiAuto
	{
		recoil="recoil_auto_machinegun_8outof10";
		recoilProne="recoil_auto_machinegun_prone_5outof10";
	};
	class FullAuto: Mode_FullAuto
	{
		recoil="recoil_auto_machinegun_8outof10";
		recoilProne="recoil_auto_machinegun_prone_5outof10";
	};
};
class H_HelmetB;
class ItemCore;
class HeadGearItem;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class ItemInfo;
class cfgWeapons
{
	class rhs_6b27m: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_ess: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_flora: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_flora_ess: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b27m_digi: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b27m_green: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_green: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_green_ess: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b27m_ess: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b27m_green_ess: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_bala: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_ess_bala: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_flora_bala: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b28_flora_ess_bala: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
	class rhs_6b27m_digi_bala: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor="5*0.4";
			passThrough=0.85000002;
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1428628795";
};
