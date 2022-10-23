#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <climits>

int	main()
{
	// {
	// 	std::cout << "\e[0;32mTester l'heritage avec les constructeurs\e[0m" << std::endl;
	// std::cout << "\e[0;---------------\e[0m" << std::endl;
	// 	FragTrap one;
	// 	FragTrap two(one);
	// 	FragTrap three("THREE");
	// 	FragTrap four("FOUR");
	// 	three = four;
	// 	std::cout << "NAME of three after assig = " << three.getName() << std::endl;
	// 	std::cout << "NAME of four after assig = " << four.getName() << std::endl;
	// 	std::cout << std::endl;
	// 	std::cout << std::endl;
	// }
	// {
	// 	std::cout << "\e[0;32mTester l'heritage des fonctions\e[0m" << std::endl;
	// 	std::cout << "\e[0;---------------\e[0m" << std::endl;
	// 	FragTrap one("Heros");
	// 	one.attack("Ennemi");
	// 	one.beRepaired(20);
	// 	one.takeDamage(50);
	// 	std::cout << std::endl;
	// 	std::cout << std::endl;
	// }
	{
		std::cout << "\e[0;32mTester les fonctions de la classe \e[0m" << std::endl;
		std::cout << "\e[0;---------------\e[0m" << std::endl;
		FragTrap one("Heros");
		one.highFivesGuys();
		std::cout << std::endl;
		std::cout << std::endl;
	}
	// {
	// 	std::cout << "\e[0;32 Random Tests \e[0m" << std::endl;
	// 	std::cout << "\e[0;---------------\e[0m" << std::endl;
	// 	FragTrap joueur_un("Player 1");
	// 	for (size_t i = 0; i < 4; i++)
	// 	{
	// 		joueur_un.attack("Ennemi");
	// 		joueur_un.takeDamage(25);
	// 	}
	// }
}

	
