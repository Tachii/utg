class CfgPatches
{
	class utg_mines_fix
	{
		author="Tachi";
		url="http://tacticalgaming.kiev.ua/";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class cfgAmmo
{
	class MineCore;
	class BoundingMineCore;
	class DirectionalBombCore;
	class PipeBombCore;
	class MineBase: MineCore
	{
		triggerWhenDestroyed=1;
	};
	class BoundingMineBase: BoundingMineCore
	{
		triggerWhenDestroyed=1;
	};
	class DirectionalBombBase: DirectionalBombCore
	{
		triggerWhenDestroyed=1;
	};
	class PipeBombBase: PipeBombCore
	{
		triggerWhenDestroyed=1;
	};
	class ClaymoreDirectionalMine_Remote_Ammo: DirectionalBombBase
	{
		triggerWhenDestroyed=1;
	};
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		triggerWhenDestroyed=1;
	};
	class DemoCharge_Remote_Ammo: PipeBombBase
	{
		triggerWhenDestroyed=1;
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426514559";
};
