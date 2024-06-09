#include <iostream>
#include <string>

extern double check_input_menu(double);

bool return_to_menu(std::string mode) {
    // Function that takes in input whether to return to main menu and returns true if player wants to return to the main menu
    double stay = 1.0;
    bool result = true;

    std::cout << "Do you wish to continue? Enter 1.Yes or 2.No: " << std::endl;
    std::cin >> stay;
    stay=check_input_menu(stay);

    if (stay == 2.0)
    {
        std::cout << "Exiting " << mode << " Mode..." << std::endl;
        std::cout << "Returning to Main Menu...\n" << std::endl;
        result = false;
    }
    if (stay == 1.0)
    {
        result = true;
    }
    return result;
}