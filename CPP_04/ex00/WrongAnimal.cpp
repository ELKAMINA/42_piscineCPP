#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Hayawane")
{
	std::cout << " ********** WrongAnimal :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{

	std::cout << " ********** WrongAnimal :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) 
{
	*this = src;
	std::cout << " ********** WrongAnimal :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << " ********** WrongAnimal :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

WrongAnimal&    WrongAnimal::operator=( WrongAnimal const & rhs)
{
    std::cout << "WrongAnimal :: Assignation operator " << std::endl;
    this->_type = rhs._type;
    return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "AaaaaaWronganimal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}