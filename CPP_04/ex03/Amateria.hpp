#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP
#include <cstring>
#include "ICharacter.hpp"
#include "Character.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const& twin);
		AMateria& operator=(AMateria const& rhs);
		virtual ~AMateria();
		virtual std::string const & getType() const;
		void setType(std::string type); //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;

};

#endif
