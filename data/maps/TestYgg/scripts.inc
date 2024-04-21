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

TestYgg_EventScript_PlayerAnsweredNo::
	msgbox TestYgg_Text_PlayerAnsweredNo, MSGBOX_DEFAULT
	release
	end


TestYgg_Text_FireGymOneYesNo:
	.string "Fight the fire\n"
	.string "gym?$"

TestYgg_Text_PlayerAnsweredNo:
	.string "DAMN$"


TestYgg_Text_FireGymOneIntro:
	.string "FIRE$"

TestYgg_Text_FireGymOneDefeat:
	.string "DAMN$"

TestYgg_Text_FireGymOnePostBattle:
	.string "Nice.$"



