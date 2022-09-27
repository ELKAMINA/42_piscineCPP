#include "./HumanA.hpp"
#include "./Weapon.hpp"
#include <cstring>
#include <iostream>

HumanA::HumanA(std::string human_name, Weapon& WeaponA) : _name(human_name), _arme(WeaponA)
{

}

HumanA::~HumanA( void )
{

}

void    HumanA::attack( void )
{ 
    std::cout << this->_name << " attacks with their " << this->_arme.getType() << std::endl;
}

Weapon& HumanA::getWeapon( void ) const
{
	return (this->_arme);
}