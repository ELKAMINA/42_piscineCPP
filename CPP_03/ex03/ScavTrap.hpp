#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include "./ClapTrap.hpp"

/* Heritage et acces aux donnees */

class ScavTrap :virtual public ClapTrap
{
	public :
		ScavTrap( void );
		ScavTrap(const ScavTrap&);
		ScavTrap(std::string name);
		~ScavTrap( void );
		ScavTrap& operator =(ScavTrap const &);
		void	guardGate();
		virtual void	attack(const std::string& target);
		static const int	st_hitpoints = 100;
		static const int	st_enpoints = 50;
		static const int	st_damages = 20;

	private :
	// std::string		_name;


};

#endif