#include <iostream>
#include "User.h"

extern void gamble(User*);

void check_action(User* player, User* opponent, double player_choice, int turn) {
    // Function to checks each player's action for pass and gamble and takes the appropriate action.
	if (player_choice==1) {
		std::cout << player->getName() << " passed their turn\n"<<std::endl;
	}
	else if (player_choice==2) {
		gamble(player);
	}
	else if (player_choice==3) {
		player->special(opponent);
		std::cout << player->getName() << "'s Balance: " << "$" << player->getBalance() << "\n" << std::endl;
	}
}