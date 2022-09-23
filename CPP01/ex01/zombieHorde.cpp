#include <iostream>
#include <string.h>
#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* monster = new Zombie[N];
    Zombie& mons = monster[0];
    for (int i = 0; i < N; i++)
    {
        monster[i].setname(name);
        monster[i].setindex(i);
    }
    return &mons;
}