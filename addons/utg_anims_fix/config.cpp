class CfgPatches
{
	class utg_anims_fix
	{
		author="Tachi";
		url="http://tacticalgaming.kiev.ua/";
		units[]={};
		weapons[]={};
		requiredVersion="";
		requiredAddons[]=
		{
			"A3_Anims_F"
		};
		version="0.1";
	};
};
class CfgMovesBasic
{
	class StandBase;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AidlPpneMstpSrasWrflDnon_G0S;
		class AidlPpneMstpSrasWpstDnon_G0S;
		class AadjPpneMstpSrasWrflDup;
		class AadjPpneMstpSrasWpstDup;
		class AadjPpneMstpSrasWrflDleft: AidlPpneMstpSrasWrflDnon_G0S
		{
			enableOptics=1;
		};
		class AadjPpneMstpSrasWrflDright: AidlPpneMstpSrasWrflDnon_G0S
		{
			enableOptics=1;
		};
		class AadjPpneMstpSrasWrflDdown: AadjPpneMstpSrasWrflDup
		{
			enableOptics=1;
		};
		class AadjPpneMstpSrasWpstDdown: AadjPpneMstpSrasWpstDup
		{
			enableOptics=2;
		};
		class AadjPpneMstpSrasWpstDright: AidlPpneMstpSrasWpstDnon_G0S
		{
			enableOptics=2;
		};
		class AadjPpneMstpSrasWpstDleft: AidlPpneMstpSrasWpstDnon_G0S
		{
			enableOptics=2;
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426514149";
};
