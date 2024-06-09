#include <iostream>
#include "User.h"

extern bool story_check_result(User*);
extern void check_burning(User*, bool*, int*);
extern void gamble(User*);
extern bool* check_stage1(User*, bool*);
extern bool* check_stage2(User*, bool*);
extern bool* check_stage3(User*, bool*, bool*, int*);
extern bool* check_stage4(User*, bool*, bool*, int*);
extern bool* check_stage5(User*, bool*);
extern bool return_to_menu(std::string);
extern void jump_stage(bool*[]);

bool story(User* player) {
	// Function that takes in 1 player and runs the Story Mode
	bool restart = true;
	bool condition = true;
	int count = 0;
	int* burn_count = new int(0);
	bool* stage_pass[5];
	for (int i=0; i<5; i++) {
		stage_pass[i] = new bool(true);
	}
	bool* burning = new bool(false);

	// Story Loop
	while (restart == true) {
		while (condition == true) {
			condition = story_check_result(player);
			if (condition == false) {
				break;
			}
			count+=1;
			std::cout << "----------------------------------------ROUND " << count << " ----------------------------------------" << std::endl;
			check_burning(player, burning, burn_count);
			gamble(player);
			stage_pass[4] = check_stage5(player, stage_pass[4]);
	        if (stage_pass[4][0] == false) {
	            condition = false;
	        }
	        jump_stage(stage_pass);
	        stage_pass[3] = check_stage4(player, stage_pass[3], burning, burn_count);
	        jump_stage(stage_pass);
	        stage_pass[2] = check_stage3(player, stage_pass[2], burning, burn_count);
	        jump_stage(stage_pass);
	        stage_pass[1] = check_stage2(player, stage_pass[1]);
	        jump_stage(stage_pass);
	        stage_pass[0] = check_stage1(player, stage_pass[0]);

		}
		std::cout << "YOU HAVE COMPLETED STORY MODE" << std::endl;
		restart = return_to_menu("Story");
		//reset
		player->setBalance(100000);
		condition = true;
		count = 0;
		*burn_count = 0;
		*burning = false;
		for (int stage=0; stage<5; stage++) {
			stage_pass[stage][0] = true;
		}
	}

	// delete memory
	delete burning;
	for (int i=0; i<5; i++) {
		delete stage_pass[i];
	}
	delete burn_count;

	return restart;
}
