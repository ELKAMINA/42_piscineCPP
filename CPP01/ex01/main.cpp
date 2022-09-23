#include <iostream>
#include <string.h>
#include "./Zombie.hpp"
#include "Zombie.h"

int main()
{
    Zombie* monster;
    // Zombie* monster = new Zombie[12];
    monster = zombieHorde(20, "heheheh");
    delete [] monster;
}