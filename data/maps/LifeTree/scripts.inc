LifeTree_MapScripts::
	.byte 0



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
	.string "TIMMY TURNER\n"
	.string "SO I GIVE YOU AN F\l"
	.string "FOR FEMBOY\l"
	.string "FAIRY\n"
	.string "COCK\n"
	.string "PARENTS$"