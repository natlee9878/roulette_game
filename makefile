all: project

project:
	g++ main.cpp User.cpp Thief.cpp Detective.cpp initialise_multiplayer.cpp initialisation.cpp select_role.cpp select_name.cpp PVP.cpp action.cpp check_action.cpp gamble.cpp player_bet.cpp player_guess.cpp check_input.cpp check_result.cpp check_balance.cpp return_to_menu.cpp check_input_menu.cpp initialise_story.cpp story_check_result.cpp check_burning.cpp check_stage1.cpp check_stage2.cpp check_stage3.cpp check_stage4.cpp check_stage5.cpp story.cpp jump_stage.cpp -o project
	./project

check_input_test:
	g++ check_input_test.cpp check_input.cpp -o check_input_test
	./check_input_test < check_input_testInput05.txt | diff - check_input_testExpectedOutput05.txt
	bash check_input_testadder

select_role_test:
	g++ select_role_test.cpp select_role.cpp check_input.cpp -o select_role_test
	./select_role_test < select_role_testInput01.txt | diff - select_role_testExpectedOutput01.txt
	bash select_role_testadder

Detective_test:
	g++ Detective_test.cpp Detective.cpp User.cpp -o Detective_test
	./Detective_test | diff - Detective_testExpectedOutput.txt
	
Thief_test:
	g++ Thief_test.cpp Thief.cpp User.cpp -o Thief_test
	./Thief_test | diff - Thief_testExpectedOutput.txt

player_guess_test:
	g++ player_guess_test.cpp player_guess.cpp check_input.cpp -o player_guess_test
	./player_guess_test < player_guess_testInput01.txt | diff - player_guess_testExpectedOutput01.txt
	bash player_guess_testadder

player_bet_test:
	g++ player_bet_test.cpp player_bet.cpp User.cpp Thief.cpp -o player_bet_test
	./player_bet_test < player_bet_testInput01.txt | diff - player_bet_testExpectedOutput01.txt
	bash player_bet_testadder
	
jump_stage_test:
	g++ jump_stage_test.cpp jump_stage.cpp -o jump_stage_test
	./jump_stage_test < jump_stage_testInput01.txt | diff - jump_stage_testExpectedOutput01.txt
	bash jump_stage_testadder
	
story_check_result_test:
	g++ story_check_result_test.cpp story_check_result.cpp User.cpp Thief.cpp -o story_check_result_test
	./story_check_result_test < story_check_result_testInput01.txt | diff - story_check_result_testExpectedOutput01.txt
	bash story_check_result_testadder

check_burning_test:
	g++ check_burning_test.cpp check_burning.cpp User.cpp Thief.cpp -o check_burning_test
	./check_burning_test < check_burning_testInput01.txt | diff - check_burning_testExpectedOutput01.txt
	bash check_burning_testadder
	
check_stage1_test:
	g++ check_stage1_test.cpp check_stage1.cpp User.cpp Thief.cpp -o check_stage1_test
	./check_stage1_test < check_stage1_testInput01.txt | diff - check_stage1_testExpectedOutput01.txt
	bash check_stage1_testadder

check_stage2_test:
	g++ check_stage2_test.cpp check_stage2.cpp User.cpp Thief.cpp -o check_stage2_test
	./check_stage2_test < check_stage2_testInput01.txt | diff - check_stage2_testExpectedOutput01.txt
	bash check_stage2_testadder

check_stage3_test:
	g++ check_stage3_test.cpp check_stage3.cpp User.cpp Thief.cpp -o check_stage3_test
	./check_stage3_test < check_stage3_testInput01.txt | diff - check_stage3_testExpectedOutput01.txt
	bash check_stage3_testadder

check_stage4_test:
	g++ check_stage4_test.cpp check_stage4.cpp User.cpp Thief.cpp -o check_stage4_test
	./check_stage4_test < check_stage4_testInput01.txt | diff - check_stage4_testExpectedOutput01.txt
	bash check_stage4_testadder

check_stage5_test:
	g++ check_stage5_test.cpp check_stage5.cpp User.cpp Thief.cpp -o check_stage5_test
	./check_stage5_test < check_stage5_testInput01.txt | diff - check_stage5_testExpectedOutput01.txt
	bash check_stage5_testadder
	
PVP_test:
	g++ User.cpp Thief.cpp Detective.cpp PVP_test.cpp PVP.cpp check_action.cpp check_balance.cpp return_to_menu.cpp action.cpp check_input.cpp check_input_menu.cpp gamble.cpp player_bet.cpp player_guess.cpp check_result.cpp -o PVP_test
	./PVP_test < PVP_testInput01.txt | diff - PVP_testExpectedOutput01.txt
	bash PVP_test_testadder

all_test:
	make check_input_test select_role_test Detective_test Thief_test player_guess_test player_bet_test jump_stage_test story_check_result_test check_burning_test check_stage1_test check_stage2_test check_stage3_test check_stage4_test check_stage5_test PVP_test
	