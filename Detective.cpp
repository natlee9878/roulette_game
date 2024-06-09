#include <iostream>
#include <string>
#include "User.h"
#include "Detective.h"

// implementation of Detective constructor with name and balance
Detective::Detective(std::string name, int balance):User(name,balance) {
	counter = 0;
}

// implementation special() function
void Detective::special(User *detective) {
	counter+=1;
	if (counter==3) {
		addBalance(200000);
		std::cout<<"You earned $200,000!"<<std::endl;
		counter=0;
	}
	else {
		std::cout<<"You have to investigate for another "<<3-counter<<"  rounds."<<std::endl;
	}
}

// implementation of Detective destructor
Detective::~Detective() {
	counter = 0;
}