Route202_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route202_EventScript_Default
	.byte 0


Route202_EventScript_Default::
	call Common_EventScript_SetupRivalGfxId
	return


Route202_EventScript_RivalBattle::
	goto_if_unset STARTER_BALL_ONE, Route202_EventScript_RivalBattle_3
Route202_EventScript_RivalBattle_2:
	compare VAR_STATIS_STATE, 0
	goto_if_eq Route202_EventScript_RivalBattle_8
	return

Route202_EventScript_RivalBattle_1:
	setflag RIVAL_ROUTE_202_BATTLE
	setvar VAR_STATIS_STATE, 0
	return

Route202_EventScript_RivalBattle_3:
	goto_if_unset STARTER_BALL_TWO, Route202_EventScript_RivalBattle_5
	goto Route202_EventScript_RivalBattle_2

Route202_EventScript_RivalBattle_5:
	goto_if_unset STARTER_BALL_THREE, Route202_EventScript_RivalBattle_1
	goto Route202_EventScript_RivalBattle_2

Route202_EventScript_RivalBattle_8:
	clearflag RIVAL_ROUTE_202_BATTLE
	return


RivalBattleTrigger::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, MayBattle
	goto_if_eq VAR_RESULT, FEMALE, BrendanBattle
	return


MayBattle::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto_if_set STARTER_BALL_ONE, MayBattle_2
MayBattle_1:
	goto_if_set STARTER_BALL_TWO, MayBattle_4
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, Rival_Intro, Rival_Outro, RivalBattleOver
	return

MayBattle_2:
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, Rival_Intro, Rival_Outro, RivalBattleOver
	goto MayBattle_1

MayBattle_4:
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, Rival_Intro, Rival_Outro, RivalBattleOver
	return


BrendanBattle::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto_if_set STARTER_BALL_ONE, BrendanBattle_2
BrendanBattle_1:
	goto_if_set STARTER_BALL_TWO, BrendanBattle_4
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TORCHIC, Rival_Intro, Rival_Outro, RivalBattleOver
	return

BrendanBattle_2:
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, Rival_Intro, Rival_Outro, RivalBattleOver
	goto BrendanBattle_1

BrendanBattle_4:
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, Rival_Intro, Rival_Outro, RivalBattleOver
	return


RivalBattleOver::
	lockall
	applymovement 1, RivalLeave
	waitmovement 0
	removeobject 1
	setflag RIVAL_ROUTE_202_BATTLE
	clearflag BLOCK_ROUTE_202
	setvar VAR_STATIS_STATE, 1
	waitmessage
	playbgm MUS_ROUTE101, TRUE
	releaseall
	return


RivalLeave:
	face_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route202_Trigger_BlockPath::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, FaceNPC
	waitmovement 0
	msgbox Route202_Trigger_BlockPath_Text_0, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end


Route202_Trigger_BlockPath1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, FaceNPC
	waitmovement 0
	msgbox Route202_Trigger_BlockPath_Text_0, MSGBOX_DEFAULT
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Route202_StopPlayer
	waitmovement 0
	releaseall
	end


Route202_Trigger_BlockPath2::
	lockall
	applymovement 3, BlockPath2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, FaceNPC
	waitmovement 0
	msgbox Route202_Trigger_BlockPath_Text_0, MSGBOX_DEFAULT
	applymovement 3, BlockPath2Return
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route202_StopPlayer
	waitmovement 0
	releaseall
	end


BlockPath2:
	walk_down
	step_end

BlockPath2Return:
	walk_up
	face_down
	step_end

Route202_Trigger_BlockPath3::
	lockall
	applymovement 3, BlockPath3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, FaceNPC
	waitmovement 0
	msgbox Route202_Trigger_BlockPath_Text_0, MSGBOX_DEFAULT
	applymovement 3, BlockPath3Return
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route202_StopPlayer
	waitmovement 0
	releaseall
	end


BlockPath3:
	walk_down
	walk_down
	step_end

BlockPath3Return:
	walk_up
	walk_up
	face_down
	step_end

FaceNPC:
	face_up
	step_end

Route202_StopPlayer:
	walk_right
	step_end

Route202_FirstPerso::
	lock
	msgbox Route202_FirstPerso_Text_0
	waitmessage
	release
	end


Route202_PokeBall::
	lock
	msgbox Route202_PokeBall_Text_0, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_RARE_CANDY, 1
	setflag SECOND_POKE_BALL
	removeobject 2
	release
	end


Route202_Trigger_BlockPath_Text_0:
	.string "Tu n'as pas encore battu ton rival, tu\n"
	.string "ne peux pas continuer.$"

Route202_FirstPerso_Text_0:
	.string "Si tu veux avancer plus loin il te faut\n"
	.string "battre {RIVAL}.$"

Route202_PokeBall_Text_0:
	.string "Vous avez trouvé un Super bonbon!$"

Rival_Intro::
	.string "Tu ne gagneras pas!$"

Rival_Outro::
	.string "Cette fois ne compte pas.$"
