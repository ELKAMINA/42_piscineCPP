#ifndef FLAGTRAP_CLASS_HPP
# define FLAGTRAP_CLASS_HPP

#include "./ClapTrap.hpp"

/* Heritage et acces aux donnees */

class FragTrap : public ClapTrap
{
	public :
		FragTrap( void );
		FragTrap(const FragTrap&);
		FragTrap(std::string name);
		~FragTrap( void );
		FragTrap& operator =(FragTrap const &);
		void 	highFivesGuys(void);
		void	attack(const std::string& target);
};

#endif