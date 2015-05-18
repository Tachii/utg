class CfgPatches
{
	class utg_rhs_atgm_fix
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhs_c_heavyweapons"
		};
		version=0.1;
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua/";
	};
};
class cfgAmmo
{
	class M_Titan_AT;
	class rhs_ammo_atgmBase_base: M_Titan_AT
	{
		hit=1100;
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1427298763";
};
