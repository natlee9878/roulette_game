#include <iostream>
#include "User.h"
#include "Thief.h"

extern void check_burning(User*, bool*, int*);

int main() {
    int input_burning = 0;
    int input_burn_count = 0;
    bool* burning = new bool(false);
    int* burn_count = new int(0);
    User* player = new Thief("Tom", 100000);

    std::cout << "Is the player burning? Enter 1 for Yes and 0 for No:" << std::endl;
    std::cin >> input_burning;
    if (input_burning == 1) {
        *burning = true;
        std::cout << "How many burns left? Enter 0-10:" << std::endl;
        std::cin >> input_burn_count;
        *burn_count = input_burn_count;
    }
    else if (input_burning == 0) {
        *burning = false;
    }
    check_burning(player,burning,burn_count);
    // delete
    delete burning;
    delete burn_count;
    return 0;
}