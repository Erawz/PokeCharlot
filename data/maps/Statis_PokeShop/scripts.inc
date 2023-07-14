Statis_PokeShop_MapScripts::
	.byte 0


Statis_Mart_Employee::
	lock
	faceplayer
	message Statis_Mart_Employee_Text_0
	waitmessage
	pokemart Statis_PokeShop_MartItems
	message Statis_Mart_Employee_Text_1
	release
	end


	.align 2
Statis_PokeShop_MartItems:
	.2byte ITEM_POTION
	.2byte ITEM_POKE_BALL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_LEMONADE
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

Statis_Mart_Employee_Text_0:
	.string "Bonjour!\nQue souhaitez-vous faire?$"

Statis_Mart_Employee_Text_1:
	.string "Revenez nous voir dès que possible!$"
