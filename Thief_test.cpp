#include <iostream>
#include "Thief.h"

// Test for Thief methods
int main() {
    int count = 0;
    User* thieves[5];

    thieves[0] = new Thief("Tom", 100000);
    thieves[1] = new Thief("Jane", 0);
    thieves[2] = new Thief("Frank", 5000);
    thieves[3] = new Thief("Nancy", -1);
    thieves[4] = new Thief("Gale", 400000);
        for (int num=0; num<5; num++) {
            std::cout << "\nTest" << num+1 << std::endl;
            std::cout << "Thief " << num+1 << ": Name: " << thieves[num]->getName() << " Balance: $" << thieves[num]->getBalance() << std::endl;
            thieves[num]->special(thieves[num]);
            std::cout << "Thief " << num+1 << ": Name: " << thieves[num]->getName() << " Balance: $" << thieves[num]->getBalance() << std::endl;
        }
    for (int i=0; i<5; i++) {
        delete thieves[i];
    }
    return 0;
}