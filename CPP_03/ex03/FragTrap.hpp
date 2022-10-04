#ifndef FLAGTRAP_CLASS_HPP
# define FLAGTRAP_CLASS_HPP

#include "./ClapTrap.hpp"

/* Heritage et acces aux donnees */

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap( void );
		FragTrap(const FragTrap&);
		FragTrap(std::string name);
		~FragTrap( void );
		FragTrap& operator =(FragTrap const &);
		void 	highFivesGuys(void);
		void	attack(const std::string& target);
		static const int	ft_hitpoints = 100;
		static const int	ft_enpoints = 100;
		static const int	ft_damages = 30;

	private :
	// std::string		_name;


};

#endif