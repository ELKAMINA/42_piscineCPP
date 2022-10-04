#include "./Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << " ********** Cat :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Cat::Cat(std::string type)
{
	this->_type = "Cat";
	std::cout << " ********** Cat :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Cat::Cat(Cat const & src) 
{
	*this = src;
	std::cout << " ********** Cat :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Cat::~Cat() 
{
	std::cout << " ********** Cat :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Cat&    Cat::operator=( Cat const & rhs)
{
    std::cout << "Cat :: Assignation operator " << std::endl;
    this->_type = rhs._type;
    return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaouuuuuuuuuuu" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->_type);
}