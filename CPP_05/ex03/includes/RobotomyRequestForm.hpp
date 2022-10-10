#ifndef SHRUBBERY_CLASS_FORM
# define SHRUBBERY_CLASS_FORM
#include <string>
#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include <iostream>

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const& twin);
        RobotomyRequestForm(std::string const target);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);
		virtual ~RobotomyRequestForm();
        virtual std::string         getTarget() const;
        virtual void                formexec(Bureaucrat const & executor) const;
    
    private :
        std::string         _target;

};

#endif
