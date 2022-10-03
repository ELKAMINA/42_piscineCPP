#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include "./ClapTrap.hpp"

/* Heritage et acces aux donnees */

class ScavTrap : public virtual ClapTrap
{
	public :
		ScavTrap( void );
		ScavTrap(const ScavTrap&);
		ScavTrap(std::string name);
		~ScavTrap( void );
		ScavTrap& operator =(ScavTrap const &);
		void	guardGate();
		void	attack(const std::string& target);

	private :
	// std::string		_name;


};

#endif