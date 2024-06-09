#include <iostream>
#include "User.h"

bool* check_stage4(User* player, bool* stage4, bool* burning, int* burn_count) {
	// Function to check if goal of stage 4 has been achieved. If goal is achieved, function will run stage 4 challenges and return true.
    int input;
	if (player->getBalance()>=700000 && player->getBalance()<1000000 && (*stage4==true)) {
		*stage4=false;
		std::cout<<"~~~~~~~700,000$ MARK~~~~~~~`"<<std::endl;
		std::cout<<"You are almost there..."<<std::endl;
		std::cout<<"This is a final and most critical stage.."<<std::endl;
		std::cout<<"There are 3 boxes, 1 of them will result in an instant game over. Another will cause you some trouble.."<<std::endl;
		std::cout<<"The last one of these 3 boxes will allow you to proceed without losses and you will be one step closer to your goal.."<<std::endl;
		std::cout<<"May the odds be in your favour.."<<std::endl;
    	std::cout<<"Enter 1 for box 1, 2 for box 2 or 3 for box 3: ";
		while(!(std::cin>>input) || input<1|| input>3) {
			std::cout<<"Invalid, please pick either box 1, 2 or 3: \n";
			std::cin.clear();
			std::cin.ignore(5,'\n');
			}
			if (input==1) {
				std::cout<<"You are under the suspicion of security...You need to be extra cautious!!!"<<std::endl;
				std::cout<<"To shake them off, you will gradually lose money for 5 rounds..\n"<<std::endl;
				*burning= true;
				*burn_count += 5;
			}
			if (input==2) {
				std::cout<<"You got lucky... proceed...\n"<<std::endl;
			}
			if (input==3) {
			    player->setBalance(0);
			    std::cout<<"What are the odds.. You got caught by security."<<std::endl;
			    std::cout<<"You have lost all your money..\n"<<std::endl;
	    	}
	}

    return stage4;
}