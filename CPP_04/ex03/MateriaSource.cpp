#include "./MateriaSource.hpp"
#include "./Amateria.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"
#include "./ICharacter.hpp"
#include <iostream>

// Good to know for virtual classes

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_MS_items[i] = NULL;
	}
	std::cout << " ********** MateriaSource :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& src) 
{
	for (size_t i = 0; i < 4; i++)
	{
		if (src._MS_items[i]->getType() == "Ice")
		{
			this->_MS_items[i] = new Ice();
			this->_MS_items[i] = src._MS_items[i];
		}
		if (src._MS_items[i]->getType() == "Cure")
		{
			this->_MS_items[i] = new Cure();
			this->_MS_items[i] = src._MS_items[i];
		}
	}
	std::cout << " ********** MateriaSource :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

MateriaSource::~MateriaSource() 
{
	for (size_t i = 0; i < 4; i++)
	{
		delete(this->_MS_items[i]);
	}
	std::cout << " ********** MateriaSource :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

MateriaSource&    MateriaSource::operator=( MateriaSource const & rhs)
{
    std::cout << "MateriaSource :: Assignation operator " << std::endl;
    return *this;
}

void	MateriaSource::learnMateria(AMateria* Material)
{
	int	j = 0;

	for (size_t i = 0; i < 4; i++)
	{
		if (this->_MS_items[i] == NULL)
		{
			j = i;
			break ;
		}
	}
	this->_MS_items[j] = Material;
	std::cout << "Materia" << this->_MS_items[j]->getType() << std::endl;
	learnt_Materia = j;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;
	AMateria* clone_Materia;
	while (i != learnt_Materia)
		i++;
	if (this->_MS_items[i]->getType() == "")
		return 0;
	clone_Materia = this->_MS_items[i]->clone();
	return clone_Materia;
}

int	MateriaSource::learnt_Materia = 0;