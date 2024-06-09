#include <iostream>
#include "User.h"

extern double player_bet(User*);
extern double player_guess();
extern void check_result(User*,double,double,int,int);

void gamble (User* player) {
	// Function that takes a player's bet and betting amount and updates player's balance
	int multiplier, result;
	double color, amount;

	std::cout << "Current balance: " << "$" << player->getBalance() << std::endl;
	amount = player_bet(player);
	player->minusBalance(amount);
	std::cout << "Current balance: " << "$" << player->getBalance() << std::endl;
	color = player_guess();
	if (color == 1 || color == 2) {
		multiplier = 2;
	}
	else {
		multiplier = 16;
	}
	result=player->roulette();
	check_result(player, color, result, multiplier, amount);
	std::cout << "Current balance: " << "$" << player->getBalance() << "\n" << std::endl;
}