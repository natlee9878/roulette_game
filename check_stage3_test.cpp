#include <iostream>
#include "User.h"
#include "Thief.h"

extern bool* check_stage3(User*,bool*,bool*,int*);

int main() {
    std::string word;
    int balance = 0;
    int* burn_count = new int(0);
    bool* burning = new bool(false);
    User* player = new Thief("Shane",100000);
    bool* stage_pass[5];
	for (int i=0; i<5; i++) {
		stage_pass[i] = new bool(true);
	}

	std::cout << "Enter player balance:" << std::endl;
	std::cin >> balance;
	player->setBalance(balance);
	stage_pass[0] = check_stage3(player,stage_pass[0],burning,burn_count);
	if (*burning == 1) {
	    word = "TRUE";
	}
	else if (*burning == 0) {
	    word = "FALSE";
	}
    std::cout << "Current player balance: " << player->getBalance() << std::endl;
    std::cout << "Burning: " << word << ", Burn Count: " << *burn_count << std::endl;
	// delete
    delete player;
    delete burning;
    delete burn_count;
	for (int i=0; i<5; i++) {
		delete stage_pass[i];
	}
    return 0;
}