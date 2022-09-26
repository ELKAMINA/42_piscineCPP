#include "./HumanB.hpp"
#include "./Weapon.hpp"
#include <string>
#include <iostream>
#include <iomanip>

HumanB::HumanB( void )
{
    
}

HumanB::~HumanB( void )
{

}

void    HumanB::attack( void )
{
    std::cout << this->_name << "attacks with their " << this->weaponB.getType();
}
