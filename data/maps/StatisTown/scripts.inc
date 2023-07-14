StatisTown_MapScripts::
	.byte 0


StatisTown_NewSign1::
	lockall
	msgbox StatisTown_NewSign1_Text_0
	releaseall
	return


StatisTown_PokeShopSign::
	lock
	msgbox StatisTown_PokeShopSign_Text_0
	release
	return


StatisTown_PokeCenterSign::
	lock
	msgbox StatisTown_PokeCenterSign_Text_0
	release
	return


StatisTown_NewSign1_Text_0:
	.string "Bienvenue à Statis.$"

StatisTown_PokeShopSign_Text_0:
	.string "PokeShop de Statis.\nDifférents objets y sont vendus.$"

StatisTown_PokeCenterSign_Text_0:
	.string "PokeCenter de Statis.\nVous pouvez soigner vos Pokémon ici.$"
