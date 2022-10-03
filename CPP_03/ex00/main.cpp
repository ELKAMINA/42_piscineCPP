#include "./ClapTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <climits>

int	main()
{
	ClapTrap joueur_un("LILI");
	ClapTrap joueur_deux(joueur_un);
	joueur_un.attack("lolilol");
	joueur_deux.attack("Halima");
	joueur_deux.takeDamage(2);
	joueur_deux.beRepaired(5);
	// joueur_un.takeDamage(1000);
	// joueur_un.takeDamage(5);
	// joueur_un.beRepaired(UINT32_MAX);
	joueur_un.beRepaired(10);
	
	for (size_t i = 0; i < 11; i++)
	{
		joueur_un.attack("Mok");
		joueur_un.takeDamage(3);
	}

}