#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP
#include "./Weapon.hpp"

class HumanA
{
	public:
		HumanA( void );
		HumanA(std::string name, Weapon& _arme);
		~HumanA( void );
		void    attack();
		Weapon& getWeapon( void ) const;

	private :
		std::string _name;
		Weapon& _arme;
 
};

#endif  