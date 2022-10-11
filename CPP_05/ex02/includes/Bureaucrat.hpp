#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP
#include <string>

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const& twin);
        Bureaucrat(std::string const name);
        Bureaucrat(std::string const name, unsigned int grade);
        Bureaucrat(unsigned int grade);
		Bureaucrat& operator=(Bureaucrat const & rhs);
		virtual ~Bureaucrat();
		std::string const getName() const;
        unsigned int const  getGrade() const;
        void                setGrade(int itg);
        void                setHigherGrade();
        void                setLowerGrade();
        void                signForm(AForm &formulaire);
        void                executeForm(AForm const &form) const;
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
		std::string const _name;
        unsigned int               _grade;
};


std::ostream & operator<<( std::ostream & o, Bureaucrat const& rhs);

#endif
