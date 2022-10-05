#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << " ********** WrongCat :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	this->_type = "WrongCat";
	std::cout << " ********** WrongCat :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) 
{
	*this = src;
	std::cout << " ********** WrongCat :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

WrongCat::~WrongCat() 
{
	std::cout << " ********** WrongCat :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

WrongCat&    WrongCat::operator=( WrongCat const & rhs)
{
    std::cout << "WrongCat :: Assignation operator " << std::endl;
    this->_type = rhs._type;
    return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaaaouuuuuuuuuuu" << std::endl;
}