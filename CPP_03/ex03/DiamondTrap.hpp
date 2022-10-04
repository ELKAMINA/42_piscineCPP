#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP
#include <string>
#include "./ScavTrap.hpp"
#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"

/* Ici, on parle de derivation virtuelle. Probleme, quand heritage en Diamant => vu que la classe au bout herite de deux autres classes qui heritent elles memes d'une base, elle se retrouve avec deux copies => Idee est de : Derivation virtuelle = eviter la duplication des attributs d'une super classe  : https://ressources.unisciel.fr/algoprog/s28hmult/emodules/hm00micours1/res/hm00cours-texte-cpp.pdf */

/* Diamond Problem Inheritance : https://www.cprogramming.com/tutorial/virtual_inheritance.html */

class DiamondTrap : public virtual ClapTrap, public ScavTrap, public FragTrap
{
	public :
		DiamondTrap( void ); // Constructeur par defaut
		DiamondTrap( std::string name); // Constructeur ac param
		DiamondTrap( DiamondTrap const& ); // Constructeur par recopie
		~DiamondTrap( void ); // Destructeur
		DiamondTrap& operator=(DiamondTrap const &); // operateur d'assignation = binaire
		// void attack(const std::string& target);
		// void takeDamage(unsigned int amount);
		// void beRepaired(unsigned int amount);


	private :
		std::string				_name;


};

#endif