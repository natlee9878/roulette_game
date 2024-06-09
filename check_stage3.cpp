#include <iostream>
#include "User.h"

bool* check_stage3(User* player, bool* stage3, bool* burning, int* burn_count) {
	// Function to check if goal of stage 3 has been achieved. If goal is achieved, function will run stage 3 challenges and return true.
    int input;

	if (player->getBalance()>=500000 && player->getBalance()<700000 && (*stage3==true)) {
		*stage3=false;
		std::cout<<"~~~~~~~500,000$ MARK~~~~~~~`"<<std::endl;
		std::cout<<"You have reached the mid-point of becoming a millionaire.."<<std::endl;
		std::cout<<"You are faced with a very important decision.."<<std::endl;
		std::cout<<"On this stage.. there are 3 boxes, 2 of them will contain disadvantages.."<<std::endl;
		std::cout<<"The last one of these 3 boxes will allow you to proceed without losses.."<<std::endl;
		std::cout<<"Make a wise choice... Detective.."<<std::endl;
    	std::cout<<"Enter 1 for box 1, 2 for box 2 or 3 for box 3: ";
		while(!(std::cin>>input) || input<1|| input>3) {
			std::cout<<"Invalid, please pick either box 1, 2 or 3: \n";
			std::cin.clear();
			std::cin.ignore(5,'\n');
			}
			if (input==1) {
				std::cout<<"You got lucky... proceed...\n"<<std::endl;
			}
			if (input==2) {
				player->minusBalance((player->getBalance())/2);
				std::cout<<"You fell for a swindler's scam big time! You lost half of your current balance.."<<std::endl;
				std::cout<<"Good luck on your journey ahead...\n"<<std::endl;
			}
			if (input==3) {
				std::cout<<"You are under the suspicion of security...You need to be extra cautious!!! "<<std::endl;
				std::cout<<"To shake them off, you will gradually lose money for 5 rounds..\n"<<std::endl;
				*burning= true;
				*burn_count += 5;
			}
	}

    return stage3;
}