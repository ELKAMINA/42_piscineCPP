#include "./includes/Converting.hpp"

Converting::Converting()
{
    this->_argument = "";
	// std::cout << " ********** Converting :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Converting::Converting(Converting const& src)
{
    
    this->_argument = src._argument;
    *this = src;
}

Converting::Converting(std::string argument)
{
    this->_argument = argument;
	// std::cout << " ********** Converting :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}


Converting::~Converting() 
{
	// std::cout << " ********** Converting :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

std::string         Converting::getArgument() const
{
    return (this->_argument);
}


Converting::operator int()
{
    this->_floating = static_cast<int>(this->_floating);
}