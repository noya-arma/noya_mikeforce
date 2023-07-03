class CfgHints
{
	class Overview {
		displayName = "개요";

		class Tutorial {
		displayName = "튜토리얼";
		displayNameShort = "튜토리얼";
		description = "Mike Force 튜토리얼에 오신 것을 환영합니다. 플레이하면 게임 모드의 다양한 측면에 대한 도움말을 제공하기 위해 이 생존 카드가 나타납니다. 카드는 ESC 메뉴에서 접근할 수 있는 필드 매뉴얼에서 다시 읽을 수 있습니다. 튜토리얼은 게임 모드 설정 메뉴에서 비활성화할 수 있습니다.";
		// image = ""; 
		// 참고: 이미지 없음
	};

	class Gamemode {
		displayName = "목표";
		displayNameShort = "목표";
		description = "4개의 엘리트 부대 중 하나의 구성원으로서, 임무는 모든 표시된 지역을 어떠한 수단으로든 점령하고 유지하는 것입니다(베트남, 라오스 및 캄보디아).";
		image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\mission_strategy.paa";
	};

	class Task_Roster {
		displayName = "임무 명부";
		displayNameShort = "임무 명부";
		description = "임무 명부는 Mike Force에서 첫 번째 연락점입니다. 기본값으로 H 키를 눌러 열 수 있습니다. 여기서 팀을 선택하고 작업을 추적하며 지원을 요청하고 계급과 훈장을 확인할 수 있습니다.";
		//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
		// 참고: 이미지 없음
	};

	class Gearing_Up {
		displayName = "장비 착용";
		displayNameShort = "장비 착용";
		description = "주요 기지 중 하나에서 병기 창고에 접근하여 장비를 착용할 수 있습니다. 음식과 물, 응급 처치 키트, 건설을 위한 삽 등을 꼭 챙기세요. 가능한 한 많은 장비를 가지고 가세요: 전투 중에 탄약이 바닥나는 일이 생기지 않게 조심하세요!";
		image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\arsenal.paa";
	};

	class Fast_Travel {
		displayName = "빠른 이동";
		displayNameShort = "빠른 이동";
		description = "빠른 이동은 각 팀의 주요 미국 기지 주변을 빠르게 이동하는 방법입니다.";
        };

	};

	class Building {
		displayName = "건설";

		class Overview {
			displayName = "개요";
			displayNameShort = "개요";
			description = "건설! 건물을 건설하려면 N 키 (기본 설정)를 눌러 건물 메뉴를 엽니다. 왼쪽 메뉴에는 사용 가능한 건물과 개체가 표시되고, 오른쪽에는 각 건물이나 개체에 대한 설명이 표시됩니다. 대부분의 건물은 특정 조건이 충족될 때에만 건설할 수 있습니다!";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\build_menu.paa";
		};

		class Placing {
			displayName = "건물 배치";
			displayNameShort = "건물 배치";
			description = "지금 건물을 배치하고 있습니다! 배치 중에는 마우스 왼쪽 버튼과 오른쪽 버튼을 사용하여 위치, 높이 및 회전을 조정할 수 있습니다. 유령 건물이 녹색인 경우 '건설' 홀드 액션을 사용하여 배치할 수 있습니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\ghost_building.paa";
		};

		class Finishing {
			displayName = "구조물 완성";
			displayNameShort = "완성";
			description = "건물을 배치하면 일부만 건설됩니다. 건물을 완성하려면 보급고에서 삽을 장비하고 건물에 사용해야 합니다. 몇 번의 타격 후에 건물이 완성됩니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\ghost_building.paa";
		}

		class Resupplying {
			displayName = "건물 보급";
			displayNameShort = "건물 보급";
			description = "건물과 건설된 개체는 부식을 방지하기 위해 건설 자재가 필요합니다. 건물을 보급하려면 가까이에 보급 상자가 있거나 인벤토리에 산란을 가지고 있어야 합니다. 그런 다음 건물의 휠 메뉴를 6 (기본 설정)로 열고 보급을 누르세요. FOB인 건물은 동일한 자재를 공유하고, 독립된 건물은 자체 공급 풀을 가지고 있습니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\decay.paa";
		};

		class Decay {
			displayName = "부식";
			displayNameShort = "부식";
			description = "건물의 자재가 바닥나면 부식이 시작됩니다! 부식 중인 건물은 플레이어가 근처에 없을 때 파괴됩니다. 이러한 건물은 비활성화되며, 리스폰 또는 차량 생성과 같은 특수 기능을 사용할 수 없습니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\decay.paa";
			//참고: 문서에는 방사형 메뉴 이미지라고 나와 있지만 의미가 있는 이미지를 찾지 못해서 부식 이미지를 넣었습니다.
		};

		class Bases {
			displayName = "FOB";
			displayNameShort = "시작 FOB";
			description = "상황실은 FOB의 핵심입니다. 주변 건물을 모두 하나의 자재 풀에 연결하고 FOB 전용 구조물의 건설을 가능하게 합니다. 건설 작업의 대부분은 FOB의 일부로 이루어져야 합니다! <br/><br/>상황실을 건설하려면 N 키 (기본 설정)를 눌러 건물 메뉴를 열고 '기능: 본부'를 선택하세요. 기존 구조물 근처에 FOB를 건설하면 자동으로 해당 구조물이 FOB의 일부가 됩니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\situation_room.paa";
		};
		
		class Medical_Tent {
			displayName = "의료 텐트";
			displayNameShort = "의료 텐트";
			description = "의료 텐트는 팀이 전투에 참여할 수 있도록 해주는 중요한 요소입니다. 이 텐트는 귀중한 응급 처치 키트를 소비하지 않고 FOB에서 팀원을 치료할 수 있도록 합니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\medical_tent.paa";
		};

		class Checkpoint {
			displayName = "검문소";
			displayNameShort = "검문소";
			description = "당신 옆에 있는 건물은 검문소입니다. 이 건물에서 리스폰할 수 있지만, 그로 인해 건물의 자재가 소모됩니다. 자재가 바닥나면 해당 검문소에서의 재배치가 비활성화되므로 항상 전투에 참여할 수 있도록 보급을 유지하도록 기억하세요.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\checkpoint.paa";
		};

		class Construction {
			displayName = "건설";
			displayNameShort = "건설";
			description = "공병은 팀에 도움이 되는 건물과 구조물을 배치할 수 있습니다. ACAV의 공병은 다른 팀의 공병보다 더 많은 구조물에 액세스할 수 있습니다. 건설을 시작하려면 N 키 (기본 설정)를 눌러 건물 메뉴를 엽니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\build_menu.paa";
		};


	};
		
	class Deployment {
		displayName = "배치";

		class Duty_Officer {
			displayName = "팀 및 훈련 선택";
			displayNameShort = "당직 장교!";
			description = "담당 장교를 통해 팀을 변경하고 특기를 훈련할 수 있습니다. 팀을 변경하려면 H 키 (기본 설정)를 눌러 업무 목록을 열고 팀 휘장을 선택하세요. 특기를 훈련하려면 담당 장교를 바라보고 6 키 (기본 설정)를 눌러 휠 메뉴를 엽니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\duty_officer.paa";
		};
	};

	class Environment {
		displayName = "환경";

		class Snakes {
			displayName = "뱀";
			displayNameShort = "뱀에게 물렸어요!";
			description = "뱀에게 물렸어요! 베트남의 정글에서는 뱀이 주요한 위험 요소입니다. 적절하지 않은 시간에 뱀에게 물리면 심각한 결과를 초래할 수 있으므로 항상 주의하세요. 일단 음식과 음료를 섭취하여 체력을 회복하세요.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\snake.paa";
		};

		class Night {
			displayName = "야간 전투";
			displayNameShort = "야간 전투";
			description = "야간 전투! 밤에 효과적으로 전투하기 위해 사용 가능한 모든 도구를 활용해야 합니다. 플레어 발사기와 플레어 수류탄은 창고에서 사용할 수 있으며 거의 모든 차량에도 있습니다! RTO에게 조명을 요청하여 플레어를 사용할 수 있도록 해보세요!";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\FOB_flare.paa";
		};

	};

	class Gameplay {
		displayName = "게임플레이";

		class Respawning_Checkpoint {
			displayName = "검문소에서 리스폰";
			displayNameShort = "재배치!";
			description = "검문소나 FOB로 재배치했습니다! 이 작업은 검문소나 FOB의 자재를 소모합니다. 자재가 바닥나면 해당 검문소에서의 재배치가 비활성화되므로 항상 보급을 유지하여 전투에 항상 참여할 수 있도록 해야 합니다. 팀원들도 그 자재가 필요합니다!";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\checkpoint_supplies.paa";
		};

		class Needs {
			displayName = "식량과 물";
			displayNameShort = "식량과 물";
			description = "식량과 물은 현장에서 체력을 유지하는 데 필요합니다. 음식이나 물이 없으면 움직임과 전투 능력이 심각하게 저하되어 VC 또는 NVA에 대한 노출된 대상이 될 수 있습니다. 최소한 음료병과 양식 일부를 소지하지 않고 기지를 떠나지 마세요. 그렇지 않으면 친구에게서 빌려야 할 것입니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\drink_food.paa";
		};

		class Counterattack {
			displayName = "반격";
			displayNameShort = "반격";
			description = "적이 당신의 FOB를 발견하고 반격을 보냈습니다! 방어를 위해 FOB에 화력 분대와 충분한 탄약 및 의료품을 준비하세요. FOB가 넘어가면 검문소에 보급을 유지하여 신속한 지원을 보장하세요. 적의 반격은 현재 AO의 적의 강도에 따라 결정됩니다.";
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

		class Tasks {
			displayName = "임무";
			displayNameShort = "임무 메뉴";
			description = "업무 목록은 업무 목록에서 현재 팀에 할당된 업무를 보여줍니다. 지원 업무와 기타 목표도 사용 가능한 경우 표시됩니다. 업무는 지도 화면에서도 확인할 수 있습니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\AA.paa";
		};

		class Logistics {
			displayName = "물자 인벤토리";
			displayNameShort = "물자 인벤토리";
			description = "물자 인벤토리를 사용하면 차량이 다양한 보급품과 정적 무기를 운반할 수 있습니다. 차량을 바라보고 '물자 인벤토리'를 선택하여 액세스할 수 있습니다. 차량마다 최대 용량이 다르므로 각 차량을 익히는 것이 좋습니다. 아이템을 차량에 넣으려면 아이템을 집고 차량을 바라보고 스크롤 휠 옵션 '차량에 아이템 적재'를 사용하면 됩니다. 차량에 아이템을 적재하면 차량의 무게가 증가하므로 예상한 대로 작동하지 않을 수 있습니다!";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\logistic_menu.paa";
		};

	};

	class Logistics {
		displayName = "물자 보급";

		class Supplies {
			displayName = "물자 보급";
			displayNameShort = "물자 보급";
			description = "좋은 물자 공급 라인은 게임 플레이의 중요한 요소입니다. 건물, 탄약, 음식 및 의료품이 없으면 팀은 NVA에 맞서기 어려울 것입니다. 물자는 Green Hornets 또는 ACAV 기지의 보급관에서 주문한 다음 목적지로 운전하거나 슬링로드로 공급될 수 있습니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\supply_officer.paa";
		};

		class Vehicles {
			displayName = "차량 생성";
			displayNameShort = "차량 생성";
			description = "차량 작업장을 사용하면 물자를 소모하여 현장에서 새로운 차량을 생성할 수 있습니다. 차량을 생성하려면 건물을 바라보고 6 키 (기본값)를 누르고 생성하려는 차량이나 정적 무기를 선택하세요. 선택을 완료하면 차량이 차량 정비 창고 내부에 스폰됩니다. (내부가 비어 있는 경우)";
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

		class Wrecks {
			displayName = "잔해 수거";
			displayNameShort = "잔해 수거";
			description = "일부 차량이 전투 중에 수리할 수 없을 정도로 손상되면 잔해가 남습니다. 이 잔해를 상자로 포장하여 Green Hornets에 의해 슬링로드되거나 트럭에 적재할 수 있습니다. 팀이 잔해를 찾을 수 있도록 지원 작업을 만들어야 합니다! 수거한 후, Pleiku의 잔해 수거 지역으로 가져가면 차량이 이전 기지에 재스폰됩니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\wreck_packing.paa";
		};

		class Support_Tasks {
			displayName = "지원 업무";
			displayNameShort = "지원 업무";
			description = "정글에서 살아남기 위해 팀의 지원이 필요합니다. 지원 요청을 하려면 업무 목록 (H)을 열고 지원 요청 섹션을 클릭하세요. 오른쪽 메뉴에서 팀에 대한 사용 가능한 요청 목록이 표시됩니다. 작업과 도움이 필요한 팀을 선택하세요. 마지막으로 '위치 선택'을 클릭하고 맵을 클릭하여 위치를 선택합니다. 위치를 잠금으로 설정하려면 '새로운 지원 업무 생성'을 클릭하세요! 이제 다른 팀이 도움을 줄 때까지 기다리세요!";
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

	};

	class Module {
		displayName = "모듈";

		class Downed {
			displayName = "다운됨";
			displayNameShort = "견뎌내고 계속 싸워라!";
			description = "견뎌내고 계속 싸워라! 전투 중에 다운되면 재차 돌아오고 싸울 수 있습니다. 다운되었을 때, 1분을 기다리면 견뎌내기 옵션이 나타납니다. 다운되기 전에 근처 팀원의 도움을 받는 것이 좋으므로 여러 개의 의료 키트를 소비할 수 있습니다!";
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

		class Master_Arm {
			displayName = "Master Arm";
			displayNameShort = "무장 및 장전!";
			description = "무장 및 장전! 마스터 암은 차량이나 항공기를 완전히 장전, 수리 및 운전할 수 있는 기능을 제공합니다. Pleiku 주변의 차량 베이 근처에 주차한 후, 마스터 암 액션을 선택하세요! 그러나 이 옵션은 차량의 운전자에게만 제공됩니다. 연료 보급뿐만 아니라 재무장, 수리, 차량의 스킨 및 무장을 변경할 수 있습니다.";
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

	};


	class Player {
		displayName = "Player Information";
		
		class Rank {
			displayName = "Rank";
			displayNameShort = "승진!";
			description = "축하합니다! 방금 승진하셨습니다! 이제 더 많은 장비와 차량에 접근할 수 있습니다. 기지에 돌아갈 때 반드시 무기고를 확인하십시오!";
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

	};

	class Team {
		displayName = "Team";

		class Mike_Force {
			displayName = "Mike Force";
			displayNameShort = "Mike Force, 목표물을 공격하고 정리하십시오.";
			description = "Mike Force, 목표물을 공격하고 정리하십시오! 마이크 포스의 주요 임무는 지역에서 적을 제거하고 대공포와 포대와 같은 적의 위치를 제거하는 것입니다. 지상에서는 ACAV의 지원을 받고 공중에서는 그린 호넷의 지원을 받으며 치열한 전투에 참여하게 될 것입니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\mike_force.paa";
		};

		class Green_Hornets {
			displayName = "Green Hornets";
			displayNameShort = "Green Hornets, 보급, 수송 그리고 항공지원.";
			description = "수송, 보급 및 근접 공중 지원(CAS)은 그린 호넷의 주요 임무 목표입니다. 그린 호넷의 조종사로서, 사람들을 필요한 장소로 안전하게 운송하는 것과 먼 전초기지에 중요한 보급품을 제공하는 데 우선순위를 두어야 합니다. 그러나 팀에서 프레리 파이어 긴급 상황을 요청할 때는 주저하지 않고 강력한 화력 지원을 제공해야 합니다!";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\green_hornet.paa";
		};

		class ACAV {
			displayName = "ACAV";
			displayNameShort = "ACAV, 건설하고, 보급하고, 이긴다!";
			description = "기지 없이는 어디로도 갈 수 없습니다. 무제한 수의 공병이 있으면 ACAV는 현재 지역에서 팀 전체가 점령, 유지 및 배치할 수 있는 필요한 구조물을 건설하는 데 이상적으로 위치하고 있습니다. ACAV는 지상에서의 중대한 화력 지원 역할도 수행하며, 전차와 건트럭과 함께 전투에 참전합니다.";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\acav.paa";
		};

		class Close_Air {
			displayName = "근접 항공 지원";
			displayNameShort = "근접 항공 지원!";
			description = "근접 공중 지원을 제공할 때 '그린 호넷'으로서, 지원 작전에서 지정된 대상만을 공격하도록 기억하십시오. 팀을 도와주는 것이 주된 업무이며, 상대를 처치하는 것은 주된 목표가 아닙니다.";
			//image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\<cardname>.paa";
			//Note: No image.
		};

	};

	class Artillery {
		displayName = "포격";

		class RTO {
			displayName = "RTO";
			displayNameShort = "Bring the Iron Rain!";
			description = "Bring the Iron Rain! 라디오 통신을 담당하는 통신병은 팀에 대규모 화력 지원을 제공하는 데 매우 중요합니다. RTO로서, 다양한 공중 및 포격 공격을 통해 전장을 통제할 수 있는 권한이 있습니다. 야간에 작전을 수행하기 위해서는 조명이 중요합니다. 그러나 지원을 요청하기 위해서는 라디오 배낭이 필요합니다!";
			image = "\vn\ui_f_vietnam\ui\mikeforce\survivalcards\arty_support.paa";
		};

	};
};