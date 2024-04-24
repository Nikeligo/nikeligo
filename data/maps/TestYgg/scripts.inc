TestYgg_MapScripts::	
	.byte 0

TestYgg_EventScript_ArkeeStarters::
	lock
	special ChooseStarter
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET 
	setflag FLAG_SYS_NATIONAL_DEX
	setvar 0x40F8, 20
	removeobject 1
	release
	end


TestYgg_EventScript_OldManBalls::
	lock
	faceplayer
	msgbox Text_OldManBallsGreeting, MSGBOX_NPC
	giveitem ITEM_POKE_BALL, 10
	compare VAR_RESULT, FALSE
	goto_if_eq Script_BagIsFull
	release
	end

TestYgg_EventScript_OldManCandy::
	lock
	faceplayer
	msgbox Text_OldManCandyGreeting, MSGBOX_NPC
	giveitem ITEM_RARE_CANDY, 10
	compare VAR_RESULT, FALSE
	goto_if_eq Script_BagIsFull
	release
	end

TestYgg_EventScript_LeaveForExpedition::
	lock
	faceplayer
	msgbox TestYgg_Text_AskExpedition, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq TestYgg_EventScript_NoExpedition
	applymovement OBJ_EVENT_ID_PLAYER, Movement_UpOne	
	waitmovement 0
	warpsilent MAP_LIFE_TREE, 15, 25
	waitstate
	release
	end

TestYgg_EventScript_NoExpedition::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DownOne	
	waitmovement 0
	release
	end

TestYgg_Text_AskExpedition::
	.string "Heading out on\n"
	.string "an expedition?$"

Movement_DownOne:
	walk_down
	step_end

Movement_UpOne:
	walk_up
	step_end

Script_BagIsFull::
	msgbox Text_BagIsFull, MSGBOX_DEFAULT
	release
	end

Text_OldManBallsGreeting::
	.string "Hey, kid...\n"
	.string "want some balls?$"

Text_OldManCandyGreeting::
	.string "Hey, kid...\n"
	.string "want some candy?$"

Text_BagIsFull:
	.string "Your BAG is full.$"




TestYgg_EventScript_FireGymOne::
	msgbox TestYgg_Text_FireGymOneYesNo, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq TestYgg_EventScript_PlayerAnsweredNo
	setweather WEATHER_DROUGHT
	doweather
	trainerbattle_single TRAINER_FIREGYMONE, TestYgg_Text_FireGymOneIntro, TestYgg_Text_FireGymOneDefeat
	msgbox TestYgg_Text_FireGymOnePostBattle, MSGBOX_AUTOCLOSE
	end


TestYgg_Text_FireGymOneYesNo:
	.string "Fight the fire\n"
	.string "gym?$"


TestYgg_Text_FireGymOneIntro:
	.string "FIAH$"

TestYgg_Text_FireGymOneDefeat:
	.string "DAMN$"

TestYgg_Text_FireGymOnePostBattle:
	.string "Nice.$"




TestYgg_EventScript_WaterGymOne::
	msgbox TestYgg_Text_WaterGymOneYesNo, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq TestYgg_EventScript_PlayerAnsweredNo
	setweather WEATHER_RAIN
	doweather
	trainerbattle_single TRAINER_WATERGYMONE, TestYgg_Text_WaterGymOneIntro, TestYgg_Text_WaterGymOneDefeat
	msgbox TestYgg_Text_WaterGymOnePostBattle, MSGBOX_AUTOCLOSE
	end


TestYgg_Text_WaterGymOneYesNo:
	.string "Fight the water\n"
	.string "gym?$"


TestYgg_Text_WaterGymOneIntro:
	.string "WAHTAH$"

TestYgg_Text_WaterGymOneDefeat:
	.string "DAMN$"

TestYgg_Text_WaterGymOnePostBattle:
	.string "Nice.$"

TestYgg_EventScript_GrassGymOne::
	msgbox TestYgg_Text_GrassGymOneYesNo, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq TestYgg_EventScript_PlayerAnsweredNo
	setvar VAR_UNUSED_0x40F7 3
	trainerbattle_single TRAINER_GRASSGYMONE, TestYgg_Text_GrassGymOneIntro, TestYgg_Text_GrassGymOneDefeat
	msgbox TestYgg_Text_GrassGymOnePostBattle, MSGBOX_AUTOCLOSE
	end


TestYgg_Text_GrassGymOneYesNo:
	.string "Fight the grass\n"
	.string "gym?$"


TestYgg_Text_GrassGymOneIntro:
	.string "GRASHH$"

TestYgg_Text_GrassGymOneDefeat:
	.string "DAMN$"

TestYgg_Text_GrassGymOnePostBattle:
	.string "Nice.$"


TestYgg_EventScript_DragonGym::
	msgbox TestYgg_Text_DragonGymYesNo, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq TestYgg_EventScript_PlayerAnsweredNo
	trainerbattle_single TRAINER_DRAGONGYM, TestYgg_Text_DragonGymIntro, TestYgg_Text_DragonGymDefeat
	msgbox TestYgg_Text_DragonGymPostBattle, MSGBOX_AUTOCLOSE
	end


TestYgg_Text_DragonGymYesNo:
	.string "Fight the dragon\n"
	.string "gym?$"


TestYgg_Text_DragonGymIntro:
	.string "RAWR$"

TestYgg_Text_DragonGymDefeat:
	.string "DAMN$"

TestYgg_Text_DragonGymPostBattle:
	.string "Nice.$"





TestYgg_EventScript_PlayerAnsweredNo::
	msgbox TestYgg_Text_PlayerAnsweredNo, MSGBOX_DEFAULT
	release
	end


TestYgg_Text_PlayerAnsweredNo:
	.string "DAMN$"


