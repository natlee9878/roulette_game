#include <iostream>
#include <string>
#include "User.h"
#include "Thief.h"

// implementation of Thief constructor with name and balance
Thief::Thief(std::string name, int balance):User(name,balance) {
};

// implementation of special() function
void Thief::special(User *opponent) {
	opponent->minusBalance(20000);
	addBalance(20000);
	std::cout<<"You stole $20,000!"<<std::endl;
}

// implementation of Thief destructor
Thief::~Thief() {
}