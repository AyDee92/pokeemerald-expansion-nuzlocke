EventScript_UtilityMenu::
# 2 "data/scripts/utility_menu.pory"
	dynmultipush EventScript_UtilityMenu_Text_0, 0
# 3 "data/scripts/utility_menu.pory"
	dynmultipush EventScript_UtilityMenu_Text_1, 1
# 5 "data/scripts/utility_menu.pory"
	dynmultistack 0, 0, FALSE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 6 "data/scripts/utility_menu.pory"
	switch VAR_RESULT
# 7 "data/scripts/utility_menu.pory"
	case 0, EventScript_UtilityMenu_2
# 8 "data/scripts/utility_menu.pory"
	case 1, EventScript_UtilityMenu_3
# 9 "data/scripts/utility_menu.pory"
	case MULTI_B_PRESSED, EventScript_UtilityMenu_4
	return

EventScript_UtilityMenu_2:
# 7 "data/scripts/utility_menu.pory"
	goto EventScript_UtilityMenu_Repel
	return

EventScript_UtilityMenu_3:
# 8 "data/scripts/utility_menu.pory"
	goto EventScript_UtilityMenu_HealParty
	return

EventScript_UtilityMenu_4:
# 9 "data/scripts/utility_menu.pory"
	goto EventScript_UtilityMenu_Exit
	return


EventScript_UtilityMenu_Repel::
# 14 "data/scripts/utility_menu.pory"
	compare VAR_INFINITE_REPEL, 0
	goto_if_eq EventScript_UtilityMenu_Repel_2
# 18 "data/scripts/utility_menu.pory"
	setvar VAR_INFINITE_REPEL, 0
# 19 "data/scripts/utility_menu.pory"
	msgbox EventScript_UtilityMenu_Repel_Text_1, MSGBOX_AUTOCLOSE
EventScript_UtilityMenu_Repel_1:
	end

EventScript_UtilityMenu_Repel_2:
# 15 "data/scripts/utility_menu.pory"
	setvar VAR_INFINITE_REPEL, 1
# 16 "data/scripts/utility_menu.pory"
	msgbox EventScript_UtilityMenu_Repel_Text_0, MSGBOX_AUTOCLOSE
	goto EventScript_UtilityMenu_Repel_1


EventScript_UtilityMenu_HealParty::
# 25 "data/scripts/utility_menu.pory"
	playse SE_USE_ITEM
# 26 "data/scripts/utility_menu.pory"
	special HealPlayerParty
# 27 "data/scripts/utility_menu.pory"
	msgbox EventScript_UtilityMenu_HealParty_Text_0, MSGBOX_AUTOCLOSE
	end


EventScript_UtilityMenu_Exit::
# 32 "data/scripts/utility_menu.pory"
	closemessage
# 33 "data/scripts/utility_menu.pory"
	release
	end


EventScript_UtilityMenu_Text_0:
# 2 "data/scripts/utility_menu.pory"
	.string "Inf. Repel$"

EventScript_UtilityMenu_Text_1:
# 3 "data/scripts/utility_menu.pory"
	.string "Heal Party$"

EventScript_UtilityMenu_Repel_Text_0:
# 16 "data/scripts/utility_menu.pory"
	.string "Repel effect: ON$"

EventScript_UtilityMenu_Repel_Text_1:
# 19 "data/scripts/utility_menu.pory"
	.string "Repel effect: OFF$"

EventScript_UtilityMenu_HealParty_Text_0:
# 27 "data/scripts/utility_menu.pory"
	.string "Your Pokemon are healed!$"
