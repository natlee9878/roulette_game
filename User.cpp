#include <iostream>
#include <cstdlib>
#include <ctime>
#include "User.h"

// implementation of default User constructor
User::User() {
}

// implementation of User constructor with name and balance
User::User(std::string name, int balance):name(name), balance(balance) {
}

// implementation of getName() function
std::string User::getName() {
	return name;
}

// implementation of roulette() function
double User::roulette() {
		srand (time (0));
		double roll= rand()%36+0;
		if (roll>=1 && roll <=18) {
			//Red
			return 1;
		}
		else if (roll>=19 && roll<=36) {
			//Black
			return 2;
		}
		else
			//Green
			return 3;
}

// implementation of addBalance() function
void User::addBalance(int amount) {
	balance += amount;
}

// implementation of minusBalance() function
void User::minusBalance(int amount) {
	balance -= amount;
}

// implementation of getBalance() function
int User::getBalance() {
	return balance;
}

// implementation of setBalance() function
void User::setBalance(int amount) {
	balance = amount;
}

// implementation of setName() function
void User::setName(std::string name) {
	this->name = name;
}

// implementation of User destructor
User::~User() {
	name = "";
	balance = 0;
}