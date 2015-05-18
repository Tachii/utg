fnc_delMrk = {
	private ["_name"];
	_name = name vehicle _this;
	deleteMarker _name;
};

[player,"fnc_delMrk",(side player),false,false] call BIS_fnc_MP;