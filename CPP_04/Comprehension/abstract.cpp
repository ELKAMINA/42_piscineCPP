#include "./polymorphime.hpp"

void	Character::sayHello(std::string const & target)
{
	std::cout << " Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const & target)
{
	std::cout << " Fuck off " << target << " I dont like u!" << std::endl;
}