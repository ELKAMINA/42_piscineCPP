#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP
#include <string>
#include "./Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class Intern
{
	public:
		Intern();
		Intern(Intern const& twin);
		Intern& operator=(Intern const & rhs);
		virtual ~Intern();
        AForm*    makeForm(std::string formName, std::string target);
    
    class NonExistingform : public std::exception
    {
        public: 
            virtual const char* what() const throw()
            {
                return ("The form doesn't exist");
            }
    };
};


std::ostream & operator<<( std::ostream & o, Intern const& rhs);

#endif
