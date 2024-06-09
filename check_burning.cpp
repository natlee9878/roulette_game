#include <iostream>
#include "User.h"

void check_burning(User* player, bool* burning, int* burn_count) {
    // Function that checks if player chose burning option and deducts player's balance every round for 5 rounds
    if (*burning==true && *burn_count>0) {
    	std::cout << "BURNING! BURNING!" << std::endl;
    	std::cout << "You have lost $20,000.." << std::endl;
    	std::cout << "Burns left: " << *burn_count << "\n" << std::endl;
    	player->minusBalance(20000);
    	*burn_count-=1;
    }
}