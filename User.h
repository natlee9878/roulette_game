#ifndef USER_H
#define USER_H
#include <string>
#include <cstdlib>
#include <ctime>

// class definition for a user
class User {
public:

	User();

	User(std::string name, int balance);

	std::string getName();

	virtual void special(User* player)=0;

	double roulette();

	void addBalance(int amount);

	void minusBalance(int amount);

	int getBalance();

	void setBalance(int amount);

	void setName(std::string name);

	~User();

private:
	std::string name;

	int balance;
};
#endif