#include "./FragTrap.hpp"
#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap( void ) : ClapTrap( ) 
{
	std::cout << "\e[0;35mFragTrap ::Constructeur par defaut FragTrap \e[0m" << std::endl;
	this->_name = "FragTrap par defaut";
	this->_Energypoints = 100;
	this->_hitpoints = 100;
	this->_AttackDamages = 30;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_Energypoints = 100;
	this->_hitpoints = 100;
	this->_AttackDamages = 30;
	std::cout << "\e[0;35m ********** FragTrap - Constructeur par param ************* \e[0m" << std::endl;

	std::cout << "\e[0;35mFragTrap ::  My name is : "<< this->_name << std::endl;
	std::cout << "\e[0;35mFragTrap :: Starting with : "<< this->_Energypoints << " Energy points.\e[0m" << std::endl;
	std::cout << "\e[0;35mFragTrap :: Starting with : "<< this->_hitpoints << " Hit points.\e[0m" << std::endl;
	std::cout << "\e[0;35mFragTrap :: Starting with : "<< this->_AttackDamages << " Attack Damages.\e[0m" << std::endl;

	std::cout << "\e[0;35m ********************************************** \e[0m" << std::endl;
}

FragTrap::FragTrap( const FragTrap& src) : ClapTrap(*this)
{
	std::cout << "\e[0;35mFragTrap :: Constructeur par copie \e[0m" << std::endl;
	*this = src;
}

FragTrap::~FragTrap( void )
{
	std::cout << "\e[0;35m=======> FragTrap :: Destructeur FragTrap <======\e[0m" << std::endl;
}

FragTrap&    FragTrap::operator=( FragTrap const & rhs)
{
    std::cout << "\e[0;35mFragTrap :: Assignation operator called\e[0m" << std::endl;
	this->_name = rhs.getName();
	this->_hitpoints = rhs.getHitpoints();
	this->_Energypoints = rhs.getEnergypoints();
	this->_AttackDamages = rhs.getAttackDamages();
    return *this;
}

void	FragTrap :: highFivesGuys()
{
	std::cout << "\e[0;35mFragTrap :: High Fives Guuuyyys ???\e[0m" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		// std::cout << "Debut : Energy points " << this->_Energypoints << std::endl;
		std::cout << "\e[0;35mFragTrap :: " << '"' << this->_name << '"' << " attacks " << '"' << target  << '"' << " ,causing " << this->_AttackDamages << " points of damage!\e[0m" << std::endl;
		this->_Energypoints --;
		std::cout << "\e[0;35mFragTrap :: Energy points : \e[0m" << this->_Energypoints << std::endl;
		std::cout << "\e[0;35mFragTrap :: Hit points : \e[0m" << this->_hitpoints << std::endl;
		std::cout << "\e[0;35mFragTrap :: Fin : Energy points = \e[0m" << this->_Energypoints << std::endl;
	}
	else
		std::cout << "\e[0;35mFragTrap :: Youu deaaad man!\e[0m" << std::endl;
}
