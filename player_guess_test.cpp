#include <iostream>

extern double player_guess();

// Test for player_guess function
int main() {
    double guess = 0.0;

    guess = player_guess();
    if (guess == 1.0) {
        std::cout << "Red" << std::endl;
    }
    else if (guess == 2.0) {
        std::cout << "Black" << std::endl;
    }
    else if (guess == 3.0) {
        std::cout << "Green" << std::endl;
    }

    return 0;
}
