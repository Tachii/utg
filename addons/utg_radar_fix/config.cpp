class CfgPatches
{
	class utg_radar_fix
	{
		author="Tachi";
		url="http://tacticalgaming.kiev.ua/";
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgVehicles
{
	class Heli_Light_01_base_F;
	class B_Heli_Light_01_F: Heli_Light_01_base_F
	{
		radarType=8;
	};
	class Heli_Light_01_armed_base_F;
	class B_Heli_Light_01_armed_F: Heli_Light_01_armed_base_F
	{
		radarType=8;
	};
	class B_Heli_Transport_03_base_F;
	class B_Heli_Transport_03_F: B_Heli_Transport_03_base_F
	{
		radarType=8;
	};
	class Heli_Transport_01_base_F;
	class B_Heli_Transport_01_F: Heli_Transport_01_base_F
	{
		radarType=8;
	};
	class B_Heli_Transport_01_camo_F: B_Heli_Transport_01_F
	{
		radarType=8;
	};
	class Heli_Light_02_base_F;
	class O_Heli_Light_02_F: Heli_Light_02_base_F
	{
		radarType=8;
	};
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_base_F
	{
		radarType=8;
	};
	class Heli_Transport_04_base_F;
	class O_Heli_Transport_04_F: Heli_Transport_04_base_F
	{
		radarType=8;
	};
	class Heli_Transport_02_base_F;
	class I_Heli_Transport_02_F: Heli_Transport_02_base_F
	{
		radarType=8;
	};
	class I_Heli_light_03_base_F;
	class I_Heli_light_03_F: I_Heli_light_03_base_F
	{
		radarType=8;
	};
	class I_Heli_light_03_unarmed_base_F;
	class I_Heli_light_03_unarmed_F: I_Heli_light_03_unarmed_base_F
	{
		radarType=8;
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1427560889";
};
