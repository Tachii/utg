class CfgPatches
{
	class utg_rhsusf_fixes
	{
		url="http://tacticalgaming.kiev.ua/";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		author="RHS, fix by JonnyGreen";
		requiredAddons[]=
		{
			"rhsusf_c_troops",
			"rhsusf_c_weapons"
		};
	};
};
class Rifle;
class Rifle_Base_F: Rifle
{
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class arifle_MX_Base_F: Rifle_Base_F
{
};
class cfgWeapons
{
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_m4";
			recoilProne="recoil_single_prone_m4";
		};
		class Burst: Mode_Burst
		{
			recoil="recoil_single_m4";
			recoilProne="recoil_single_prone_m4";
		};
	};
	class LMG_Mk200_F;
	class rhs_M249_base: LMG_Mk200_F
	{
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
		};
	};
	class srifle_EBR_F;
	class rhs_weap_m14ebrri: srifle_EBR_F
	{
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1430510848";
};
