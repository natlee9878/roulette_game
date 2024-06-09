#include <iostream>
#include "User.h"

bool* check_stage5(User* player, bool* stage5) {
    // Function to check if goal of stage 5 has been achieved. If goal is achieved, function will return true.
    if (player->getBalance()>=1000000) {
        *stage5=false;
        std::cout<<"~~~~~~~1,000,000$ MARK~~~~~~~`"<<std::endl;
    	std::cout<<"Congratulations, you have reached the 1,000,000$ mark!"<<std::endl;
    	std::cout<<"You are now a Golden Casino VIP.."<<std::endl;
    	std::cout<<"....."<<std::endl;
    	std::cout<<"After joining the VIP ranks, with the help of the whistleblower you managed to collect concrete evidence against some VIPs with regards to your case."<<std::endl;
    	std::cout<<"Finally, justice is served."<<std::endl;
    	std::cout<<"-- CASE CLOSED --"<<std::endl;
    }
    return stage5;
}