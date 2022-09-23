#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

class Weapon
{
	public:
		std::string&	getType();
		std::string&	setType();

	private :
		std::string	_type;
};

#endif                                           