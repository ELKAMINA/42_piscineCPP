#include "./HumanA.hpp"
#include "./Weapon.hpp"
#include <string>
#include <iostream>

/* Constructeur est une méthode */
Weapon::Weapon ( void )
{
    
}

Weapon::Weapon ( std::string weapon_name )
{
    
}

Weapon::~Weapon ( void )
{

}

std::string&    Weapon::getType()
{
    return this->_type;
}

void    Weapon::setType(std::string name)
{
    this->_type = name;
}