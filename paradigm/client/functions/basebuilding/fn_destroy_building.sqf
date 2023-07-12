/*
	File: fn_destroy_building.sqf
	Author:  Karskin
	Public: No

	Description:
		Destroy building request to server.

	Parameter(s):
		_target - building target [OBJECT, defaults to objNull]

	Returns: nothing

	Example(s):
		[_target] call para_c_fnc_destroy_building;
*/

params
[
	["_target", objNull] 		// 0 : OBJECT
];

if (isNull _target) exitWith {diag_log "ERROR: Paradigm: try to destroy null object"};

private _building = _target getVariable ["para_g_building", objNull];

if (isNull _building) exitWith {diag_log "ERROR: Paradigm: try to destroy an object which is not a buildable"};

[_building] spawn {
	if (["정말 제거 하시겠습니까?", "구조물 제거", true, true, _this select 0] call BIS_fnc_guiMessage) then 
	{ 
		params ["_building"];
		[_building] call para_s_fnc_building_delete;
	};
};

