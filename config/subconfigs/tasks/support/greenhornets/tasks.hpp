class support_gh_cas : support_task
{
	taskcategory = "SUP";
	tasktitle = "근접항공지원";
	taskname = "근접항공지원";
	taskdesc = "%1에 근접 항공 지원을 제공하세요.";
	tasktype = "attack";
	taskimage = "vn\missions_f_vietnam\data\img\mikeforce\s\vn_ui_mf_task_gh3.jpg";
	taskgroups[] = {"GreenHornets"};
	requestgroups[] = {"ACAV", "MikeForce", "SpikeTeam"};
	rankpoints = 10;
	taskprogress = 0;

	requesterDesc = "특정 위치에 있는 목표에 대한 근접 항공 지원을 요청하세요";

	//The script called when the task is created.
	taskScript = "vn_mf_fnc_state_machine_task_system";

	//Data for the script to use to customise behaviour
	class parameters
	{
		stateMachineCode = "vn_mf_fnc_task_sup_cas";
	};

	//Data for subtasks. These are specific to the script.
	class destroy_targets
	{
		taskname = "지역 내의 유닛들을 파괴하세요.";
		taskdesc = "이 지역 내의 적 유닛들을 파괴하세요.";
	};
};
