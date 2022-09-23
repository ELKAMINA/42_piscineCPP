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
    return monster;
}