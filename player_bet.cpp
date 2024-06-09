#include <iostream>
#include <limits>
#include <cmath>
#include "User.h"

double player_bet(User* player) {
	// Function that reads in a player's bet amount and returns it
	double amount;
	bool input_fail = false;

    std::cout << "Enter the amount you'd like to bet: ";
    std::cin >> amount;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Invalid input, enter a whole number: ";
        std::cin >> amount;
    }
    while (amount <= 0 || amount > (player->getBalance())) {
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Invalid input, enter a whole number: ";
        std::cin >> amount;
    }
    if (floor(amount) == ceil(amount)) {
        input_fail = false;
    }
    else {
        input_fail = true;
    }
    while (input_fail == true) {
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Invalid input, enter a whole number: ";
        std::cin >> amount;
        if (floor(amount) == ceil(amount)) {
            input_fail = false;
        }
        else {
            input_fail = true;
        }
        while (amount <= 0 || amount > (player->getBalance())) {
    		std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout<<"Invalid input, enter a whole number: ";
            std::cin >> amount;
        }
    }
    return amount;
}
