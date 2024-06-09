#include <iostream>
#include <string>
#include "User.h"
#include "Thief.h"
#include "Detective.h"

//extern double action(User*);
//extern void check_action(User*,User*,double,int);
//extern int check_balance(User*);
//extern bool return_to_menu(std::string);
extern bool PVP(User** users);
//extern std::string* select_name(std::string*, std::string);

int main() {
	//std::string* usernames = {"Hello", "World"};
//	usernames = select_name(usernames, "Multiplayer");
	User *user1= new Thief("Tom", 480000);
	User *user2=new Detective("Jerry",300000);
	User* users[2] = {user1, user2};
	std::cout <<PVP(users);
}