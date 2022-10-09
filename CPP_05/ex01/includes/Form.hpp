#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP
#include <string>
#include "./includes/Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(Form const& twin);
        Form(std::string const name);
        Form(std::string const name, unsigned int grade);
        Form(unsigned int grade);
		Form& operator=(Form const & rhs);
		~Form();
		std::string const   getName() const;
        bool                isSigned();
        unsigned const int  getGradeFormToSign();
        unsigned const int  getGradeFormToExecute();
        void    beSigned(Bureaucrat Bureaucrat); 
        class GradeTooHighException : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Grade is toooo High Dude!");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Grade is toooo Lolow Dude!");
                }
        };

	private:
		std::string const   _name;
        bool                _signed;
        unsigned const int  _tosign;
        unsigned const int  _toexecute;

};


std::ostream & operator<<( std::ostream & o, Form const& rhs);

#endif
