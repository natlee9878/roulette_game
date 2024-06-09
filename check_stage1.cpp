#include <iostream>
#include "User.h"

bool* check_stage1(User* player, bool* stage1) {
    // Function to check if goal of stage 1 has been achieved. If goal is achieved, function will run stage 1 challenges and return true.
    int input;

    if (player->getBalance()>=150000 && player->getBalance()<300000 && (*stage1==true)) {
    	*stage1=false;
    	std::cout<<"~~~~~~~150,000$ MARK~~~~~~~`"<<std::endl;
    	std::cout<<"Congratulations, you have reached the 150,000$ mark!"<<std::endl;
    	std::cout<<"Pick from one of the following 2 boxes.."<<std::endl;
    	std::cout<<"The boxes could contain something good.. or bad..."<<std::endl;
    	std::cout<<"Enter 1 for box 1 or 2 for box 2: ";
    		while(!(std::cin>>input) || input<1|| input>2) {
    			std::cout<<"Invalid, please pick box 1 or 2: \n";
    			std::cin.clear();
    			std::cin.ignore(5,'\n');
    		}
    		if (input==1) {
    			player->addBalance(50000);
    			std::cout<<"You won 50,000$!\n"<<std::endl;
    		}
    		if (input==2) {
    			std::cout<<"Unfortunately you won nothing..\n"<<std::endl;
    		}
    }

    return stage1;
}