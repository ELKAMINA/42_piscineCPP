#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP
#include <string>

class ClapTrap
{
	public :
		ClapTrap( void ); // Constructeur par defaut
		ClapTrap( std::string name); // Constructeur ac param
		ClapTrap( ClapTrap const& ); // Constructeur par recopie
		~ClapTrap( void ); // Destructeur
		ClapTrap& 		operator=(ClapTrap const &); // operateur d'assignation = binaire
		std::string		getName() const;
		unsigned int	getHitpoints() const;
		unsigned int	getEnergypoints() const;
		unsigned int	getAttackDamages() const;
		void			setName(std::string name);
		void			setHitpoints(unsigned int value);
		void			setEnergypoints(unsigned int value);
		void			setAttackDamages(unsigned int value);
		void 			attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);


	protected :
		std::string				_name;
		unsigned int			_hitpoints;
		unsigned int			_Energypoints;
		unsigned int			_AttackDamages;


};

#endif