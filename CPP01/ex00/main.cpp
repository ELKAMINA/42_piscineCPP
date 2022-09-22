#include <iostream>
#include <string.h>
#include "./Zombie.hpp"
#include "Zombie.h"

int main()
{
    Zombie* monster;
    monster = newZombie("Kikouuuuu");
    monster->announce();
    delete monster;
    randomChump("Totoooo");
}