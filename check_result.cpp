#include <iostream>
#include <string>
#include "User.h"

void check_result(User* player, double color, double result, int multiplier, int amount) {
    // Function that checks if each player wins or lose the round and prints the related messages
    std::string word;

	if (result == 1) {
		word = "Red";
	}
	else if (result == 2) {
		word = "Black";
	}
	else {
		word = "Green";
	}
    if (color == result) {
		std::cout << word << " rolled!" << std::endl;
		player->addBalance(amount*multiplier);
		std::cout << "Congratulations! You won ";
		std::cout << "$" << amount*multiplier << std::endl;
	}
	else {
		std::cout << word << " rolled.." << std::endl;
		std::cout << "Unfortunately you lost " << "$" << amount << std::endl;
	}
}