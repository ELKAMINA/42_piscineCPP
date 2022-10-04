#include <iostream>
#include <string>
#include "./polymorphime.hpp"

int	main()
{
	ACharacter*	a = new Warrior();

	a->sayHello("students");
	a->attack("roger");

}