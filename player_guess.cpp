#include <iostream>

extern double check_input(double);

double player_guess() {
	// Function that reads in a player's guess and returns it
	double color;

    std::cout << "Choices: 1.Red(X2), 2.Black(X2), 3.Green(X17)" << std::endl;
	std::cout << "Enter a color number: ";
	std::cin >> color;
    color = check_input(color);
	return color;
}