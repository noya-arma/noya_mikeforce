/*
    File: fn_tr_selectTeam_init.sqf
    Author: Savage Game Design
    Public: No
    
    Description:
		Called in onLoad section of the Display.
		Set's the text for the currently active Team in the Team-selection dialog.
    
    Parameter(s): none
    
    Returns: nothing
    
    Example(s):
		[] call vn_mf_fnc_tr_selectTeam_init;
*/

disableSerialization;
#include "..\..\..\..\config\ui\ui_def_base.inc"


VN_TR_SELECTTEAM_TEAM_LOGO_CTRL ctrlSetText "";

// _text = composeText ["The Viet Cong controls this province.", lineBreak, "Your Mobile Strike Force must take control of the populace and destroy the Viet Cong"];
VN_TR_SELECTTEAM_TEAM_DESC_CTRL ctrlSetStructuredText parseText "임무 전략</t>";

_text = "
베트콩이 이 지역을 통제하고 있습니다.<br/>
모바일 스트라이크 포스는 주민을 통제하고 베트콩의 밀림 은신처를 파괴해야 합니다.<br/>
<br/>
- 총 10개의 지역을 점령하고 유지해야 합니다.<br/>
- 동시에 2개의 지역에서 작전을 수행할 수 있습니다.<br/>
4개의 팀이 있습니다:<br/>
- 마이크 포스; ACAV; 그린 호넷; 그리고 스파이크 팀입니다.<br/>
- 팀은 주요 작업을 함께 수행하여 지역 점령에 도움을 줍니다.<br/>
- 귀하의 팀 - (insert name here) -은(는) 지역 점령에 도움을 주는 독특한 팀 작업을 가지고 있습니다. 로비에서 팀을 변경할 수 있습니다.<br/>
- 다른 팀으로부터 지원을 받을 수 있으며 (Hyperlink?)<br/>
- 귀하의 팀은 다른 팀을 위해 지원 작업을 완료할 수 있습니다.<br/>
- 팀 및 지원 작업을 완료하면 계급을 획득할 수 있습니다.<br/>
- 높은 계급은 개선된 무기, 장비, 차량에 접근할 수 있습니다.<br/>
- 통일된 힘으로 협력하여 지역을 빠르게 확보할 수 있습니다.<br/>
- 그러니 팀을 선택하세요. 좋은 행운을 빕니다, 필요할 겁니다!</t>";

VN_TR_SELECTTEAM_TEAM_TEXT_CTRL ctrlSetStructuredText parseText _text;
