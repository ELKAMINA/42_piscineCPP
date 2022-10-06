#include "./Animal.hpp"


A_Animal::A_Animal() : _type("Hayawane")
{
	std::cout << " ********** A_Animal :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

A_Animal::A_Animal(std::string type) : _type(type)
{

	std::cout << " ********** A_Animal :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

A_Animal::A_Animal(A_Animal const & src) 
{
	_type = src.getType();
	*this = src;
	std::cout << " ********** A_Animal :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

A_Animal::~A_Animal() 
{
	std::cout << " ********** A_Animal :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

A_Animal&    A_Animal::operator=( A_Animal const & rhs)
{
    std::cout << "A_Animal :: Assignation operator " << std::endl;
    this->_type = rhs._type;
    return *this;
}


std::string	A_Animal::getType() const
{
	return (this->_type);
}

void	A_Animal::setType(std::string type)
{
	this->_type = type;
}

void	A_Animal::makeSound() const
{
	std::cout << "\e[0;32mI'm your Father\e[0m" << std::endl;
}