#include <iostream>
#include "Detective.h"

// Test for Detective methods
int main() {
    int count = 0;
    User* detectives[5];

    detectives[0] = new Detective("Tom", 100000);
    detectives[1] = new Detective("Jane", 0);
    detectives[2] = new Detective("Frank", 5000);
    detectives[3] = new Detective("Nancy", -1);
    detectives[4] = new Detective("Gale", 400000);
    while (count < 3) {
        count++;
        for (int num=0; num<5; num++) {
            std::cout << "\nTest" << num+1 << std::endl;
            std::cout << "Detective " << num+1 << ": Name: " << detectives[num]->getName() << " Balance: $" << detectives[num]->getBalance() << std::endl;
            detectives[num]->special(detectives[num]);
            std::cout << "Detective " << num+1 << ": Name: " << detectives[num]->getName() << " Balance: $" << detectives[num]->getBalance() << std::endl;
        }
    }
    for (int i=0; i<5; i++) {
        delete detectives[i];
    }
    return 0;
}