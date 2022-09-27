#include "./HumanB.hpp"
#include "./Weapon.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>

HumanB::HumanB( void )
{
    
}

HumanB::HumanB( std::string humanb_name) : _name(humanb_name), _arme(nullptr)
{
    
}

HumanB::~HumanB( void )
{

}

void    HumanB::setWeapon( Weapon& wepow )
{
	this->_arme = &wepow;
}

void    HumanB::attack( void )
{
	if (this->_arme != nullptr)
    	std::cout << this->_name << " attacks with their " << (this->_arme)->getType()<< std::endl;
	else
		std::cout << this->_name << " You don't have any weapon" << std::endl;
}


Weapon&	HumanB::getWeapon( void ) const
{
	return (*(this->_arme));
}