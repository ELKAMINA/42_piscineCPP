#include "./Amateria.hpp"
#include "./ICharacter.hpp"
#include <iostream>

// Good to know for virtual classes

AMateria::AMateria() : _type("unknown")
{
	std::cout << " ********** AMateria :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

AMateria::AMateria(AMateria const& src) 
{
	*this = src;
	std::cout << " ********** AMateria :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	std::cout << " ********** AMateria :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

AMateria::~AMateria() 
{
	std::cout << " ********** AMateria :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

AMateria&    AMateria::operator=( AMateria const & rhs)
{
    std::cout << "AMateria :: Assignation operator " << std::endl;
    return *this;
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

void AMateria::setType(std::string type)
{
	this->_type = type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}