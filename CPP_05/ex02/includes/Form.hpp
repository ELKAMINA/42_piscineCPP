#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP
#include <string>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(Form const& twin);
        Form(std::string const name);
        Form(std::string const name, unsigned int gradeToex, unsigned int gradeToSig);
        Form(unsigned int grade);
		Form& operator=(Form const & rhs);
		~Form();
		std::string const   getName() const;
        bool                isSigned() const;
        unsigned const int  getGradeFormToSign() const ;
        unsigned const int  getGradeFormToExecute() const ;
        bool                getSignature();
        void                beSigned(Bureaucrat &Bureaucrat); 
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
        class FormAlreadySigned : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("You came too late Dude. The form was signed by someone better than you ! Niahahah");
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
