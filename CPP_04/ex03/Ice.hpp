#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP
#include <string>
#include "./Amateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string type);
		Ice(Ice const& twin);
		Ice& operator=(Ice const & rhs);
		virtual ~Ice();
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;

};

#endif
