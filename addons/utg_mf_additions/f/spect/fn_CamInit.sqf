// F3 - Spectator Script
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================
// params
_this spawn {
_unit = [_this, 0, player,[objNull]] call BIS_fnc_param;
_oldUnit = [_this, 1, objNull,[objNull]] call BIS_fnc_param;
_forced = [_this, 4, false,[false]] call BIS_fnc_param;
if(isNil "f_cam_isJIP") then { f_cam_isJIP = false; };
// if they are jip, these are null
if(isNull _unit ) then {_unit = cameraOn;f_cam_isJIP=true;};
// escape the script if you are not a seagull unless forced
if (typeof _unit != "seagull" && !_forced || !hasInterface) ExitWith {};
// disable this to instantly switch to the spectator script.
waituntil {missionnamespace getvariable ["BIS_fnc_feedback_allowDeathScreen",true] || isNull (_oldUnit) || f_cam_isJIP || _forced };


// ====================================================================================

if(!isnil "BIS_fnc_feedback_allowPP") then
{
  // disable effects death effects
  BIS_fnc_feedback_allowPP = false;
};

if(f_cam_isJIP) then
{
  ["F_ScreenSetup",false] call BIS_fnc_blackOut;
  systemChat "Initilizing Spectator Script";
  uiSleep 3;
  ["F_ScreenSetup"] call BIS_fnc_blackIn;
};

// If player is JIP select a playable unit to spectate, if no players a left get a random unit
if(isNull _oldUnit) then {if(count playableUnits > 0) then [{_oldUnit = (playableUnits select 0)},{_oldUnit = (allUnits select 0)}];};

// Create a Virtual Unit to act as our player to make sure we get to keep Draw3D
if(isNil "f_cam_VirtualCreated") then
{
  // Get a position in which to create the virtual unit
  _pos = if !(isNull _oldUnit) then [{getPos _oldUnit},{getPos allUnits select 0}];

  createCenter sideLogic;
  _newGrp = createGroup sideLogic;
  _newGrp setvariable ["f_cacheExcl", true,true];
  _newUnit = _newGrp createUnit ["VirtualCurator_F", [_pos select 0,_pos select 1,5], [], 0, "NONE"];
  _newUnit allowDamage false;
  //_newUnit hideObjectGlobal true;
  _newUnit enableSimulationGlobal false;
  _newUnit setpos [_pos select 0,_pos select 1,5];
  setPlayable _newUnit;
  selectPlayer _newUnit;
  waituntil{player == _newUnit};
  deleteVehicle _unit;
  f_cam_VirtualCreated = true;
};

// ====================================================================================

// Set spectator mode for whichever radio system is in use
[player, true] call TFAR_fnc_forceSpectator;


// ====================================================================================


// enable all factions but your owns groupMarkers. // DISABLED.
/*
_oldUnit spawn {
  _factions = [];
  {
    if(!(faction (leader _x) in _factions)) then
    {
      _factions = _factions + [faction (leader _x)];
    };
  } foreach allGroups;
  _factions = _factions - [faction _this];
  {
      [toLower _x] execVM "f\groupMarkers\f_setLocalGroupMarkers.sqf";
  } foreach _factions;
};*/
// ====================================================================================
_listBox = 2100;
lbClear _listBox;
// set inital values.
// F3 - Spectator Script
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================
// Quick defines to make it less annoying.
#define F_CAM_DISPLAY 9228
#define F_CAM_HELPFRAME 1300
#define F_CAM_HELPBACK 1305
#define F_CAM_MOUSEHANDLER 123
#define F_CAM_UNITLIST 2100
#define F_CAM_MODESCOMBO 2101
#define F_CAM_SPECTEXT 1000
#define F_CAM_SPECHELP 1310
#define F_CAM_HELPCANCEL 1315
#define F_CAM_MINIMAP 1350
#define F_CAM_FULLMAP 1360
#define F_CAM_BUTTIONFILTER 2111
#define F_CAM_BUTTIONTAGS 2112
#define F_CAM_BUTTIONTAGSNAME 2113
#define F_CAM_BUTTIONFIRSTPERSON 2114
#define F_CAM_DIVIDER 4302
f_cam_controls = [F_CAM_HELPFRAME,F_CAM_HELPBACK,F_CAM_MOUSEHANDLER,F_CAM_UNITLIST,F_CAM_MODESCOMBO,F_CAM_SPECTEXT,F_CAM_SPECHELP,F_CAM_HELPCANCEL,F_CAM_HELPCANCEL,F_CAM_MINIMAP,F_CAM_FULLMAP,F_CAM_BUTTIONFILTER,F_CAM_BUTTIONTAGS,F_CAM_BUTTIONTAGSNAME,F_CAM_BUTTIONFIRSTPERSON,F_CAM_DIVIDER];
f_cam_units = [];
f_cam_players = [];
f_cam_startX = 0;
f_cam_startY = 0;
f_cam_detlaX = 0;
f_cam_detlaY = 0;
f_cam_zoom = 0;
f_cam_hideUI = false;
f_cam_map_zoom = 0.5;
f_cam_mode = 0;
f_cam_toggleCamera = false;
f_cam_playersOnly = false;
f_cam_toggleTags = true;
f_cam_ads = false;
f_cam_nvOn = false;
f_cam_tiBHOn = false;
f_cam_tiWHOn = false;
f_cam_tagsEvent = -1;
f_cam_mShift = false;
f_cam_freecamOn = false;
f_cam_toggleTagsName = true;
f_cam_mapMode = 0;
f_cam_MouseButton = [false,false];
f_cam_mouseCord = [0.5,0.5];
f_cam_mouseDeltaX = 0.5;
f_cam_mouseDeltaY = 0.5;
f_cam_mouseLastX = 0.5;
f_cam_mouseLastY = 0.5;
f_cam_angleYcached  = 0;
f_cam_angleX = 0;
f_cam_tracerOn = false;
f_cam_angleY = 60;
f_cam_ctrl_down = false;
f_cam_shift_down = false;
f_cam_freecam_buttons = [false,false,false,false,false,false];
f_cam_forcedExit = false;
// 0 = ALL, 1 = BLUFOR , 2 = OPFOR, 3 = INDFOR , 4 = Civ
f_cam_sideButton = 0;
f_cam_sideNames = ["All Sides","Blufor","Opfor","Indfor","Civ"];

// ====================================================================================
// Colors

f_cam_blufor_color = [BLUFOR] call bis_fnc_sideColor;
f_cam_opfor_color = [OPFOR] call bis_fnc_sideColor;
f_cam_indep_color = [independent] call bis_fnc_sideColor;
f_cam_civ_color = [civilian] call bis_fnc_sideColor;
f_cam_empty_color = [sideUnknown] call bis_fnc_sideColor;

// ====================================================================================

f_cam_listUnits = [];

f_cam_ToggleFPCamera = {
    f_cam_toggleCamera = !f_cam_toggleCamera;
    if(f_cam_toggleCamera) then
    {
        f_cam_mode = 1; //(view)
        f_cam_camera cameraEffect ["terminate", "BACK"];
        f_cam_curTarget switchCamera "internal";
    }
    else
    {
        f_cam_mode = 0;
        f_cam_camera cameraEffect ["internal", "BACK"];
    };
    call F_fnc_ReloadModes;
};
f_cam_GetCurrentCam = {
  _camera = f_cam_camera;
  switch(f_cam_mode) do
  {
    case 0:
    {
        _camera = f_cam_camera; // Standard
    };
    case 1:
    {
      _camera = cameraOn; // FP
    };
    case 3:
    {
      _camera = f_cam_freecamera; // freecam
    };
  };
  _camera
};
// set camera mode (default)
f_cam_cameraMode = 0;

// =============================================================================

// create the UI
createDialog "f_spec_dialog";
// add keyboard events
// hide minimap
((findDisplay 9228) displayCtrl 1350) ctrlShow false;
((findDisplay 9228) displayCtrl 1350) mapCenterOnCamera false;

// hide big map
((findDisplay 9228) displayCtrl 1360) ctrlShow false;
((findDisplay 9228) displayCtrl 1360) mapCenterOnCamera false;

f_cam_helptext = "<t color='#EAA724'><br />Hold right-click to pan the camera<br />Use the scroll wheel or numpad+/- to zoom in and out.<br />Use ctrl + rightclick to fov zoom<br /><br />Press H to show and close the help window.<br />Press M to toggle between no map,minimap and full size map.<br />T for switching on tracers on the map<br/>Space to switch to freecam <br/>Press H to close this window</t>";
((findDisplay 9228) displayCtrl 1310) ctrlSetStructuredText parseText (f_cam_helptext);
// create the camera and set it up.
f_cam_camera = "camera" camCreate [position _oldUnit select 0,position _oldUnit select 1,3];

f_cam_fakecamera = "camera" camCreate [position _oldUnit select 0,position _oldUnit select 1,3];

f_cam_curTarget = _oldUnit;
f_cam_freecamera = "camera" camCreate [position _oldUnit select 0,position _oldUnit select 1,3];
f_cam_camera camCommit 0;
f_cam_fakecamera camCommit 0;
f_cam_camera cameraEffect ["internal","back"];
f_cam_camera camSetTarget f_cam_fakecamera;
f_cam_MouseMoving = false;
cameraEffectEnableHUD true;
showCinemaBorder false;
f_cam_fired = [];
{
  _event = _x addEventHandler ["fired",{f_cam_fired = f_cam_fired - [objNull];f_cam_fired pushBack (_this select 6)}];
  _x setVariable ["f_cam_fired_eventid",_event];

} foreach (allunits + vehicles);
// ====================================================================================
// spawn sub scripts
call f_fnc_ReloadModes;
lbSetCurSel [2101,0];
f_cam_freeCam_script = [] spawn F_fnc_FreeCam;
f_cam_updatevalues_script = [] spawn F_fnc_UpdateValues;
 ["f_spect_tags", "onEachFrame", {_this call F_fnc_DrawTags}] call BIS_fnc_addStackedEventHandler;

};