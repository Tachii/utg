class CfgPatches
{
	class utg_rhs_penetrator_fix
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_weapons",
			"rhsusf_c_weapons"
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
	class RocketBase;
	class rhsusf_ammo_basic_penetrator_base: RocketBase
	{};
	class rhsusf_ammo_basic_penetrator : RocketBase
	{};
	class rhs_ammo_M136_penetrator: rhsusf_ammo_basic_penetrator
	{};
}