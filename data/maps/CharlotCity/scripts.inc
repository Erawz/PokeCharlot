CharlotCity_MapScripts::
	.byte 0


CharlotCity_Trigger_BlockPath::
	lockall
	msgbox CharlotCity_Trigger_BlockPath_Text_0, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	waitmovement 0
	releaseall
	end


CharlotCity_RunningShoes::
	compare VAR_CHARLOTCITY_STATE, 2
	goto_if_eq CharlotCity_RunningShoes_1
	return

CharlotCity_RunningShoes_1:
	lockall
	opendoor 21, 6
	waitdooranim
	setobjectxyperm 7, 21, 6
	addobject 7
	applymovement 7, WalkDown
	waitmovement 0
	applymovement 7, WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, TurnLeft
	waitmovement 0
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_Text_SwitchShoesWithRunningShoes, MSGBOX_DEFAULT
	waitfanfare
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
	applymovement 7, WalkLeft
	waitmovement 0
	applymovement 7, WalkUp
	waitmovement 0
	removeobject 7
	setflag FLAG_MET_RIVAL_MOM
	closedoor 21, 6
	waitdooranim
	setvar VAR_CHARLOTCITY_STATE, 3
	releaseall
	end


CharlotCity_RunningShoes1::
	compare VAR_CHARLOTCITY_STATE, 2
	goto_if_eq CharlotCity_RunningShoes1_1
	return

CharlotCity_RunningShoes1_1:
	lockall
	opendoor 21, 6
	waitdooranim
	setobjectxyperm 7, 21, 6
	addobject 7
	applymovement 7, WalkDown1
	waitmovement 0
	applymovement 7, WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, TurnLeft
	waitmovement 0
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_Text_SwitchShoesWithRunningShoes, MSGBOX_DEFAULT
	waitfanfare
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
	applymovement 7, WalkLeft
	waitmovement 0
	applymovement 7, WalkUp1
	waitmovement 0
	removeobject 7
	closedoor 21, 6
	waitdooranim
	setvar VAR_CHARLOTCITY_STATE, 3
	releaseall
	end


CharlotCity_EventScript_StepOffTruckMale::
	lockall
	setvar VAR_0x8004, 5
	setvar VAR_0x8005, 8
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	waitstate
	releaseall
	end


CharlotCity_NewSign::
	lockall
	msgbox CharlotCity_NewSign_Text_0
	releaseall
	return


CharlotCity_NewSign1::
	lockall
	msgbox CharlotCity_NewSign1_Text_0
	releaseall
	return


CharlotCity_NewSign2::
	lockall
	msgbox CharlotCity_NewSign2_Text_0
	releaseall
	return


CharlotCity_FirstPerso::
	lock
	faceplayer
	msgbox CharlotCity_FirstPerso_Text_0, MSGBOX_DEFAULT
	release
	end


CharlotCity_SecondPerso::
	lock
	faceplayer
	msgbox CharlotCity_SecondPerso_Text_0, MSGBOX_DEFAULT
	release
	end


CharlotCity_ThirdPerso::
	lock
	faceplayer
	msgbox CharlotCity_ThirdPerso_Text_0, MSGBOX_DEFAULT
	release
	end


WalkDown:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

WalkDown1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

WalkRight:
	walk_right
	walk_right
	walk_right
	step_end

WalkLeft:
	walk_left
	walk_left
	walk_left
	step_end

WalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

WalkUp1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Leaving:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

TurnLeft:
	face_left
	step_end

StopPlayer:
	walk_left
	step_end

CharlotCity_Trigger_BlockPath_Text_0:
	.string "Tu n'as pas encore de pokémon!\nC'est dangereux d'y aller sans\pTu devrais aller voir\nle PROF dans son labo.$"

CharlotCity_NewSign_Text_0:
	.string "Maison de Lavachette!$"

CharlotCity_NewSign1_Text_0:
	.string "Maison de Val!$"

CharlotCity_NewSign2_Text_0:
	.string "Labo du PROF.$"

CharlotCity_FirstPerso_Text_0:
	.string "Salut!\nJe m'appelle Alan.\lEt toi c'est quoi ton nom?\pRavi de te rencontrer, {PLAYER}!$"

CharlotCity_SecondPerso_Text_0:
	.string "Je me sens bien ici!$"

CharlotCity_ThirdPerso_Text_0:
	.string "Je te souhaite la bievenue à\nCharlot City!$"
