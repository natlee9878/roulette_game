#include <iostream>
#include "User.h"
#include "Thief.h"

extern bool* check_stage2(User*,bool*);

int main() {
    int balance = 0;
    User* player = new Thief("Shane",100000);
    bool* stage_pass[5];
	for (int i=0; i<5; i++) {
		stage_pass[i] = new bool(true);
	}

	std::cout << "Enter player balance:" << std::endl;
	std::cin >> balance;
	player->setBalance(balance);
	stage_pass[0] = check_stage2(player,stage_pass[0]);
	std::cout << "Current player balance: " << player->getBalance() << std::endl;
	// delete
    delete player;
	for (int i=0; i<5; i++) {
		delete stage_pass[i];
	}
    return 0;
}