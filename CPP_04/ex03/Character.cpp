#include "./Character.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"
#include <iostream>
#include <string>

// Good to know for virtual classes

Character::Character() : _name("Has No Name"), Nb_total_item (0), Nb_total_deletitem(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_items[i] = NULL;
		this->_deleted_items[i] = NULL;
	}
	// std::cout << " ********** Character :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Character::Character(const Character &rhs)
{
	this->Nb_total_deletitem = rhs.Nb_total_deletitem;
	this->Nb_total_item = rhs.Nb_total_item;
	for (size_t i = 0; i < rhs.Nb_total_deletitem; i++)
	{
		this->_deleted_items[i] = rhs._deleted_items[i]->clone();
	}
	for (size_t i = rhs.Nb_total_deletitem; i < 4; i++)
	{
		this->_deleted_items[i] = NULL;
	}
	for (size_t i = 0; i < this->Nb_total_item; i++)
	{
		this->_items[i] = rhs._items[i]->clone();
	}
	for (size_t i = this->Nb_total_item; i < 4; i++)
	{
		this->_items[i] = NULL;
	}
	this->_name = rhs.getName();
	// std::cout << " ********** Character :: Constructeur par recopie ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Character::Character(std::string name) : _name(name), Nb_total_item (0), Nb_total_deletitem(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_items[i] = NULL;
		this->_deleted_items[i] = NULL;
	}
	// std::cout << " ********** Character :: Constructeur par param ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Character::~Character() 
{
	for (size_t i = 0; i < 4; i++)
	{
		delete(this->_items[i]);
		delete(this->_deleted_items[i]);
	}
	// std::cout << " ********** Character :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Character&    Character::operator=( Character const & rhs)
{
	for (size_t i = 0; i < 4; i++)
		delete(this->_items[i]);
	this->Nb_total_item = rhs.Nb_total_item;
	this->Nb_total_deletitem = rhs.Nb_total_deletitem;
	for (size_t i = 0; i < this->Nb_total_item; i++)
		this->_items[i] = rhs._items[i]->clone();
	for (size_t i = this->Nb_total_item; i < 4; i++)
		this->_items[i] = NULL;
	this->_name = rhs.getName();
    // std::cout << "Character :: Assignation operator " << std::endl;
    return *this;
}

std::string const&	Character::getName() const
{
	return this->_name;
}

int	Character::getNbTotalOfItems()
{
	return this->Nb_total_item;
}

void	Character::equip(AMateria* materia)
{
	if (this->Nb_total_item < 3)
		this->_items[this->Nb_total_item] = materia;
	this->Nb_total_item++;
}

void	Character::unequip(int idx)
{
	for (size_t i = idx + 1; i < this->Nb_total_item; i++)
	{
		this->_items[i - 1] = this->_items[i];
		this->_deleted_items[Nb_total_deletitem] = this->_items[idx]->clone();
		this->_items[i] = NULL;
		Nb_total_deletitem++;
		Nb_total_item--;
	}
	this->_items[Nb_total_item] = NULL;
	if (idx > 3 || idx < 0)
		std::cout << "Materia can't be unequiped" << std::endl;	
}

void	Character::use(int idx, ICharacter& target)
{
	this->_items[idx]->use(target);
}