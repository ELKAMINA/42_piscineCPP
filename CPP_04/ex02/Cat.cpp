#include "./Cat.hpp"

Cat::Cat()
{
	this->setType("Catty");
	this->_cerveau = new Brain();
	std::cout << " ********** Cat :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Cat::Cat(Cat const& src) 
{
	this->_type = src.getType();
	this->_cerveau = new Brain(*(src.getBrain()));
	// *this = src;
	std::cout << " ********** Cat :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Cat::Cat(std::string type)
{
	this->setType(type);
	this->_cerveau = new Brain();
	std::cout << " ********** Cat :: Constructeur par param ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Cat::~Cat() 
{
	delete _cerveau;
	std::cout << " ********** Cat :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Cat&    Cat::operator=( Cat const & rhs)
{
    std::cout << "Cat :: Assignation operator " << std::endl;
    this->_type = rhs.getType();
    return *this;
}

void	Cat::makeSound() const
{
	std::cout << "\e[0;31Miaaaouuuuuuuuuuu\e[0m" << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->_cerveau;
}