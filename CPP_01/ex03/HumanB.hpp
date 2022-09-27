#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP
#include "./Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		HumanB( void );
		~HumanB( void );
		void    attack();
		void	setWeapon(Weapon& weapon);
		Weapon&	getWeapon( void ) const;

	private :
		std::string _name;
		Weapon		*_arme;
 
};

#endif  