#include <iostream>
#include <limits>

extern double check_input(double);

double* select_role(double* roles) {
    // Function that takes in players role for Multiplayer Mode
    bool input_fail = false;

    std::cout << "WELCOME TO MULTIPLAYER MODE!" << std::endl;
    for (int i=0; i<2; i++) {
        std::cout << "\nPlayer " << i+1 << ": Please select your role." << std::endl;
        std::cout << "Enter 1 for Thief, 2 for Detective, or 3 for Role Description: " << std::endl;
        std::cin >> roles[i];
        roles[i] = check_input(roles[i]);
        while (roles[i] == 3.0) {
            std::cout << "\nROLE DESCRIPTION: " << std::endl;
            std::cout << "1. THIEF: " << std::endl;
            std::cout << "You are a thief lurking around the casino looking for some quick cash." << std::endl;
            std::cout << "Special ability: You have an innate ability at stealing. Every round you can choose to pass your turn and steal $20,000 from your opponent's balance." << std::endl;
            std::cout << "2. DETECTIVE: "<< std::endl;
            std::cout << "You are a detective on a stakeout at the casino where there are many unsolved cases. In the meantime, you wouldn't mind having abit of fun on the side."<< std::endl;
            std::cout << "Special ability: In return for solving a case, you will be rewarded $200,000. Each case takes 3 rounds.\n" << std::endl;
            std::cout << "Player " << i+1 << ": Please select your role." << std::endl;
            std::cout << "Enter 1 for Thief, 2 for Detective, or 3 for Role Description: " << std::endl;
            std::cin >> roles[i];
            roles[i] = check_input(roles[i]);
        }
    }
    return roles;
}