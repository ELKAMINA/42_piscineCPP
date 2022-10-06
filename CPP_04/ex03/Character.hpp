#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP
#include <string>
#include "./Amateria.hpp"
#include "./ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const& src);
		~Character();
		Character& operator=(Character const & rhs);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		int 		getNbTotalOfItems();

	private :
		std::string _name;
		AMateria* 	_items[4];
		int			Nb_total_item;
		AMateria*	_deleted_items[4];
		int			Nb_total_deletitem;
};

#endif