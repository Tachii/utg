class CfgPatches
{
	class utg_stamina
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		version=0.1;
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua/";
	};
};
class CfgFunctions
{
	class AGM_Movement
	{
		class AGM_Movement
		{
			file="utg_stamina\functions";
			class blinking;
			class fatigueModule;
			class heartbeat;
			class stumble;
			class vision;
		};
	};
};
class CfgSounds
{
	class AGM_Heartbeat
	{
		name="AGM_Heartbeat";
		sound[]=
		{
			"utg_stamina\sounds\heartbeat.ogg",
			1,
			1
		};
		titles[]={};
	};
};
class Extended_PostInit_EventHandlers
{
	class utg_stamina
	{
		clientInit="call compile preprocessFileLineNumbers '\utg_stamina\clientInit.sqf'";
	};
};
class CfgFatigue
{
	MinValue1=0.2;
	MinValue2=0.80000001;
	NormalRunSpeed=7.1999998;
	TiredRunSpeedLimit=0.60000002;
	FrequencyMin=0.2;
	FrequencyMax=1;
	TotalLoadCoef=5;
};
class CfgInventoryGlobalVariable
{
	maxSoldierLoad=1200;
};
class CfgImprecision
{
	class Primary
	{
		horizontalRadius=0.30000001;
		verticalRadius=1.5;
		size=1;
		maxSize=8;
		speed=0.5;
		maxSpeed=2.5;
		fatigue=3;
		damage=2;
		breathing=0;
	};
	class Secondary
	{
		horizontalRadius=1;
		verticalRadius=0.2;
		size=1;
		maxSize=20;
		speed=0.30000001;
		maxSpeed=1.5;
		fatigue=1;
		damage=3;
		inertia=1;
	};
};
class CfgBreathing
{
	maxHoldTime=8;
	inhaleDuration=0.75;
	coefSpeed=10;
	outOfBreathCoef=5;
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1428537556";
};
