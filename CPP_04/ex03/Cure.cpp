#include "./Cure.hpp"
#include <iostream>

// Good to know for virtual classes : https://www.linkedin.com/pulse/why-do-we-need-virtual-destructors-joydip-kanjilal/

Cure::Cure() : _type("cure")
{
	// std::cout << " ********** Cure :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Cure::Cure(Cure const& src) : _type("cure")
{
	*this = src;
	// std::cout << " ********** Cure :: Constructeur par recopie ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Cure::Cure(std::string type) : _type(type)
{
	// std::cout << " ********** Cure :: Constructeur par param ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Cure::~Cure() 
{
	// std::cout << " ********** Cure :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Cure&    Cure::operator=( Cure const & rhs)
{
    // std::cout << "Cure :: Assignation operator " << std::endl;
	this->_type = rhs.getType();
    return *this;
}

Cure* Cure::clone() const
{
	Cure* clone = new Cure();
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const& Cure::getType() const
{
	return (this->_type);
}