#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <climits>

int	main()
{
	// ClapTrap joueur_un;
	ScavTrap Kikou("HEY");
	FragTrap wesh("SALUT");
	Kikou.attack("Tito");
	Kikou.guardGate();
	Kikou.attack("Garbage");
	Kikou.takeDamage(2);
	Kikou.beRepaired(5);
	wesh.attack("LOOOOL");
	// // joueur_un.beRepaired(UINT32_MAX);
	// joueur_un.beRepaired(10);
	
	// for (size_t i = 0; i < 11; i++)
	// {
	// 	joueur_un.attack("Mok");
	// 	joueur_un.takeDamage(3);
	// }


}