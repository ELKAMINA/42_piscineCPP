#include <iostream>
#include <string.h>
#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* monster = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        monster[i].setname(name);
        monster[i].setindex(i);
    }
    Zombie& mons = monster[10];
    // std::cout << "premier élement" << monster[0].getname() << std::endl;
    // Zombie& mons = 
    // std::cout << (*monster).getindex() << std::endl;
    std::cout << mons.getindex() << std::endl;
    return &mons;
}