#ifndef THIEF_H
#define THIEF_H
#include <iostream>
#include <string>
#include "User.h"


// class definition for a thief
class Thief : public User {

public:
   	Thief(std::string name, int balance);

	void special(User *opponent);

	~Thief();

};
#endif