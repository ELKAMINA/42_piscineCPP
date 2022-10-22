#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <climits>

int	main()
{
	// {
	// 	std::cout << "\e[0;32mTester l'heritage avec les constructeurs\e[0m" << std::endl;
	// std::cout << "\e[0;---------------\e[0m" << std::endl;
	// 	ScavTrap one;
	// 	ScavTrap two(one);
	// 	ScavTrap three("THREE");
	// 	ScavTrap four("FOUR");
	// 	three = four;
	// 	std::cout << "NAME of three after assig = " << three.getName() << std::endl;
	// 	std::cout << "NAME of four after assig = " << four.getName() << std::endl;
	// 	std::cout << std::endl;
	// 	std::cout << std::endl;
	// }
	// {
	// 	std::cout << "\e[0;32mMontrer diff entre attack ClapTrap et attack ScavTrap\e[0m" << std::endl;
	// 	std::cout << "\e[0;---------------\e[0m" << std::endl;
	// 	ClapTrap first("Fisrt");
	// 	first.attack("Cible de ClapTrap");
	// 	ScavTrap scavou("scavou");
	// 	scavou.attack("Ennemi-de-scavou");

	// 	std::cout << std::endl;

		// std::cout << "\e[0;32mTester l'heritage des fonctions\e[0m" << std::endl;
		// std::cout << "\e[0;---------------\e[0m" << std::endl;
		// ScavTrap one("Heros");
		// one.attack("Ennemi");
		// one.beRepaired(20);
		// one.takeDamage(50);
		// std::cout << std::endl;
		// std::cout << std::endl;
	// }
	// {
	// 	std::cout << "\e[0;32mTester les fonctions de la classe \e[0m" << std::endl;
	// 	std::cout << "\e[0;---------------\e[0m" << std::endl;
	// 	ScavTrap one("Heros");
	// 	one.guardGate();
	// 	std::cout << std::endl;
	// 	std::cout << std::endl;
	// }
	{
		std::cout << "\e[0;32 Random Tests \e[0m" << std::endl;
		std::cout << "\e[0;---------------\e[0m" << std::endl;
		ScavTrap joueur_un("Player 1");
		for (size_t i = 0; i < 4; i++)
		{
			joueur_un.attack("Ennemi");
			joueur_un.takeDamage(25);
		}
	}
}

	
