#include <iostream>
#include "User.h"
#include "Thief.h"

extern bool story_check_result(User*);

int main() {
    bool result = true;
    std::string word = "TRUE";
    int balance = 0;
    User* player = new Thief("Tom", 100000);
    std::cout << "Enter player balance:" << std::endl;
    std::cin >> balance;
    player->setBalance(balance);
    result = story_check_result(player);
    if (result == 1) {
        word = "TRUE";
    }
    else if (result == 0) {
        word = "FALSE";
    }
    std::cout << "Player won: " << word << std::endl;
    // delete
    delete player;
    return 0;
}