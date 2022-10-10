#ifndef SHRUBBERY_CLASS_FORM
# define SHRUBBERY_CLASS_FORM
#include <string>
#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include <iostream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const& twin);
        ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);
		virtual ~ShrubberyCreationForm();
        virtual std::string         getTarget() const;
        virtual void                formexec(Bureaucrat const & executor) const;
    
    private :
        std::string         _target;

};

#endif
