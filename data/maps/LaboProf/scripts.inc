LaboProf_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LaboProf_EventScript_BallDefault
	.byte 0


LaboProf_EventScript_BallDefault::
	setvar STARTER_REGION, 0
	setvar VAR_DIFFICULTY, 0
	return


Start_StarterChoose_Sequence::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch
	waitmovement 0
	msgbox BeginAdventureText
	waitmessage
	closemessage
	applymovement 4, ProfMove
	waitmovement 0
	setvar CHARLOTCITY_STATE, 1
	release
	return


Start_StarterChoose_Sequence2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch2
	waitmovement 0
	goto Start_StarterChoose_Sequence
	return


MeetBirch:
	walk_up
	walk_up
	step_end

MeetBirch2:
	walk_left
	step_end

ProfMove:
	walk_up
	walk_right
	walk_right
	walk_up
	face_down
	step_end

StopLeaving::
	lockall
	msgbox StopLeaving_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, DoNotLeave
	waitmovement 0
	releaseall
	return


DoNotLeave:
	walk_up
	step_end

LaboProf_EventScript_Difficulty::
	lock
	faceplayer
	message LaboProf_EventScript_Difficulty_Text_0
	multichoice 25, 5, MULTI_TAG_DIFFICULTY, 0
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq LaboProf_EventScript_Difficulty_2
	compare VAR_RESULT, 1
	goto_if_eq LaboProf_EventScript_Difficulty_3
	compare VAR_RESULT, 2
	goto_if_eq LaboProf_EventScript_Difficulty_4
LaboProf_EventScript_Difficulty_1:
	compare VAR_DIFFICULTY, 0
	goto_if_eq LaboProf_EventScript_Difficulty_9
LaboProf_EventScript_Difficulty_8:
	compare VAR_DIFFICULTY, 1
	goto_if_eq LaboProf_EventScript_Difficulty_12
LaboProf_EventScript_Difficulty_11:
	compare VAR_DIFFICULTY, 2
	goto_if_eq LaboProf_EventScript_Difficulty_15
LaboProf_EventScript_Difficulty_14:
	release
	return

LaboProf_EventScript_Difficulty_2:
	call StarterFade
	setvar VAR_DIFFICULTY, 2
	goto LaboProf_EventScript_Difficulty_1

LaboProf_EventScript_Difficulty_3:
	call StarterFade
	setvar VAR_DIFFICULTY, 0
	goto LaboProf_EventScript_Difficulty_1

LaboProf_EventScript_Difficulty_4:
	call StarterFade
	setvar VAR_DIFFICULTY, 1
	goto LaboProf_EventScript_Difficulty_1

LaboProf_EventScript_Difficulty_9:
	msgbox LaboProf_EventScript_Difficulty_Text_1
	waitmessage
	goto LaboProf_EventScript_Difficulty_8

LaboProf_EventScript_Difficulty_12:
	msgbox LaboProf_EventScript_Difficulty_Text_2
	waitmessage
	goto LaboProf_EventScript_Difficulty_11

LaboProf_EventScript_Difficulty_15:
	msgbox LaboProf_EventScript_Difficulty_Text_3
	waitmessage
	goto LaboProf_EventScript_Difficulty_14


LaboProf_EventScript_Birch::
	goto_if_unset FLAG_SYS_POKEMON_GET, LaboProf_EventScript_Birch_2
	goto_if_set FLAG_SYS_POKEDEX_GET, LaboProf_EventScript_Birch_14
LaboProf_EventScript_Birch_13:
	msgbox LaboProf_EventScript_Birch_Text_3, MSGBOX_NPC
LaboProf_EventScript_Birch_1:
	end

LaboProf_EventScript_Birch_2:
	lock
	faceplayer
	message LaboProf_EventScript_Birch_Text_0
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq LaboProf_EventScript_Birch_6
	compare VAR_RESULT, 1
	goto_if_eq LaboProf_EventScript_Birch_7
	compare VAR_RESULT, 2
	goto_if_eq LaboProf_EventScript_Birch_8
LaboProf_EventScript_Birch_5:
	msgbox LaboProf_EventScript_Birch_Text_1
	waitmessage
	release
	goto LaboProf_EventScript_Birch_1

LaboProf_EventScript_Birch_6:
	call StarterFade
	setvar STARTER_REGION, 2
	goto LaboProf_EventScript_Birch_5

LaboProf_EventScript_Birch_7:
	call StarterFade
	setvar STARTER_REGION, 1
	goto LaboProf_EventScript_Birch_5

LaboProf_EventScript_Birch_8:
	call StarterFade
	setvar STARTER_REGION, 0
	goto LaboProf_EventScript_Birch_5

LaboProf_EventScript_Birch_12:
	msgbox LaboProf_EventScript_Birch_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LaboProf_EventScript_Birch_17
	msgbox LaboProf_EventScript_Birch_Text_3, MSGBOX_NPC
	goto LaboProf_EventScript_Birch_1

LaboProf_EventScript_Birch_14:
	goto_if_unset FLAG_SYS_NATIONAL_DEX, LaboProf_EventScript_Birch_12
	goto LaboProf_EventScript_Birch_13

LaboProf_EventScript_Birch_17:
	call UpgradeNationalDex
	goto LaboProf_EventScript_Birch_1


StarterFade::
	fadescreen FADE_TO_BLACK
	delay 20
	fadescreen FADE_FROM_BLACK
	return


LaboProf_EventScript_PokeballOne::
	lockall
	setvar VAR_TEMP_0, 1
	goto_if_unset FLAG_SYS_POKEMON_GET, LaboProf_EventScript_PokeballOne_2
	msgbox LaboProf_EventScript_PokeballOne_Text_0
LaboProf_EventScript_PokeballOne_1:
	waitmessage
	releaseall
	end

LaboProf_EventScript_PokeballOne_2:
	compare STARTER_REGION, 0
	goto_if_eq LaboProf_EventScript_PokeballOne_5
	compare STARTER_REGION, 1
	goto_if_eq LaboProf_EventScript_PokeballOne_6
	compare STARTER_REGION, 2
	goto_if_eq LaboProf_EventScript_PokeballOne_7
	goto LaboProf_EventScript_PokeballOne_1

LaboProf_EventScript_PokeballOne_5:
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
	setvar STARTER_CHOICE, SPECIES_MUDKIP
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballOne_1

LaboProf_EventScript_PokeballOne_6:
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	setvar STARTER_CHOICE, SPECIES_TOTODILE
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballOne_1

LaboProf_EventScript_PokeballOne_7:
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	setvar STARTER_CHOICE, SPECIES_SQUIRTLE
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballOne_1


LaboProf_EventScript_PokeballTwo::
	lockall
	setvar VAR_TEMP_0, 2
	goto_if_unset FLAG_SYS_POKEMON_GET, LaboProf_EventScript_PokeballTwo_2
	msgbox LaboProf_EventScript_PokeballOne_Text_0
LaboProf_EventScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

LaboProf_EventScript_PokeballTwo_2:
	compare STARTER_REGION, 0
	goto_if_eq LaboProf_EventScript_PokeballTwo_5
	compare STARTER_REGION, 1
	goto_if_eq LaboProf_EventScript_PokeballTwo_6
	compare STARTER_REGION, 2
	goto_if_eq LaboProf_EventScript_PokeballTwo_7
	goto LaboProf_EventScript_PokeballTwo_1

LaboProf_EventScript_PokeballTwo_5:
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
	setvar STARTER_CHOICE, SPECIES_TREECKO
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballTwo_1

LaboProf_EventScript_PokeballTwo_6:
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	setvar STARTER_CHOICE, SPECIES_CHIKORITA
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballTwo_1

LaboProf_EventScript_PokeballTwo_7:
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	setvar STARTER_CHOICE, SPECIES_BULBASAUR
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballTwo_1


LaboProf_EventScript_PokeballThree::
	lockall
	setvar VAR_TEMP_0, 3
	goto_if_unset FLAG_SYS_POKEMON_GET, LaboProf_EventScript_PokeballThree_2
	msgbox LaboProf_EventScript_PokeballOne_Text_0
LaboProf_EventScript_PokeballThree_1:
	waitmessage
	releaseall
	end

LaboProf_EventScript_PokeballThree_2:
	compare STARTER_REGION, 0
	goto_if_eq LaboProf_EventScript_PokeballThree_5
	compare STARTER_REGION, 1
	goto_if_eq LaboProf_EventScript_PokeballThree_6
	compare STARTER_REGION, 2
	goto_if_eq LaboProf_EventScript_PokeballThree_7
	goto LaboProf_EventScript_PokeballThree_1

LaboProf_EventScript_PokeballThree_5:
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
	setvar STARTER_CHOICE, SPECIES_TORCHIC
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballThree_1

LaboProf_EventScript_PokeballThree_6:
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	setvar STARTER_CHOICE, SPECIES_CYNDAQUIL
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballThree_1

LaboProf_EventScript_PokeballThree_7:
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	setvar STARTER_CHOICE, SPECIES_CHARMANDER
	call LaboProf_EventScript_GiveStarter
	goto LaboProf_EventScript_PokeballThree_1


LaboProf_EventScript_GiveStarter::
	showmonpic STARTER_CHOICE, 10, 3
	msgbox LaboProf_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LaboProf_EventScript_GiveStarter_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

LaboProf_EventScript_GiveStarter_1:
	setflag FLAG_SYS_POKEMON_GET
	setvar CHARLOTCITY_STATE, 2
	givemon STARTER_CHOICE, 5, ITEM_POKE_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LaboProf_EventScript_GiveStarter_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LaboProf_EventScript_GiveStarter_6
	hidemonpic
	msgbox LaboProf_EventScript_GiveStarter_Text_3
LaboProf_EventScript_GiveStarter_4:
	closemessage
	call InitiatePokedexSequence
	return

LaboProf_EventScript_GiveStarter_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox LaboProf_EventScript_GiveStarter_Text_1
	removeobject VAR_TEMP_0
	call SetBallFlag
	call NicknamePartyMon
	goto LaboProf_EventScript_GiveStarter_4

LaboProf_EventScript_GiveStarter_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox LaboProf_EventScript_GiveStarter_Text_1
	removeobject VAR_TEMP_0
	call SetBallFlag
	call NicknameBoxMon
	msgbox LaboProf_EventScript_GiveStarter_Text_2
	goto LaboProf_EventScript_GiveStarter_4


SetBallFlag::
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
	setflag STARTER_BALL_ONE
	return

SetBallFlag_5:
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
	setflag STARTER_BALL_THREE
	return


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_1
	return

NicknameBoxMon_1:
	call Common_EventScript_NameReceivedBoxMon
	return


InitiatePokedexSequence::
	lock
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, TurnToProf
	compare VAR_TEMP_0, 1
	goto_if_eq InitiatePokedexSequence_2
InitiatePokedexSequence_1:
	compare VAR_TEMP_0, 2
	goto_if_eq InitiatePokedexSequence_5
InitiatePokedexSequence_4:
	compare VAR_TEMP_0, 3
	goto_if_eq InitiatePokedexSequence_8
InitiatePokedexSequence_7:
	waitmovement 0
	delay 20
	call GivePokedex
	release
	return

InitiatePokedexSequence_2:
	applymovement 4, MoveBallOne
	goto InitiatePokedexSequence_1

InitiatePokedexSequence_5:
	applymovement 4, MoveBallTwo
	goto InitiatePokedexSequence_4

InitiatePokedexSequence_8:
	applymovement 4, MoveBallThree
	goto InitiatePokedexSequence_7


GivePokedex::
	lock
	msgbox TakePokedex, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message GivePokedex_Text_0
	waitfanfare
	closemessage
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_ADVENTURE_STARTED
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
	msgbox GivePokedex_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
	waitmessage
	release
	return


UpgradeNationalDex::
	lock
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
	waitmessage
	waitfanfare
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	closemessage
	release
	return


MoveBallOne:
	walk_left
	walk_left
	step_end

MoveBallTwo:
	walk_left
	step_end

MoveBallThree:
	face_left
	step_end

TurnToProf:
	face_right
	step_end

DontTouchThat::
	lockall
	msgbox DontTouchThat_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MoveAwayFromThere
	waitmovement 0
	releaseall
	return


MoveAwayFromThere:
	walk_left
	walk_left
	step_end

StopLeaving_Text_0:
	.string "Vous devez choisir un Pokemon.$"

LaboProf_EventScript_Difficulty_Text_0:
	.string "Vous pouvez choisir la difficulté.$"

LaboProf_EventScript_Difficulty_Text_1:
	.string "Vous avez choisi la difficulté : {COLOR BLUE}{SHADOW LIGHT_BLUE}NORMAL$"

LaboProf_EventScript_Difficulty_Text_2:
	.string "Vous avez choisi la difficulté : {COLOR RED}{SHADOW LIGHT_RED}HARD$"

LaboProf_EventScript_Difficulty_Text_3:
	.string "Vous avez choisi la difficulté : {COLOR GREEN}{SHADOW LIGHT_GREEN}EASY$"

LaboProf_EventScript_Birch_Text_0:
	.string "Choisi la région de ton Starter.$"

LaboProf_EventScript_Birch_Text_1:
	.string "Choisissez judicieusement votre Pokémon.$"

LaboProf_EventScript_Birch_Text_2:
	.string "Veux-tu améliore ton Pokédex en\n"
	.string "NationalDex?$"

LaboProf_EventScript_Birch_Text_3:
	.string "Prenez soin de votre Pokémon$"

LaboProf_EventScript_PokeballOne_Text_0:
	.string "Vous ne pouvez en prendre qu'une.$"

LaboProf_EventScript_GiveStarter_Text_0:
	.string "Voulez vous choisir {STR_VAR_1}?$"

LaboProf_EventScript_GiveStarter_Text_1:
	.string "Vous avez reçu {STR_VAR_1}$"

LaboProf_EventScript_GiveStarter_Text_2:
	.string "{STR_VAR_1} a été transferré au PC.$"

LaboProf_EventScript_GiveStarter_Text_3:
	.string "Vous n'avez plus de place libre.$"

NicknamePartyMon_Text_0:
	.string "Voulez vous donner un surnom?$"

GivePokedex_Text_0:
	.string "{PLAYER} a reçu le POKéDEX!$"

GivePokedex_Text_1:
	.string "Aussi prends ça avec toi!$"

GivePokedex_Text_2:
	.string "Ceux-ci te permet d'attraper tes\n"
	.string "propre Pokémon dans les hautes herbes\l"
	.string "afin que tu puisses collecter tout le\l"
	.string "Pokedex.$"

DontTouchThat_Text_0:
	.string "NE TOUCHE PAS A ÇA!$"

BeginAdventureText::
	.string "{COLOR RED}{SHADOW LIGHT_RED}Birch:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Salut {PLAYER}, je suis le Prof Birch\n"
	.string "Ceci est mon labo.\p"
	.string "Aujourd'hui est le jour où tu vas recevoir\n"
	.string "ton premier Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Maintenant choisi judicieusement,\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Si tu veux voir plus d'option\l"
	.string "viens me parler.\n$"

NewProfessor_NotChosen::
	.string "Vous n'avez pas choisi {STR_VAR_1}.$"

TakePokedex::
	.string "Hey! {PLAYER}, J'ai commandé ceci pour mes\n"
	.string "recherches, mais je pense que tu devrais\l"
	.string "avoir ce POKéDEX.$"
