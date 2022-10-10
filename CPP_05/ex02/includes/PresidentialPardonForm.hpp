#ifndef PRESIDENTIAL_CLASS_FORM
# define PRESIDENTIAL_CLASS_FORM
#include <string>
#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include <iostream>

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const& twin);
        PresidentialPardonForm(std::string const target);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);
		virtual ~PresidentialPardonForm();
        virtual std::string         getTarget();
        virtual void                formexec(Bureaucrat const & executor);
    
    private :
        std::string         _target;

};

#endif
