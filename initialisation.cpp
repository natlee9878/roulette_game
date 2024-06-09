#include <iostream>
#include <string>

extern double check_input(double);

int initialisation() {
    // Function that prints out welcome message and returns user's choice
    double menu_select = 0.0;

    std::cout << "Welcome to Golden Casino!" << std::endl;
    std::cout << "MAIN MENU:" << std::endl;
    std::cout << "1. Multiplayer Mode" << std::endl;
    std::cout << "2. Story Mode" << std::endl;
    std::cout << "3. Exit Casino" << std::endl;
    std::cout << "Please select an option." << std::endl;
    std::cout << "Enter 1, 2, or 3: " << std::endl;
    std::cin >> menu_select;
    menu_select = check_input(menu_select);
    return menu_select;
}