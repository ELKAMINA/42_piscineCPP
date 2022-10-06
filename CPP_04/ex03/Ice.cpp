#include "./Ice.hpp"
#include <iostream>

// Good to know for virtual classes : https://www.linkedin.com/pulse/why-do-we-need-virtual-destructors-joydip-kanjilal/

Ice::Ice() : _type("ice")
{
	std::cout << " ********** Ice :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Ice::Ice(Ice const& src) : _type("ice")
{
	*this = src;
	std::cout << " ********** Ice :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Ice::Ice(std::string type) : _type(type)
{
	std::cout << " ********** Ice :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Ice::~Ice() 
{
	std::cout << " ********** Ice :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Ice&    Ice::operator=( Ice const & rhs)
{
    std::cout << "Ice :: Assignation operator " << std::endl;
    return *this;
}

Ice* Ice::clone() const
{
	Ice* clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}