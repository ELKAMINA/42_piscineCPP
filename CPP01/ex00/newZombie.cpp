#include <iostream>
#include <string.h>
#include "./Zombie.hpp"

Zombie* newZombie(std:: string name)
{
    Zombie* monster = new Zombie();

    monster->setname(name);
    return monster;
}