#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <climits>


int	main()
{
	{
		// std::cout << "===== DIAMOND TRAP TEST =====" << std::endl;
		// DiamondTrap child1 = DiamondTrap("Fiston_1");
		// // child1.attack("Test");
		// // child1.takeDamage(5);
		// // child1.beRepaired(5);
	}
	{
		std::cout << "===== Who am I test =====" << std::endl;
		//DiamondTrap child1 = DiamondTrap("Fiston_1");
		DiamondTrap child1("Fiston_1");
		child1.whoAmI();
	}
}