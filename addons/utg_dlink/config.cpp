class CfgPatches
{
	class utg_dlink
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"Extended_EventHandlers"
		};
		magazines[]={};
		ammo[]={};
		author[]=
		{
			"Tachi"
		};
		authorURL="http://tacticalgaming.kiev.ua";
	};
};
class Extended_PostInit_EventHandlers
{
	class Mine_Detector_Init
	{
		init="execVM 'utg_dlink\init.sqf';";
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426279799";
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHRotor;
			class HitHull;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
	};
	class UAV_01_base_F: Helicopter_Base_F
	{
		class UserActions
		{
			class utg_dlink_mark
			{
				displayName="Place Marker";
				displayNameDefault="";
				priority=333;
				radius=1;
				position="camera";
				showWindow=0;
				onlyForPlayer=1;
				condition="true";
				shortcut="reloadMagazine";
				statement="[] execVM ""utg_dlink\uav\markUAV.sqf"";";
			};
			class utg_dlink_delete
			{
				displayName="Remove Marker";
				displayNameDefault="";
				priority=444;
				radius=1;
				position="camera";
				showWindow=0;
				onlyForPlayer=1;
				condition="true";
				statement="[] execVM ""utg_dlink\uav\removemarkUAV.sqf"";";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
};
