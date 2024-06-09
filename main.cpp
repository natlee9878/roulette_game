#include <iostream>
#include <string>
#include "User.h"
#include "Detective.h"
#include "Thief.h"

extern int initialisation();
extern void initialise_multiplayer();
extern double* select_role(double*);
extern std::string* select_name(std::string*, std::string);
extern bool PVP(User**);
extern void initialise_story();
extern bool story(User*);

int main() {
	int menu_select;
	bool resume_mode;
	std::string* usernames = new std::string[3]();
	User* users[3];

	// Game Loop
	while (resume_mode == false) {
		menu_select = initialisation();
		if (menu_select == 1) {
			double* roles = new double[2]();
			std::cout << "You have selected Multiplayer Mode." << std::endl;
			initialise_multiplayer();
			roles = select_role(roles);
			usernames = select_name(usernames, "Multiplayer");
	        if (roles[0] == 1.0) {
	            std::cout << "\nPlayer 1: " << usernames[0] <<" has selected the Thief role." << std::endl;
	            users[0] = new Thief(usernames[0],150000);
	        }
	        else if (roles[0] == 2.0) {
	            std::cout << "\nPlayer 1: " << usernames[0] <<" has selected the Detective role." << std::endl;
	            users[0] = new Detective(usernames[0],150000);
	        }

	        if (roles[1] == 1.0) {
	            std::cout << "Player 2: " << usernames[1] <<" has selected the Thief role.\n" << std::endl;
	            users[1] = new Thief(usernames[1],150000);
	        }
	        else if (roles[1] == 2.0) {
	            std::cout << "Player 2: " << usernames[1] <<" has selected the Detective role.\n" << std::endl;
	            users[1] = new Detective(usernames[1],150000);
	        }
	        resume_mode = PVP(users);
	        if (resume_mode == false) {
	        	delete[] roles;
	        	continue;
	        }
		}
		else if (menu_select == 2) {
			std::cout << "You have selected Story Mode." << std::endl;
			initialise_story();
			usernames = select_name(usernames, "Story");
			users[2] = new Detective(usernames[2],100000);
			resume_mode = story(users[2]);
			if (resume_mode == false) {
	        	continue;
	        }
		}
		else if (menu_select == 3) {
			std::cout << "You have selected Exit. Thank you for coming to Golden Casino. See you again!" << std::endl;
			std::cout << "Exiting casino...." << std::endl;
			break;
		}
	}

	// delete
	delete[] usernames;
	for (int i=0; i<3; i++) {
		delete users[i];
	}
	return 0;
}
