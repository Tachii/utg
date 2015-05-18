class CfgPatches
{
	class utg_mf_additions
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"utg_mf"
		};
		version="1.0.0";
		versionStr="1.0.0";
		versionAr[]={1,0,0};
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua";
	};
};
class CfgMods
{
	class utg_mf_additions
	{
		dir="@utg";
		name="UTG Mission Framework Additional Functionality";
		picture="";
		hidePicture="true";
		hideName="true";
		actionName="Website";
		action="http://tacticalgaming.kiev.ua";
	};
	author="76561198037478484";
	timepacked="1428164676";
};
class Extended_PreInit_EventHandlers
{
	class utg_mf_additions
	{
		init="call compile preProcessFileLineNumbers '\utg_mf_additions\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class utg_mf_utg_mf_additions
	{
		init="call compile preProcessFileLineNumbers '\utg_mf_additions\XEH_postInit.sqf'";
	};
};
class CfgFunctions
{
	class F
	{
		class zeus
		{
			file="\utg_mf_additions\f\zeus";
			class zeusInit
			{
			};
			class zeusAddAddons
			{
			};
			class zeusAddObjects
			{
			};
		};
		class fspectator
		{
			file="\utg_mf_additions\f\spect";
			class CamInit
			{
			};
			class OnUnload
			{
			};
			class DrawTags
			{
			};
			class EventHandler
			{
			};
			class FreeCam
			{
			};
			class GetPlayers
			{
			};
			class ReloadModes
			{
			};
			class UpdateValues
			{
			};
			class HandleCamera
			{
			};
			class ToggleGUI
			{
			};
			class OnMapClick
			{
			};
			class DrawMarkers
			{
			};
			class ForceExit
			{
			};
			class HandleMenu
			{
			};
		};
	};
};
class CfgRespawnTemplates
{
	class f_Spectator
	{
		onPlayerRespawn="\utg_mf_additions\f\spect\fn_CamInit.sqf";
	};
};
