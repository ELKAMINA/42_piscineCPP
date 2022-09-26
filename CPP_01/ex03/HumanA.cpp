#include "./HumanA.hpp"
#include "./Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA( std::string namish )
{
    
}

HumanA::~HumanA( void )
{

}

void    HumanA::attack( void )
{
    std::cout << this->_name << "attacks with their " << this->weaponA.getType();
}
