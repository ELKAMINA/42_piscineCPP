#include "./Brain.hpp"

Brain::Brain()
{
	std::cout << " ********** Brain :: Constructeur par defaut ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Brain::Brain(Brain const & src) 
{
	*this = src;
	std::cout << " ********** Brain :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Brain::~Brain() 
{
	std::cout << " ********** Brain :: Destructeur ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
}

Brain&    Brain::operator=( Brain const& rhs)
{
    std::cout << "Brain :: Assignation operator " << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs.getIdea(i);
	}
    return *this;
}

std::string	Brain::getIdea(int index) const
{
	return this->_ideas[index];
}

void	Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}