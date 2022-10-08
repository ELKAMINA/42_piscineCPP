#include "../includes/Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

// Good to know for virtual classes : https://www.linkedin.com/pulse/why-do-we-need-virtual-destructors-joydip-kanjilal/

Bureaucrat::Bureaucrat() : _grade(150), _name("Fonctionnaire")
{
	// std::cout << " ********** Bureaucrat :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
    try
    {
        if (src._grade < 1)
        {
            Bureaucrat::GradeTooHighException exc; 
            throw exc;
        }
        else if (src._grade > 150)
        {
            Bureaucrat::GradeTooLowException exc; 
            throw exc;
        }
	    else
            this->_grade = src._grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	*this = src;
	// std::cout << " ********** Bureaucrat :: Constructeur par recopie ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    try
    {
        if (grade < 1)
        {
            Bureaucrat::GradeTooHighException exc; 
            throw exc;
        }
        else if (grade > 150)
        {
            Bureaucrat::GradeTooLowException exc; 
            throw exc;
        }
	    else
            this->_grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	// std::cout << " ********** Bureaucrat :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Bureaucrat::Bureaucrat(int grade)
{
    try
    {
        if (this->_grade < 1)
        {
            Bureaucrat::GradeTooHighException exc; 
            throw exc;
        }
        else if (this->_grade > 150)
        {
            Bureaucrat::GradeTooLowException exc; 
            throw exc;
        }
	    else
            this->_grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	// std::cout << " ********** Bureaucrat :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name) : _name(name)
{
	// std::cout << " ********** Bureaucrat :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Bureaucrat::~Bureaucrat() 
{
	// std::cout << " ********** Bureaucrat :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Bureaucrat&    Bureaucrat::operator=( Bureaucrat const & rhs)
{
    // std::cout << "Bureaucrat :: Assignation operator " << std::endl;
    try
    {
        if (rhs._grade > 150)
        {
            Bureaucrat::GradeTooLowException exc; 
            throw exc;
        }
        else if (rhs._grade < 1)
        {
            Bureaucrat::GradeTooHighException exc; 
            throw exc;
        }
        else
            this->_grade = rhs._grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return *this;
}

std::string const Bureaucrat::getName() const
{
	return (this->_name);
}

int const Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

void    Bureaucrat::setHigherGrade()
{
    int tmp;
    try
    {
	    tmp = this->_grade;
        tmp--;
        if (tmp <= 1)
        {
            Bureaucrat::GradeTooHighException exc; 
            throw exc;
        }
        else
            this->_grade--;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    Bureaucrat::setLowerGrade()
{
    int tmp;
    try
    {
	    tmp = this->_grade + 1;
        if (tmp >= 150)
        {
            Bureaucrat::GradeTooLowException exc; 
            throw exc;
        }
        else 
            this->_grade++;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const& rhs)
{
    // std::cout << " Copy assignment operator called" << std::endl;
    o << rhs.getName() << ", bureaucrat grade is : " << rhs.getGrade();
    return o;
}
