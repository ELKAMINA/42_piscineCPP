#include "./MateriaSource.hpp"
#include "./Amateria.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"
#include "./ICharacter.hpp"
#include <iostream>

// Good to know for virtual classes

MateriaSource::MateriaSource() : _MS_Nb_total_item(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_MS_items[i] = NULL;
	}
	// std::cout << " ********** MateriaSource :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& src) 
{
	this->_MS_Nb_total_item = src._MS_Nb_total_item;
	for (size_t i = 0; i < this->_MS_Nb_total_item; i++)
	{
		this->_MS_items[i] = src._MS_items[i]->clone();
	}
	for (size_t i = this->_MS_Nb_total_item; i < 4; i++)
	{
		this->_MS_items[i] = NULL;
	}
	// std::cout << " ********** MateriaSource :: Constructeur par recopie ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

MateriaSource::~MateriaSource() 
{
	for (size_t i = 0; i < 4; i++)
	{
		delete(this->_MS_items[i]);
	}
	// std::cout << " ********** MateriaSource :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

MateriaSource&    MateriaSource::operator=( MateriaSource const & rhs)
{
	for (size_t i = 0; i < 4; i++)
		delete(this->_MS_items[i]);
	for (size_t i = 0; i < this->_MS_Nb_total_item; i++)
		this->_MS_items[i] = rhs._MS_items[i]->clone();
	for (size_t i = this->_MS_Nb_total_item; i < 4; i++)
		this->_MS_items[i] = NULL;
    // std::cout << "MateriaSource :: Assignation operator " << std::endl;
    return *this;
}

void	MateriaSource::learnMateria(AMateria* Material)
{
	if (_MS_Nb_total_item < 3)
    {
        _MS_items[_MS_Nb_total_item] = Material;
        _MS_Nb_total_item += 1;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	j = 0;
    for(int i = 0; i < _MS_Nb_total_item; i++)
	{
		if(_MS_items[i]->getType() == type)
			return _MS_items[i]->clone();
	}
    return (NULL);
}