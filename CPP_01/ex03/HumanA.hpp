#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP
#include "./Weapon.hpp"

class HumanA
{
	public:
                void    attack();
                HumanA::HumanA(std::string namish);
                HumanA::~HumanA();

	private :
                std::string _name;
                Weapon weaponA;
 
};

#endif  