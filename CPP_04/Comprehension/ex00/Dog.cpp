#include "./Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << " ********** Dog :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Dog::Dog(std::string type)
{
	this->_type = "Dog";
	std::cout << " ********** Dog :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Dog::Dog(Dog const & src) 
{
	*this = src;
	std::cout << " ********** Dog :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Dog::~Dog() 
{
	std::cout << " ********** Dog :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Dog&    Dog::operator=( Dog const & rhs)
{
    std::cout << "Dog :: Assignation operator " << std::endl;
    this->_type = rhs._type;
    return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Haaaouuuuuuuuuuu" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->_type);
}