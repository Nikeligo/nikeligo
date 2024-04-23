LifeTree_MapScripts::
	.byte 0




LifeTree_EventScript_ReturnExpedition::
	lock
	faceplayer
	msgbox LifeTree_Text_AskReturn, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LifeTree_EventScript_NoReturn
	applymovement OBJ_EVENT_ID_PLAYER, LifeMovement_DownOne
	waitmovement 0
	warpsilent MAP_TEST_YGG, 20, 5
	waitstate
	release
	end


LifeTree_EventScript_NoReturn::
	applymovement OBJ_EVENT_ID_PLAYER, LifeMovement_UpOne	
	waitmovement 0
	release
	end

LifeTree_Text_AskReturn::
	.string "End expedition?$"

LifeMovement_DownOne:
	walk_down
	step_end

LifeMovement_UpOne:
	walk_up
	step_end




LifeTree_EventScript_TestTimmyTurner::
	trainerbattle_single TRAINER_TIMMYTURNER, LifeTree_Text_TestTimmyTurnerIntro, LifeTree_Text_TestTimmyTurnerDefeated
	msgbox LifeTree_Text_TestTimmyTurnerPostBattle, MSGBOX_AUTOCLOSE
	end

LifeTree_Text_TestTimmyTurnerIntro:
	.string "ODD PARENTS$"

LifeTree_Text_TestTimmyTurnerDefeated:
	.string "FAIRY ODD PARENTS$"

LifeTree_Text_TestTimmyTurnerPostBattle:
	.string "I FIND YOU\n"
	.string "RATHER FEMININE\l"
	.string "TIMMY TURNER\l"
	.string "SO I GIVE YOU AN F\l"
	.string "FOR FEMBOY\l"
	.string "FAIRY\l"
	.string "COCK\l"
	.string "PARENTS$"

