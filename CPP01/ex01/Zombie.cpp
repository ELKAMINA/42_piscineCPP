#include <iostream>
#include <string.h>
#include "./Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << ": diiiieed" << std::endl;
}

std::string Zombie::getname(void) const
{
    return this->_name;
}

void Zombie::setname(std::string smiya)
{
    this->_name = smiya;
}

void Zombie::setindex(int index)
{
    this->index = index;
}

int Zombie::getindex( void )
{
    return this->index;
}
