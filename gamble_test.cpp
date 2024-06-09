#include <iostream>
#include "User.h"
#include "Thief.h"

extern void gamble(User*);

int main() {
    User* thief= new Thief("Sherlock", 130000);
    gamble(thief);
    return 0;
}