#include <iostream>
#include "User.h"

bool* check_stage2(User* player, bool* stage2) {
	// Function to check if goal of stage 2 has been achieved. If goal is achieved, function will run stage 2 challenges and return true.
    int input;

    if (player->getBalance()>=300000 && player->getBalance()<500000 && (*stage2==true)) {
		*stage2=false;
		std::cout<<"~~~~~~~300,000$ MARK~~~~~~~`"<<std::endl;
		std::cout<<"Congratulations, you have reached the 300,000$ mark!"<<std::endl;
		std::cout<<"Pick from one of the following 3 boxes..."<<std::endl;
    	std::cout<<"Enter 1 for box 1, 2 for box 2 or 3 for box 3: ";
		while(!(std::cin>>input) || input<1|| input>3) {
    		std::cout<<"Invalid, please pick either box 1, 2 or 3: \n";
    		std::cin.clear();
    		std::cin.ignore(5,'\n');
    		}
    		if (input==1) {
    			player->addBalance(75000);
    			std::cout<<"You won 75,000$!\n"<<std::endl;
    		}
    		if (input==2) {
    			player->minusBalance(20000);
    			std::cout<<"You lost 20,000$...\n"<<std::endl;
    		}
    		if (input==3) {
    			std::cout<<"Unfortunately you won nothing...\n"<<std::endl;
    		}
	}
    return stage2;
}