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

Form::Form(Form const& src): _name(src.getName()), _signed(src._signed), _toexecute(src._toexecute), _tosign(src._tosign)
{
	// std::cout << " ********** Form :: Constructeur par recopie ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
    *this = src;
}

Form::Form(std::string const name, unsigned int gradeToExecute, unsigned int gradeToSign) : _name(name), _tosign(gradeToSign), _toexecute(gradeToExecute)
{
    this->_signed = false;
    try
    {
        if (this->_tosign < 1)
        {
            Form::GradeTooHighException exc; 
            throw exc;
        }
        else if (this->_tosign > 150)
        {
            Form::GradeTooLowException exc; 
            throw exc;
        }
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

Form::Form(unsigned int const gradetoSign) : _name("A simple Form"), _tosign(gradetoSign), _toexecute(70), _signed(false)
{
    try
    {
        if (this->_tosign < 1 || this->_toexecute < 1)
        {
            Form::GradeTooHighException exc; 
            throw exc;
        }
        else if (this->_tosign > 150 || this->_toexecute > 150)
        {
            Form::GradeTooLowException exc; 
            throw exc;
        }
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

Form::Form(std::string const name) : _name(name), _toexecute(70), _tosign(5), _signed(false)
{
    try
    {
        if (this->_tosign < 1 || this->_toexecute < 1)
        {
            Form::GradeTooHighException exc; 
            throw exc;
        }
        else if (this->_tosign > 150 || this->_toexecute > 150)
        {
            Form::GradeTooLowException exc; 
            throw exc;
        }
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
    // std::cout << "RHS GRADE" << rhs._grade << std::endl;
    try
    {
        if (this != &rhs)
        {
            if (this->_tosign < 1 || this->_toexecute < 1)
            {
                Form::GradeTooHighException exc; 
                throw exc;
            }
            else if (this->_tosign > 150 || this->_toexecute > 150)
            {
                Form::GradeTooLowException exc; 
                throw exc;
            }
            else
            {
               this->_signed = rhs._signed;
            }   
        }
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

bool                Form::isSigned() const
{
    return (this->_signed);
}

unsigned const int  Form::getGradeFormToSign() const
{
    return (this->_tosign);
}

void    Form::beSigned(Bureaucrat& bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() <= this->getGradeFormToSign())
        {
            this->getSignature();
            std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
        }
        else if (bureaucrat.getGrade() > this->getGradeFormToSign())
        {
            Form::GradeTooLowException exc; 
            std::cout << bureaucrat.getName() << " couldn't sign " << this->getName() << " because ";
            throw exc;
            return ;
        }
        else
            std::cout << bureaucrat.getName() << " signed " << this->getName();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

unsigned const int  Form::getGradeFormToExecute() const
{
    return (this->_toexecute);
}

bool    Form::getSignature()
{
    this->_signed = !this->_signed;
    return (this->_signed);
}

std::ostream& operator<<(std::ostream& o, Form const& rhs)
{
    // std::cout << " Copy assignment operator called" << std::endl;
    o << rhs.getName() << "is " << (rhs.isSigned() == true ? "Signed" : "Unsigned") << "with a signing grade equal to :"
    << rhs.getGradeFormToSign() << "and executing grade equal to : " << rhs.getGradeFormToExecute() << std::endl;
    return o;
}
