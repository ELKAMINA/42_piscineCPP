#include "./animal.hpp"

Animal::Animal() : _type("Hayawane")
{
	std::cout << " ********** Animal :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{

	std::cout << " ********** Animal :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Animal::Animal(Animal const & src) 
{
	*this = src;
	std::cout << " ********** Animal :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Animal::~Animal() 
{
	std::cout << " ********** Animal :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Animal&    Animal::operator=( Animal const & rhs)
{
    std::cout << "Animal :: Assignation operator " << std::endl;
    this->_type = rhs._type;
    return *this;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "Aaaaaaanimal" << std::endl;
}