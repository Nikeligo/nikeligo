TestYgg_MapScripts::	
	.byte 0

TestYgg_EventScript_ArkeeStarters::
	lock
	special ChooseStarter
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET 
	setflag FLAG_SYS_NATIONAL_DEX
	removeobject 1
	release
	end


