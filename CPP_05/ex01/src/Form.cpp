#include "../includes/Form.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

// Good to know for virtual classes : https://www.linkedin.com/pulse/why-do-we-need-virtual-destructors-joydip-kanjilal/

Form::Form() : _name("A simple Form"), _signed(false), _tosign(5), _toexecute(70)
{
	// std::cout << " ********** Form :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Form::Form(Form const& src)
{
    try
    {
        if (src._grade < 1)
        {
            Form::GradeTooHighException exc; 
            throw exc;
        }
        else if (src._grade > 150)
        {
            Form::GradeTooLowException exc; 
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
	// std::cout << " ********** Form :: Constructeur par recopie ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Form::Form(std::string const name, unsigned int grade) : _name(name)
{
    try
    {
        if (grade < 1)
        {
            Form::GradeTooHighException exc; 
            throw exc;
        }
        else if (grade > 150)
        {
            Form::GradeTooLowException exc; 
            throw exc;
        }
	    else
            this->_grade = grade;
    }
    catch(const std::exception& e)
    {
        this->_grade = grade;
        std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    }
	// std::cout << " ********** Form :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Form::Form(unsigned int grade)
{
    try
    {
        if (this->_grade < 1)
        {
            Form::GradeTooHighException exc; 
            throw exc;
        }
        else if (this->_grade > 150)
        {
            Form::GradeTooLowException exc; 
            throw exc;
        }
	    else
            this->_grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    }
	// std::cout << " ********** Form :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Form::Form(std::string const name) : _name(name)
{
	// std::cout << " ********** Form :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Form::~Form() 
{
	// std::cout << " ********** Form :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Form&    Form::operator=( Form const & rhs)
{
    // std::cout << "Form :: Assignation operator " << std::endl;
    std::cout << "RHS GRADE" << rhs._grade << std::endl;
    try
    {
        if (rhs._grade > 150)
        {
            Form::GradeTooLowException exc; 
            throw exc;
        }
        else if (rhs._grade < 1)
        {
            Form::GradeTooHighException exc; 
            throw exc;
        }
        else
            this->_grade = rhs._grade;
    }
    catch(const std::exception& e)
    {
        std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    }
    return *this;
}

std::string const Form::getName() const
{
	return (this->_name);
}

bool                Form::isSigned()
{
    return (this->_signed);
}

unsigned const int  Form::getGradeFormToSign()
{
    return (this->_tosign);
}

void    Form::beSigned(Bureaucrat bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() <= this->getGradeFormToSign() && )
            this->_signed = !this->_signed;
        else if (bureaucrat.getGrade() > this->getGradeFormToSign())
        {
            Form::GradeTooLowException exc; 
            throw exc;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

unsigned const int  Form::getGradeFormToExecute()
{
    return (this->_toexecute);
}

std::ostream& operator<<(std::ostream& o, Form const& rhs)
{
    // std::cout << " Copy assignment operator called" << std::endl;
    if (rhs.getGrade() < 1 || rhs.getGrade() > 150)
       std::cout << "I Told Ya, Grade is invalid Man. Can't display this motherfucker" << std::endl;
    else
        o << rhs.getName() << ", Form grade is : " << rhs.getGrade();
    return o;
}
