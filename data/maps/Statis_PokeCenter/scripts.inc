Statis_PokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Statis_PokeCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Statis_PokeCenter_OnTransition::
	setrespawn HEAL_LOCATION_STATIS_TOWN
	end


Statis_PokeCenter_Employee_Simple::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


Statis_PokeCenter_Employee::
	lock
	faceplayer
	msgbox Statis_PokeCenter_Employee_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Statis_PokeCenter_Employee_1
	msgbox Statis_PokeCenter_Employee_Text_2, MSGBOX_NPC
	return

Statis_PokeCenter_Employee_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	msgbox Statis_PokeCenter_Employee_Text_1
	waitmessage
	release
	end


Statis_PokeCenter_Employee_Text_0:
	.string "Souaitez vous soigner vos Pokémons?$"

Statis_PokeCenter_Employee_Text_1:
	.string "Revenez quand vous voulez!$"

Statis_PokeCenter_Employee_Text_2:
	.string "Passez une bonne journée.$"
