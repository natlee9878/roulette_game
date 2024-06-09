#include <iostream>
#include "User.h"

int check_balance(User* player) {
	// Function that takes a player, checks their balance and returns 1 if their bankrupt, 2 if they win, or 0 if they haven't won or lost.
    int multiplayer_end = 0;
	if (player->getBalance()<=0) {
		std::cout << player->getName() << " IS BANKRUPT" << std::endl;
		multiplayer_end = 1;
	}
	if (player->getBalance()>=500000) {
	    std::cout << player->getName() << " HAS ACHIEVED $500,000!" << std::endl;
		std::cout << player->getName() << " HAS WON THE GAME!!" << std::endl;
		multiplayer_end = 2;
	}

	return multiplayer_end;
}
