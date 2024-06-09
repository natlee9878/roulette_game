#include <iostream>

extern double check_input(double);

// Test for check_input function
int main() {
    double input;

    std::cout << "Enter an input: " << std::endl;
    std::cin >> input;
    input = check_input(input);
    std::cout << input << std::endl;
    return 0;
}