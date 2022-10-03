#include "./FragTrap.hpp"
#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap( void ) : ClapTrap( ) 
{
	std::cout << "FragTrap ::Constructeur par defaut FragTrap " << std::endl;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name) // Quel constructeur appeler a l'appel du constructeur fils?
{
	this->_name = name;
	this->_Energypoints = 100;
	this->_hitpoints = 100;
	this->_AttackDamages = 30;
	std::cout << " ********** FragTrap - Constructeur par param ************* " << std::endl;

	std::cout << "FragTrap ::  My name is : "<< this->_name << std::endl;
	std::cout << "FragTrap :: Starting with : "<< this->_Energypoints << " Energy points." << std::endl;
	std::cout << "FragTrap :: Starting with : "<< this->_hitpoints << " Hit points." << std::endl;
	std::cout << "FragTrap :: Starting with : "<< this->_AttackDamages << " Attack Damages." << std::endl;

	std::cout << " ********************************************** " << std::endl;
}

FragTrap::FragTrap( const FragTrap& src) : ClapTrap(*this)
{
	std::cout << "FragTrap :: Constructeur par copie " << std::endl;
	*this = src;
}

FragTrap::~FragTrap( void )
{
	std::cout << "=======> FragTrap :: Destructeur FragTrap <======" << std::endl;
}

FragTrap&    FragTrap::operator=( FragTrap const & rhs)
{
    std::cout << "FragTrap :: Assignation operator called" << std::endl;
    return *this;
}

void	FragTrap :: highFivesGuys()
{
	std::cout << "FragTrap :: High Fives Guuuyyys" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		// std::cout << "Debut : Energy points " << this->_Energypoints << std::endl;
		std::cout << "FragTrap :: " << '"' << this->_name << '"' << " attacks " << '"' << target  << '"' << " ,causing " << this->_AttackDamages << " points of damage!" << std::endl;
		this->_Energypoints --;
		std::cout << "FragTrap :: Energy points : " << this->_Energypoints << std::endl;
		std::cout << "FragTrap :: Hit points : " << this->_hitpoints << std::endl;
		std::cout << "FragTrap :: Fin : Energy points = " << this->_Energypoints << std::endl;
	}
	else
		std::cout << "FragTrap :: Youu deaaad man!" << std::endl;
}
