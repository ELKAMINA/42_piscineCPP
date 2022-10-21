#include "./ClapTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

int	main()
{

	// " *** Generic Constructor *** "
	// ClapTrap one;
	// std::cout << "........................." << std::endl;
	// std::cout << std::endl;
	
	
	// // " ***Param Constructor *** "
	// ClapTrap two("SECOND");
	// std::cout << "........................." << std::endl;
	// std::cout << std::endl;

	// // " ***Constructor par recopie - Proof of deep copy *** "
	// ClapTrap three(two);
	// three.setName("SECOND BUT COPY");
	// std::cout << "Two name : " << two.getName() << std::endl;
	// std::cout << "Three name : " << three.getName() << std::endl;
	// std::cout << "........................." << std::endl;
	// std::cout << std::endl;


	// // " *** Surcharge d'operateurs - Proof of deep copy *** "
	// ClapTrap four;
	// ClapTrap five("FIVE");
	// four = five;
	// std::cout << "four name before change : " << four.getName() << std::endl;
	// std::cout << "five name before change : " << five.getName() << std::endl;
	// four.setName("ASSIGNED FROM FIVE");
	// std::cout << "four name after change : " << four.getName() << std::endl;
	// std::cout << "five name after change : " << five.getName() << std::endl;
	// std::cout << "........................." << std::endl;
	// std::cout << std::endl;

	/* Tests fonctions membres*/
	ClapTrap joueur_un("LILI");
	std::cout << std::endl;
	std::cout << std::endl;

	ClapTrap joueur_deux(joueur_un);
	std::cout << std::endl;
	std::cout << std::endl;

	joueur_un.attack("lolilol");
	std::cout << std::endl;
	std::cout << std::endl;

	joueur_deux.attack("Halima");
	std::cout << std::endl;
	std::cout << std::endl;

	joueur_deux.takeDamage(2);
	std::cout << std::endl;
	std::cout << std::endl;

	joueur_deux.beRepaired(5);
	std::cout << std::endl;
	std::cout << std::endl;
	joueur_un.takeDamage(1000);
	joueur_un.takeDamage(5);
	joueur_un.beRepaired(100);
	joueur_un.beRepaired(10);
	std::cout << std::endl;
	std::cout << std::endl;
	for (size_t i = 0; i < 11; i++)
	{
		joueur_un.attack("Mok");
		joueur_un.takeDamage(3);
		std::cout << std::endl;
		std::cout << std::endl;
	}

}