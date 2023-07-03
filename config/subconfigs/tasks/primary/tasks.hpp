class capture_zone : task
{
	taskcategory = "PRI";
	tasktitle = "%1 점령";
	taskname = "%1 점령";
	taskdesc = "%1에서 적대적인 세력을 격파하고, 그들의 본부의 장비 저장고를 파괴하십시오.";
	tasktype = "attack";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\p\vn_ui_mf_task_p1.jpg";
	rankpoints = 50;

	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters 
	{
		stateMachineCode = "vn_mf_fnc_task_pri_capture";
		timeout = -1;
	};

	//Data for subtasks. These are specific to the script.
	class hold_hq
	{
		taskname = "본부를 점령하고 유지하십시오.";
		taskdesc = "적의 본부에 진입하여 적이 다시 점령하지 못하도록 방지하십시오.";
	};

	class destroy_sites
	{
		taskname = "사이트를 파괴하십시오.";
		taskdesc = "1200m 이내의 모든 본부, 대공포 및 포대 사이트를 파괴하십시오.";
	};

	class destroy_enemy_supplies
	{
		taskname = "적의 보급품을 파괴하십시오.";
		taskdesc = "적의 본부에서 발견된 보급품을 파괴하십시오. 폭발물을 사용하는 것이 권장됩니다.";
	};
};

class build_fob : task
{
	taskcategory = "PRI";
	tasktitle = "FOB 건설";
	taskname = "FOB 건설";
	taskdesc = "FOB를 건설하여 주변 %1미터 내의 지역을 점령하기 시작하십시오.";
	taskformatdata = "[mf_s_baseZoneUnlockDistance]";
	tasktype = "repair";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\p\vn_ui_mf_task_p1.jpg";
	rankpoints = 10;

	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters 
	{
		stateMachineCode = "vn_mf_fnc_task_pri_build_fob";
		timeout = -1;
	};

	//Data for subtasks. These are specific to the script.
	class build
	{
		taskname = "HQ 건설";
		taskdesc = "기지를 만들기 위해 HQ 건물을 건설하십시오.";
	};
};