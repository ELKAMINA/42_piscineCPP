#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <climits>

int	main()
{
	ClapTrap joueur_un;
	ScavTrap Kikou("HEY");
	FragTrap wesh;
	Kikou.attack("Tito");
	// // ClapTrap joueur_deux(joueur_un);
	Kikou.guardGate();
	// // joueur_un.attack("lolilol");
	Kikou.attack("Garbage");
	Kikou.takeDamage(2);
	Kikou.beRepaired(5);
	// // joueur_un.takeDamage(1000);
	// // joueur_un.takeDamage(5);
	// // joueur_un.beRepaired(UINT32_MAX);
	// joueur_un.beRepaired(10);
	
	// for (size_t i = 0; i < 11; i++)
	// {
	// 	joueur_un.attack("Mok");
	// 	joueur_un.takeDamage(3);
	// }


}