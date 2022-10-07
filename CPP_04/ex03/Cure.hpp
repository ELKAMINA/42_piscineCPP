#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP
#include <string>
#include "./Amateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string type);
		Cure(Cure const& twin);
		Cure& operator=(Cure const & rhs);
		virtual ~Cure();
		virtual Cure* clone() const;
		virtual std::string const & getType() const;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;

};

#endif
