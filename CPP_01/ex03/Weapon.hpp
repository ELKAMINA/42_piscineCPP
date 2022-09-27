#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

class Weapon
{
	public:
		Weapon::Weapon( void );
		Weapon::Weapon(std::string weapon_name);
		Weapon::~Weapon();
		std::string&	const getType();
		void			setType(std::string name);

	private :
		std::string	_type;
};

#endif                                           