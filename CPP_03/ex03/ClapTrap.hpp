#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP
#include <string>

class ClapTrap
{
	public :
		ClapTrap( void ); // Constructeur par defaut
		ClapTrap( std::string name); // Constructeur ac param
		ClapTrap( ClapTrap const& ); // Constructeur par recopie
		virtual ~ClapTrap( void ); // Destructeur
		ClapTrap& operator=(ClapTrap const &); // operateur d'assignation = binaire
		virtual	void attack(const std::string& target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);


	protected :
		std::string				_name;
		unsigned int			_hitpoints;
		unsigned int			_Energypoints;
		unsigned int			_AttackDamages;


};

#endif