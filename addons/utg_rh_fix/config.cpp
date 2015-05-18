class CfgPatches
{
	class utg_rh_fix
	{
		author="RH, fix by JonnyGreen";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"RH_m4_cfg"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class arifle_MX_F;
	class RH_m4: arifle_MX_F
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
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_single_m4";
			recoilProne="recoil_single_prone_m4";
		};
	};
	class RH_M16a1: RH_m4
	{
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_m4";
			recoilProne="recoil_single_prone_m4";
		};
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_single_m4";
			recoilProne="recoil_single_prone_m4";
		};
	};
	class RH_M16A2: RH_m4
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
	class RH_M4_ris;
	class RH_M16A4: RH_M4_ris
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
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_single_m4";
			recoilProne="recoil_single_prone_m4";
		};
	};
	class RH_Mk12mod1: RH_M16A4
	{
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_m4";
			recoilProne="recoil_single_prone_m4";
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1430510764";
};
