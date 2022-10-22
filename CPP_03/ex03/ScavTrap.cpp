#include "./ScavTrap.hpp"
#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap( void ) : ClapTrap( )
{
	std::cout << "\e[0;33mScavTrap ::Constructeur Scavtrap\e[0m" << std::endl;
	this->_name = "Par defaut";
	this->_hitpoints = 100;
	this->_Energypoints = 50;
	this->_AttackDamages = 20;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name) // Quel constructeur appeler a l'appel du constructeur fils?
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_Energypoints = 50;
	this->_AttackDamages = 20;
	std::cout << "\e[0;33m********** ScavTrap - Constructeur par param *************\e[0m" << std::endl;

	std::cout << "\e[0;33mScavTrap ::  My name is : "<< this->_name << std::endl;
	std::cout << "\e[0;33mScavTrap :: Starting with : "<< this->_Energypoints << " Energy points.\e[0m" << std::endl;
	std::cout << "\e[0;33mScavTrap :: Starting with : "<< this->_hitpoints << " Hit points.\e[0m" << std::endl;
	std::cout << "\e[0;33mScavTrap :: Starting with : "<< this->_AttackDamages << " Attack Damages.\e[0m" << std::endl;

	std::cout << " ********************************************** " << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& src) : ClapTrap(*this)
{
	std::cout << "\e[0;33mScavTrap :: Constructeur par copie\e[0m" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\e[0;33mScavTrap :: Destructeur Scavtrap\e[0m" << std::endl;
}

ScavTrap&    ScavTrap::operator=( ScavTrap const & rhs)
{
    std::cout << "\e[0;33mScavTrap :: Assignation operator called\e[0m" << std::endl;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitpoints();
	this->_Energypoints = rhs.getEnergypoints();
	this->_AttackDamages = rhs.getAttackDamages();
    return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << "\e[0;33mScavTrap :: Gate Keeper mode ON\e[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		// std::cout << "Debut : Energy points " << this->_Energypoints << std::endl;
		std::cout << "\e[0;33mScavTrap :: \e[0m" << '"' << this->_name << '"' << " attacks " << '"' << target  << '"' << " ,causing " << this->_AttackDamages << " points of damage!" << std::endl;
		this->_Energypoints --;
		std::cout << "\e[0;33mScavTrap :: Energy points : \e[0m" << this->_Energypoints << std::endl;
		std::cout << "\e[0;33mScavTrap :: Hit points : \e[0m" << this->_hitpoints << std::endl;
		std::cout << "\e[0;33mScavTrap :: Fin : Energy points = \e[0m" << this->_Energypoints << std::endl;
	}
	else
		std::cout << "\e[0;33mScavTrap :: Youu deaaad man!\e[0m" << std::endl;
}