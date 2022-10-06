#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP
#include <string>
#include "./IMateriaSource.hpp"
#include "./Amateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(std::string const & type);
		MateriaSource(MateriaSource const& twin);
		MateriaSource& operator=(MateriaSource const & rhs);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		static int	learnt_Materia;

	private :
		AMateria* _MS_items[4];
};

#endif
