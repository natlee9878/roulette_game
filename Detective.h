#ifndef DETECTIVE_H
#define DETECTIVE_H
#include <iostream>
#include <string>
#include "User.h"

// class definition for a detective
class Detective : public User {

public:
   	Detective(std::string name, int balance);

	int counter;

	void special(User *detective);

	~Detective();
};
#endif