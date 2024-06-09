#include <iostream>
#include "User.h"

bool story_check_result(User* player) {
    // Function that checks if player lost story mode and returns false if player lost
    bool result = true;

    if (player->getBalance() <= 0) {
			std::cout << "Unfortunately.. you have lost everything.. try again next time" << std::endl;
			std::cout << "G A M E    O V E R" << std::endl;
			return false;
		}
    return result;
}