#include "./ClapTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

ClapTrap::ClapTrap( void ) : _name("Miskine"), _hitpoints(10), _Energypoints(10), _AttackDamages(0)
{
	std::cout << " ********** ClapTrap : Constructeur par defaut ************* " << std::endl;
	std::cout << "ClapTrap - "<< this->_name << " " << std::endl;
	std::cout << "Starting with : "<< this->_Energypoints << " Energy points." << std::endl;
	std::cout << "Starting with : "<< this->_hitpoints << " Hit points." << std::endl;
	std::cout << "Starting with : "<< this->_AttackDamages << " Attack Damages." << std::endl;

	std::cout << " ********************************************** " << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _Energypoints(10), _AttackDamages(0)
{
	std::cout << " ********** ClapTrap : Constructeur par param ************* " << std::endl;
	std::cout << "ClapTrap - "<< this->_name << " " << std::endl;
	std::cout << "Starting with : "<< this->_Energypoints << " Energy points." << std::endl;
	std::cout << "Starting with : "<< this->_hitpoints << " Hit points." << std::endl;
	std::cout << "Starting with : "<< this->_AttackDamages << " Attack Damages." << std::endl;

	std::cout << " ********************************************** " << std::endl;
}
/* Diff entre operateur d'assignation et constructeur de copie : https://fr.gadget-info.com/difference-between-copy-constructor#:~:text=Le%20constructeur%20de%20copie%20initialise,autre%20objet%20qui%20existe%20d%C3%A9j%C3%A0.&text=(1)%20Le%20constructeur%20de%20copie,initialis%C3%A9%20avec%20un%20objet%20existant. */

ClapTrap::ClapTrap( const ClapTrap& src)
{
	std::cout << " ********** ClapTrap : Constructeur par recopie ************* " << std::endl;
	if	(this != &src)
		this->_name = src._name;
	*this = src;
	std::cout << "ClapTrap - "<< this->_name << " " << std::endl;
	std::cout << "Starting with : "<< src._Energypoints << " Energy points." << std::endl;
	std::cout << "Starting with : "<< src._hitpoints << " Hit points." << std::endl;
	std::cout << "Starting with : "<< src._AttackDamages << " Attack Damages." << std::endl;
	std::cout << " ********************************************** " << std::endl;

}

ClapTrap::~ClapTrap( void )
{
	std::cout << " ********** ClapTrap : Destructeur par defaut ************* " << std::endl;
}

ClapTrap&    ClapTrap::operator=( ClapTrap const & rhs)
{
    std::cout << "ClapTrap : Assignation operator." << std::endl;
    this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_Energypoints = rhs._Energypoints;
	this->_AttackDamages = rhs._AttackDamages;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		// std::cout << "Debut : Energy points " << this->_Energypoints << std::endl;
		std::cout << "ClapTrap " << '"' << this->_name << '"' << " attacks " << '"' << target  << '"' << " ,causing " << this->_AttackDamages << " points of damage!" << std::endl;
		this->_Energypoints --;
		std::cout << "Energy points : " << this->_Energypoints << std::endl;
		std::cout << "Hit points : " << this->_hitpoints << std::endl;
		// std::cout << "Fin : Energy points" << this->_Energypoints << std::endl;
	}
	else
		std::cout << "Maaan ! You can't breathe ... You need to be repaired..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		this->_Energypoints --;
		if (this->_hitpoints + amount < this->_hitpoints)
			this->_hitpoints = std::numeric_limits<unsigned int>::max();
		else		
			this->_hitpoints += amount;
		std::cout << "ClapTrap : Let's get some reparation" << std::endl;
		std::cout << "ClapTrap : Now we have : " << this->_Energypoints << " Energy points. " << std::endl;
		std::cout << "ClapTrap : Now we have : " << this->_hitpoints << " Hit points. " << std::endl;
	}
	else
		std::cout << "ClapTrap : Maaan ! You can't breathe ... You Deaaad Bro'..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints < amount)
		this->_hitpoints = 0;
	else		
		this->_hitpoints -= amount;
	if (this->_Energypoints > 0 && this->_hitpoints > 0)
	{
		std::cout << "ClapTrap : Oupsie " << this->_name << " received " << amount << " blows wounds. " << this->_hitpoints << " round(s) left " << std::endl;
	}
	else
		std::cout << "ClapTrap : Maaan ! You can't breathe ... You Deaaad Bro' ..." << std::endl;	
}

// Getter 
std::string	ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitpoints() const
{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::getEnergypoints() const
{
	return (this->_Energypoints);
}

unsigned int	ClapTrap::getAttackDamages() const
{
	return (this->_AttackDamages);
}

// Setter 
void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitpoints(unsigned int hitpoints)
{
	this->_hitpoints = hitpoints;
}

void	ClapTrap::setEnergypoints(unsigned int enpoints)
{
	this->_Energypoints = enpoints;
}

void	ClapTrap::setAttackDamages(unsigned int damages)
{
	this->_AttackDamages = damages;
}