class CfgPatches
{
	class utg_hlc_ammofix
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
class cfgWeapons
{
	class Rifle;
	class WeaponSlotsInfo;
	class optic_Hamr;
	class LMG_Zafir_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_rifle_akm;
	class hlc_rifle_ak12;
	class UGL_F;
	class hlc_ak_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green",
			"rhs_75Rnd_545x39_AK",
			"rhs_75Rnd_545x39_AK_green"
		};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green",
			"rhs_75Rnd_545x39_AK",
			"rhs_75Rnd_545x39_AK_green"
		};
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green",
			"rhs_75Rnd_545x39_AK",
			"rhs_75Rnd_545x39_AK_green"
		};
	};
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green",
			"rhs_75Rnd_545x39_AK",
			"rhs_75Rnd_545x39_AK_green"
		};
	};
	class hlc_rifle_ak47: hlc_rifle_ak74
	{
		magazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_40Rnd_762x39mm",
			"rhs_45Rnd_762x39mm",
			"rhs_45Rnd_762x39mm_tracer",
			"rhs_75Rnd_762x39mm",
			"rhs_75Rnd_762x39mm_tracer"
		};
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		magazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_40Rnd_762x39mm",
			"rhs_45Rnd_762x39mm",
			"rhs_45Rnd_762x39mm_tracer",
			"rhs_75Rnd_762x39mm",
			"rhs_75Rnd_762x39mm_tracer"
		};
	};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		class hlc_GP25_AKM: UGL_F
		{
			magazines[]=
			{
				"rhs_VOG25",
				"rhs_VOG25p",
				"rhs_vg40tb",
				"rhs_vg40sz",
				"rhs_vg40op_white",
				"rhs_vg40op_green",
				"rhs_vg40op_red",
				"rhs_GRD40_white",
				"rhs_GRD40_green",
				"rhs_GRD40_red"
			};
		};
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		class hlc_GP30_AKS74: UGL_F
		{
			magazines[]=
			{
				"rhs_VOG25",
				"rhs_VOG25p",
				"rhs_vg40tb",
				"rhs_vg40sz",
				"rhs_vg40op_white",
				"rhs_vg40op_green",
				"rhs_vg40op_red",
				"rhs_GRD40_white",
				"rhs_GRD40_green",
				"rhs_GRD40_red"
			};
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426516293";
};
