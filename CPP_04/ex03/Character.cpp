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
	std::cout << " ********** Character :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Character::Character(const Character &rhs) : Nb_total_item (0), Nb_total_deletitem(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs._items[i]->getType() == "ice")
			this->_items[i] = rhs._items[i]->clone();
		if (rhs._items[i]->getType() == "cure")
			this->_items[i] = rhs._items[i]->clone();
		else
			this->_items[i] = NULL;
	}
	this->_name = rhs.getName();
	std::cout << " ********** Character :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Character::Character(std::string name) : _name(name), Nb_total_item (0), Nb_total_deletitem(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_items[i] = NULL;
	}
	std::cout << " ********** Character :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Character::~Character() 
{
	for (size_t i = 0; i < 4; i++)
	{
		delete(this->_items[i]);
	}
	std::cout << " ********** Character :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Character&    Character::operator=( Character const & rhs)
{
	for (size_t i = 0; i < 4; i++)
		delete(this->_items[i]);
	for (size_t i = 0; i < this->Nb_total_item; i++)
		this->_items[i] = rhs._items[i]->clone();
	for (size_t i = this->Nb_total_item; i < 4; i++)
		this->_items[i] = NULL;
	this->_name = rhs.getName();
    std::cout << "Character :: Assignation operator " << std::endl;
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

void	Character::equip(AMateria* m)
{
	if (this->Nb_total_item < 3)
		this->_items[this->Nb_total_item] = m;
	this->Nb_total_item++;
}

void	Character::unequip(int idx)
{
	if (idx < 3)
	{
		this->_deleted_items[this->Nb_total_deletitem] = _items[idx]->clone();
		_items[this->Nb_total_item] = _items[idx]


	}
	else if (idx == 3)
	{
		this->_deleted_items[this->Nb_total_deletitem] = _items[idx]->clone();
		_items[idx] = NULL;
	}
	else
		std::cout << "Materia can't be unequiped" << std::endl;
	
	
	
	
	
	
}

void	Character::use(int idx, ICharacter& target)
{
	this->_items[idx]->use(target);
}