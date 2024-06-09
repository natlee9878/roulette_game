#include <iostream>
#include <limits>

double check_input_menu(double input) {
    // Function that checks whether input is 1 or 2 or 3 only and returns only when the correct input is entered
    bool input_fail = false;

	while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Invalid input. Please enter 1.Yes or 2.No: ";
        std::cin >> input;
    }
    if ((input == 1.0) || (input == 2.0) ) {
        input_fail = false;
    }
    else {
        input_fail = true;
    }
	while (input_fail == true) {
        std::cout << "Invalid input. Please enter 1.Yes or 2.No: ";
        std::cin >> input;
        if ((input == 1.0) || (input == 2.0) ) {
	        input_fail = false;
    	}
    	else {
    	    input_fail = true;
    	}
	}
	return input;
}