#include "./ScavTrap.hpp"
#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap( void ) : ClapTrap( ) 
{
	this->_name = "ScavTrap but Nobodyyy";
	this->_Energypoints = 10;
	this->_hitpoints = 10;
	this->_AttackDamages = 0;
	std::cout << " ********** ScavTrap - Constructeur par défaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << "ScavTrap ::  My name is : "<< this->_name << std::endl;
	std::cout << "ScavTrap :: Starting with : "<< this->_Energypoints << " Energy points." << std::endl;
	std::cout << "ScavTrap :: Starting with : "<< this->_hitpoints << " Hit points." << std::endl;
	std::cout << "ScavTrap :: Starting with : "<< this->_AttackDamages << " Attack Damages." << std::endl;
	std::cout << std::endl;
	std::cout << " ********************************************** " << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name) // Quel constructeur appeler a l'appel du constructeur fils?
{
	this->_name = name;
	this->_Energypoints = 50;
	this->_hitpoints = 100;
	this->_AttackDamages = 20;
	std::cout << " ********** ScavTrap - Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << "ScavTrap ::  My name is : "<< this->_name << std::endl;
	std::cout << "ScavTrap :: Starting with : "<< this->_Energypoints << " Energy points." << std::endl;
	std::cout << "ScavTrap :: Starting with : "<< this->_hitpoints << " Hit points." << std::endl;
	std::cout << "ScavTrap :: Starting with : "<< this->_AttackDamages << " Attack Damages." << std::endl;
	std::cout << std::endl;
	std::cout << " ********************************************** " << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& src) : ClapTrap(*this)
{
	std::cout << "ScavTrap :: Constructeur par copie " << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "======> ScavTrap :: Destructeur ScavTrap <======" << std::endl;
}

ScavTrap&    ScavTrap::operator=( ScavTrap const & rhs)
{
    std::cout << "ScavTrap :: Assignation operator called" << std::endl;
    return *this;
}

void	ScavTrap :: guardGate()
{
	std::cout << "ScavTrap :: Gate Keeper mode ON" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		// std::cout << "Debut : Energy points " << this->_Energypoints << std::endl;
		std::cout << "ScavTrap :: " << '"' << this->_name << '"' << " attacks " << '"' << target  << '"' << " ,causing " << this->_AttackDamages << " points of damage!" << std::endl;
		this->_Energypoints --;
		std::cout << "ScavTrap :: Energy points : " << this->_Energypoints << std::endl;
		std::cout << "ScavTrap :: Hit points : " << this->_hitpoints << std::endl;
		std::cout << "ScavTrap :: Fin : Energy points = " << this->_Energypoints << std::endl;
	}
	else
		std::cout << "ScavTrap :: Youu deaaad man!" << std::endl;
}