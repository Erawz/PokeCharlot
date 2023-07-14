Route201_MapScripts::
	.byte 0


Route201_FirstPerso::
	lock
	faceplayer
	msgbox Route201_FirstPerso_Text_0
	release
	end


Route201_PokeBall::
	lock
	msgbox Route201_PokeBall_Text_0, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_POKE_BALL, 1
	setflag FIRST_POKE_BALL
	removeobject 2
	release
	end


Route201_FirstPerso_Text_0:
	.string "Faites attention!\nCet endroit est remplie\pde pokémon sauvage!$"

Route201_PokeBall_Text_0:
	.string "Vous avez trouvé une PokéBall!$"
