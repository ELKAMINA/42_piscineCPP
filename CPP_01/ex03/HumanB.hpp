#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP
#include "./Weapon.hpp"

class HumanB
{
	public :
                void    attack();
                HumanB::HumanB();
                HumanB::~HumanB();

	private :
                std::string _name;
                Weapon weapon;
 
};

#endif  