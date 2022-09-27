#include "./HumanA.hpp"
#include "./Weapon.hpp"
#include <cstring>
#include <iostream>

/* Constructeur est une méthode */
Weapon::Weapon ( void )
{
    
}

Weapon::Weapon ( std::string weapon_type ) : _type(weapon_type)
{
    
}

Weapon::~Weapon ( void )
{

}

const std::string&    Weapon::getType()
{
    return (this->_type);
}

void    Weapon::setType(std::string weapon_type)
{
    this->_type = weapon_type;
}