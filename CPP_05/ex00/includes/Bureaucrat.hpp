#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string type);
		Bureaucrat(Bureaucrat const& twin);
		Bureaucrat& operator=(Bureaucrat const & rhs);
		virtual ~Bureaucrat();
		virtual Bureaucrat* clone() const;
		virtual std::string const & getType() const;

	protected:
		std::string _type;

};

#endif
