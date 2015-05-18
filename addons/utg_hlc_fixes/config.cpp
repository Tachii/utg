class CfgPatches
{
	class utg_hlc_fixes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"hlcweapons_aks"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
	};
	class hlc_ak_base: Rifle_Base_F
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
	class hlc_rifle_ak74: hlc_ak_base
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
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
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
	class hlc_rifle_aks74: hlc_rifle_ak74
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
	class hlc_rifle_ak12: hlc_rifle_aks74
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
	class hlc_rifle_ak12GL: hlc_rifle_aks74
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
	class hlc_rifle_aku12: hlc_rifle_ak12
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
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_mxm";
			recoilProne="recoil_single_prone_mxm";
		};
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_auto_mxm";
			recoilProne="recoil_auto_prone_mxm";
		};
	};
	class hlc_rifle_aks74u: hlc_rifle_ak74
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
	class hlc_rifle_ak47: hlc_rifle_ak74
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
	class hlc_rifle_akm: hlc_rifle_ak47
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
	class hlc_rifle_akmgl: hlc_rifle_akm
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
	class hlc_rifle_rpk: hlc_rifle_ak47
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
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
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
	class hlc_rifle_aek971: hlc_rifle_ak74
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
	class hlc_rifle_saiga12k: hlc_rifle_ak47
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
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1428631282";
};
