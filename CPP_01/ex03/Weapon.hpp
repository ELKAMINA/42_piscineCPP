#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <string>

class Weapon
{
	public:
		Weapon(std::string weapname);
		Weapon( void );
		~Weapon();
		const std::string&	getType();
		void				setType(std::string name);

	private :
		std::string	_type;
};

#endif                                           