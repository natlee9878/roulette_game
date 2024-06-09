#include <iostream>
#include <string>
#include "User.h"

extern double action(User*);
extern void check_action(User*,User*,double,int);
extern int check_balance(User*);
extern bool return_to_menu(std::string);

bool PVP(User** users) {
	// Function that takes in 2 players and runs the Multiplayer Mode
	double player_choice = 0;
	bool restart = true;
	bool condition = true;
	int multiplayer_end = 0;
	int game_round = 0;

	// PVP Loop
	while (restart == true) {
		while (condition == true) {
			game_round++;
			std::cout << "---ROUND " << game_round <<"---"<<std::endl;
			std::cout << users[0][0].getName() << "'s current balance: " << "$" << users[0][0].getBalance() << std::endl;
			std::cout << users[1][0].getName() << "'s current balance: " << "$" << users[1][0].getBalance() << std::endl;
			for (int turn = 0; turn < 2; turn++) {
				player_choice = action(users[turn]);

				if (turn == 0) {
					check_action(users[turn], users[1], player_choice, turn);
				}
				else if (turn == 1) {
					check_action(users[turn], users[0], player_choice, turn);
				}
				multiplayer_end = check_balance(users[turn]);
				if (multiplayer_end == 1) {
					if (turn == 0) {
						std::cout << users[1][0].getName() << " HAS WON THE GAME!!" << std::endl;
						condition = false;
						break;
					}
					else if (turn == 1) {
						std::cout << users[0][0].getName() << " HAS WON THE GAME!!" << std::endl;
						condition = false;
						break;
					}
				}
				if (multiplayer_end == 2) {
					condition = false;
				}
				else {
					continue;
				}
			}
		}
		std::cout << "END OF ROUND " << game_round << std::endl;
		restart = return_to_menu("Multiplayer");
		//reset
		users[0][0].setBalance(150000);
		users[1][0].setBalance(150000);
	}

	return restart;
}