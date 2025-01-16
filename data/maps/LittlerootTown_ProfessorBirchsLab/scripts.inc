LittlerootTown_ProfessorBirchsLab_MapScripts::
	.byte 0


LittlerootTown_ProfessorBirchsLab_EventScript_Treecko::
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_2
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Starter_NotChosen
LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_1:
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_2:
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 5, , ITEM_POKE_BALL
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_5
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_6
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_Text_2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_1

LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_5:
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_Text_1
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 1
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_1

LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_6:
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_Text_1
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 1
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_TREECKO
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknameBoxMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_1


NicknamePartyMon::
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_Text_0:
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want Treecko?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_Text_1:
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Treecko$"

LittlerootTown_ProfessorBirchsLab_EventScript_Treecko_Text_2:
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Transferred to PC$"

Starter_NotChosen::
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You did not choose the Pokemon$"
