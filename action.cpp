#include <iostream>
#include "User.h"

extern double check_input(double);

double action(User* player) {
    // Function to take in each player's action input and returns player's action
    double choice;
    bool input_fail = false;

    std::cout << "----------" << player->getName() << "'s Turn----------" << std::endl;
	std::cout << player->getName() << "'s Balance: " << "$"<< player->getBalance() << std::endl;
	std::cout << "What would you like to do " << player->getName() << " ?" << std::endl;
	std::cout << "1.Pass      2.Gamble      3.Special Ability" << std::endl;
    std::cout << "Enter 1, 2 or 3: ";
	std::cin >> choice;
	choice = check_input(choice);
    return choice;
}