#include "./ScavTrap.hpp"
#include "./DiamondTrap.hpp"
#include "./ClapTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>

DiamondTrap::DiamondTrap( void ) : FragTrap("PasDeNom_clap_name"), ScavTrap("PasDeNom_clap_name")
{
	std::cout << " ********** DiamondTrap :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	this->_name = "PasDeNom_clap_name";
	std::cout << "DiamondTrap :: My name is : "<< this->_name << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< ScavTrap::_Energypoints << " Energy points." << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< FragTrap::_hitpoints << " Hit points." << std::endl;
	std::cout << "DiamondTrap :: Starting with : "<< FragTrap::_AttackDamages << " Attack Damages." << std::endl;
	std::cout << std::endl;
	std::cout << " ********************************************** " << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : FragTrap(name), ScavTrap(name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitpoints = FragTrap::ft_hitpoints;
	this->_Energypoints = ScavTrap::st_enpoints;
	this->_AttackDamages = FragTrap::ft_damages;
	std::cout << " ********** DiamondTrap :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << "DiamondTrap :: My name is : "<< this->_name << std::endl;
	std::cout << "DiamondTrap :: FROM FRAGTRAP  : "<< this->_hitpoints << " Hit points." << std::endl;
	std::cout << "DiamondTrap :: FROM SCAVTRAP : "<< this->_Energypoints << " Energy points." << std::endl;
	std::cout << "DiamondTrap :: FROM FRAGTRAP  : "<< this->_AttackDamages << " Attack Damages." << std::endl;
	std::cout << std::endl;
	std::cout << " ********************************************** " << std::endl;
	std::cout << std::endl;
}
/* Diff entre operateur d'assignation et constructeur de copie : https://fr.gadget-info.com/difference-between-copy-constructor#:~:text=Le%20constructeur%20de%20copie%20initialise,autre%20objet%20qui%20existe%20d%C3%A9j%C3%A0.&text=(1)%20Le%20constructeur%20de%20copie,initialis%C3%A9%20avec%20un%20objet%20existant. */

DiamondTrap::DiamondTrap( const DiamondTrap& src) : FragTrap(*this), ScavTrap(*this)
{
	std::cout << " ********** DiamondTrap :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	this->_name = src._name;
	*this = src;
	std::cout << "DiamondTrap :: My name is : "<< this->_name << std::endl;
	std::cout << "DiamondTrap :: FROM FRAGTRAP  : "<< FragTrap::_Energypoints << " Energy points." << std::endl;
	std::cout << "DiamondTrap :: FROM SCAVTRAP  : "<< ScavTrap::_hitpoints << " Hit points." << std::endl;
	std::cout << "DiamondTrap :: FROM FRAGTRAP : "<< FragTrap::_AttackDamages << " Attack Damages." << std::endl;
	std::cout << std::endl;
	std::cout << " ********************************************** " << std::endl;
	std::cout << std::endl;

}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << " ``````````````` DiamondTrap :: Destructeur par defaut ``````````````` " << std::endl;
}

DiamondTrap&    DiamondTrap::operator=( DiamondTrap const & rhs)
{
    std::cout << "DiamondTrap :: Assignation operator " << std::endl;
    this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_Energypoints = rhs._Energypoints;
	this->_AttackDamages = rhs._AttackDamages;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "----------------------- WHOAMI FUNCTION ---------------------" << std::endl;

	std::cout << "My name is : " << this->_name << std::endl;
	std::cout << "My subobject name is : " << ClapTrap::_name << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;
}