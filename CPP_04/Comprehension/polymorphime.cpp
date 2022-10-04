#include "./polymorphime.hpp"

void	ACharacter::sayHello(std::string const & target)
{
	std::cout << " Hello " << target << " !" << std::endl;
}

void	Warrior::attack(std::string const & target)
{
	std::cout << " attacks " << target << " with a sword!" << std::endl;
}

