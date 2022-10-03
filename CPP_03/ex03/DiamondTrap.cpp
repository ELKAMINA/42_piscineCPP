#include "./DiamondTrap.hpp"
#include "./ScavTrap.hpp"
#include "./DiamondTrap.hpp"
#include "./ClapTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>

DiamondTrap::DiamondTrap( void ) : 
{
	std::cout << " ********** DiamondTrap :: Constructeur par defaut ************* " << std::endl;
	std::cout << "DiamondTrap :: My name is : "<< this->_name << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< this->_Energypoints << " Energy points." << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< this->_hitpoints << " Hit points." << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< this->_AttackDamages << " Attack Damages." << std::endl;

	std::cout << " ********************************************** " << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : _name(name), _hitpoints(10), _Energypoints(10), _AttackDamages(0)
{
	std::cout << " ********** DiamondTrap :: Constructeur par param ************* " << std::endl;
	std::cout << "DiamondTrap :: My name is : "<< this->_name << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< this->_Energypoints << " Energy points." << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< this->_hitpoints << " Hit points." << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< this->_AttackDamages << " Attack Damages." << std::endl;
	
	std::cout << " ********************************************** " << std::endl;
}
/* Diff entre operateur d'assignation et constructeur de copie : https://fr.gadget-info.com/difference-between-copy-constructor#:~:text=Le%20constructeur%20de%20copie%20initialise,autre%20objet%20qui%20existe%20d%C3%A9j%C3%A0.&text=(1)%20Le%20constructeur%20de%20copie,initialis%C3%A9%20avec%20un%20objet%20existant. */

DiamondTrap::DiamondTrap( const DiamondTrap& src) : ClapTrap()
{
	std::cout << " ********** DiamondTrap :: Constructeur par recopie ************* " << std::endl;

	this->_name = src._name;
	*this = src;
	std::cout << "DiamondTrap :: My name is : "<< this->_name << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< src._Energypoints << " Energy points." << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< src._hitpoints << " Hit points." << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< src._AttackDamages << " Attack Damages." << std::endl;

	std::cout << " ********************************************** " << std::endl;

}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << " ``````````````` DiamondTrap :: Destructeur par defaut ``````````````` " << std::endl;
}

DiamondTrap&    DiamondTrap::operator=( DiamondTrap const & rhs)
{
    std::cout << "DiamondTrap :: Assignation operator." << std::endl;
    this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_Energypoints = rhs._Energypoints;
	this->_AttackDamages = rhs._AttackDamages;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		// std::cout << "Debut : Energy points " << this->_Energypoints << std::endl;
		std::cout << "DiamondTrap " << '"' << this->_name << '"' << " attacks " << '"' << target  << '"' << " ,causing " << this->_AttackDamages << " points of damage!" << std::endl;
		this->_Energypoints --;
		std::cout << "DiamondTrap :: Energy points : " << this->_Energypoints << std::endl;
		std::cout << "DiamondTrap :: Hit points : " << this->_hitpoints << std::endl;
		// std::cout << "Fin : Energy points" << this->_Energypoints << std::endl;
	}
	else
		std::cout << "DiamondTrap :: Maaan ! You can't breathe ... You need to be repaired..." << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		this->_Energypoints --;
		if (this->_hitpoints + amount < this->_hitpoints)
			this->_hitpoints = UINT32_MAX;
		else		
			this->_hitpoints += amount;
		std::cout << "DiamondTrap :: Let's get some reparation" << std::endl;
		std::cout << "DiamondTrap :: Now we have : " << this->_Energypoints << " Energy points. " << std::endl;
		std::cout << "DiamondTrap :: Now we have : " << this->_hitpoints << " Hit points. " << std::endl;
	}
	else
		std::cout << "DiamondTrap :: Maaan ! You can't breathe ... You Deaaad Bro'..." << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints < amount)
		this->_hitpoints = 0;
	else		
		this->_hitpoints -= amount;
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		std::cout << "DiamondTrap :: Oupsie " << this->_name << " received " << amount << " blows wounds. " << this->_hitpoints << " round(s) left " << std::endl;
	}
	else
		std::cout << "DiamondTrap :: Maaan ! You can't breathe ... You Deaaad Bro' ..." << std::endl;	
}