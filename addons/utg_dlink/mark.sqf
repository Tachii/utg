fnc_createMrk = {
   private ["_name", "_side", "_position", "_marker", "_playerGrp", "_text"];
    
	_name = name vehicle _this;
    _side = side _this;
    _position = position laserTarget _this;
	_playerGrp = group _this;
	_text = _playerGrp getVariable "UTG_markerText";
	
    deleteMarker _name;
    
	_marker = createMarkerLocal [_name,_position];
    _marker setMarkerShapeLocal "icon";
    _marker setMarkerTypeLocal "mil_triangle";
    _marker setMarkerTextLocal "DLink "+_text;
    _marker setMarkerColorLocal "ColorRed";
};

[player,"fnc_createMrk",(side player),false,false] call BIS_fnc_MP;


