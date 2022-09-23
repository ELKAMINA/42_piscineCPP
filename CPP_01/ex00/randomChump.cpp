#include <iostream>
#include <string.h>
#include "./Zombie.hpp"

void    randomChump( std::string name)
{
    Zombie monster;
    monster.setname(name);
    monster.announce();
}