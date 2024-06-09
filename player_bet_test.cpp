#include <iostream>
#include <limits>
#include "User.h"
#include "Thief.h"
#include "Detective.h"

extern double player_bet(User*);

// Test for player_bet function
int main() {
    double bet_amount = 0.0;

    User* thief = new Thief("Sherlock", 130000);
    std::cout << thief->getName() << "'s Current Balance: " << thief->getBalance() << std::endl;
    bet_amount = player_bet(thief);
    std::cout << "\n";
    std::cout << thief->getName() << "'s Bet: " << bet_amount << std::endl;

    return 0;
}