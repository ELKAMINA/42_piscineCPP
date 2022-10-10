#ifndef AFORM_CLASS_HPP
# define AFORM_CLASS_HPP
#include <string>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(AForm const& twin);
        AForm(std::string const name);
        AForm(std::string const name, unsigned int gradeToex, unsigned int gradeToSig);
        AForm(unsigned int grade);
		AForm& operator=(AForm const & rhs);
		virtual ~AForm();
		std::string const   getName() const;
        bool                isSigned() const;
        unsigned const int  getGradeFormToSign() const;
        unsigned const int  getGradeFormToExecute() const;
        bool                getSignature();
        void                beSigned(Bureaucrat &Bureaucrat);
        virtual void        execute(Bureaucrat const & executor) const;
        virtual void        formexec(Bureaucrat const & executor) = 0;
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
        class FormNotSigned : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("The form isn't signed. No execution then");
                }
        };
        class GradeTooHighToExecuteException : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Grade is toooo High Dude to execute!");
                }
        };
        class GradeTooLowToExecuteException : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Grade is toooo Lolow Dude to execute!");
                }
        };
        class GradeTooHighToSignException : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Grade is toooo High Dude to sign!");
                }
        };
        class GradeTooLowToSignException : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Grade is toooo Lolow Dude to sign!");
                }
        };

	private:
		std::string const   _name;
        bool                _signed;
        unsigned const int  _tosign;
        unsigned const int  _toexecute;

};


std::ostream & operator<<( std::ostream & o, AForm const& rhs);

#endif
