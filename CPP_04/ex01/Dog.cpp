#include "./Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_cerveau = new Brain;
	std::cout << " ********** Dog :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Dog::Dog(Dog const & src) 
{
	this->_cerveau = new Brain(*(src.getBrain()));
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
	delete this->_cerveau;
}

Dog&    Dog::operator=( Dog const & rhs)
{
    std::cout << "Dog :: Assignation operator " << std::endl;
    this->_type = rhs._type;
    return *this;
}

void	Dog::makeSound() const
{
	std::cout << "\e[0;31mHaaaouuuuuuuuuuu\e[0m" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_cerveau;
}