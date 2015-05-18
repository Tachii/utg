class CfgPatches
{
	class utg_bwmod_recoil_fix
	{
		author="BWMod - Team, fix by Jacob Herbst";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"bwa3_common"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class FullAuto;
class cfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class BWA3_G36: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
		};
		class Burst: Mode_Burst
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
		};
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
		};
	};
	class BWA3_G36_LMG: BWA3_G36
	{
		class Single: Mode_SemiAuto
		{
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
		};
		class manual: FullAuto
		{
			recoilProne="recoil_auto_prone_mx";
		};
	};
	class BWA3_MG5: Rifle_Long_Base_F
	{
		class manual: Mode_FullAuto
		{
			recoil="recoil_auto_machinegun_8outof10";
			recoilProne="recoil_auto_machinegun_prone_5outof10";
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426515589";
};
