#include <iostream>
#include <string>
#include "./polymorphime.hpp"

int	main()
{
	Warrior* 	a =  new Warrior();
	Character*	b =  new Warrior();

	a->sayHello("students");
	b->sayHello("hey");
}