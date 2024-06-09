#include <iostream>
#include <string>

std::string* select_name(std::string* usernames, std::string mode) {
    // Function that takes in players name for Multiplayer Mode and Story Mode
    if (mode == "Multiplayer") {
        for (int i=0; i<2; i++) {
            std::cout << "\nPlayer " << i+1 << ": Please enter your name: " << std::endl;
            std::cin >> usernames[i];
        }
    }
    if (mode == "Story") {
        std::cout << "\nPlease enter your name: " << std::endl;
        std::cin >> usernames[2];
    }
    return usernames;
}