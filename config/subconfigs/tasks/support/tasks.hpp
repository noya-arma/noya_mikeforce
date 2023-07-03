class support_resupply : support_task
{
	taskcategory = "SUP";
	tasktitle = $STR_vn_mf_task_support_resupply_title;
	taskname = $STR_vn_mf_task_support_resupply_title;
	taskdesc = $STR_vn_mf_task_support_resupply_desc;
	tasktype = "box";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\s\vn_ui_mf_task_ac1.jpg";
	taskgroups[] = {"ACAV", "GreenHornets"};
	requestgroups[] = {"MikeForce","SpikeTeam"};
	rankpoints = 10;
	taskprogress = 0;

	requesterDesc = $STR_vn_mf_task_support_resupply_requesterDesc;

	//The script called when the task is created.
	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters
	{
		stateMachineCode = "vn_mf_fnc_task_sup_resupply";
		supplyClass = "ammo";
		supplies = "LightAmmoSupplies";
	};

	class deliver_crate
	{
		taskname = $STR_vn_mf_task_support_resupply_deliver_crate_title;
		taskdesc = $STR_vn_mf_task_support_resupply_deliver_crate_desc;
	};
};

class support_resupply_medical : support_resupply
{

	tasktitle = $STR_vn_mf_task_support_resupply_medical_title;
	taskname = $STR_vn_mf_task_support_resupply_medical_title;

	requesterDesc = $STR_vn_mf_task_support_resupply_medical_requesterDesc;
	
	class parameters : parameters
	{
		supplyClass = "support";
		supplies = "MedicalSupplies";
	};
};

class support_resupply_food : support_resupply
{
	tasktitle = $STR_vn_mf_task_support_resupply_food_title;
	taskname = $STR_vn_mf_task_support_resupply_food_title;

	requesterDesc = $STR_vn_mf_task_support_resupply_food_requesterDesc;
	
	class parameters : parameters
	{
		supplyClass = "support";
		supplies = "FoodSupplies";
	};
};

class support_resupply_building_materials : support_resupply
{
	tasktitle = $STR_vn_mf_task_support_resupply_building_materials_title;
	taskname = $STR_vn_mf_task_support_resupply_building_materials_title;

	requesterDesc = $STR_vn_mf_task_support_resupply_building_materials_requesterDesc;
	
	class parameters : parameters
	{
		supplyClass = "construction";
		supplies = "BuildingSupplies";
	};
};

class support_resupply_workshop : support_resupply
{
	tasktitle = $STR_vn_mf_task_support_resupply_workshop_title;
	taskname = $STR_vn_mf_task_support_resupply_workshop_title;

	requesterDesc = $STR_vn_mf_task_support_resupply_workshop_requesterDesc;
	
	class parameters : parameters
	{
		supplyClass = "vehicles";
		supplies = "WorkshopSupplies";
	};
};

class support_transport : support_task
{
	taskcategory = "SUP";
	tasktitle = "수송 요청";
	taskname = "수송 요청";
	taskdesc = "주어진 위치에서 %1을 픽업하고 원하는 위치로 수송하십시오.";
	tasktype = "land";
	taskgroups[] = {"ACAV", "GreenHornets"};
	//TODO: Remove GreenHornets and ACAV
	requestgroups[] = {"MikeForce","SpikeTeam", "ACAV", "GreenHornets"};
	rankpoints = 10;
	taskprogress = 0;

	requesterDesc = "특정 위치에서 픽업을 요청하십시오.";

	//The script called when the task is created.
	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters
	{
		stateMachineCode = "vn_mf_fnc_task_sup_transport";
		RankPointsPerKM = 10;
	};

	//Data for subtasks. These are specific to the script.
	class mount
	{
		taskname = "부대 픽업";
		taskdesc = "이 위치에서 부대를 픽업하십시오.";
	};

	class transport
	{
		taskname = "부대 수송";
		taskdesc = "부대를 그들이 선택한 위치로 수송하십시오.";
	};
};

#include "acav\tasks.hpp"
#include "greenhornets\tasks.hpp"
#include "mikeforce\tasks.hpp"
#include "spiketeam\tasks.hpp"