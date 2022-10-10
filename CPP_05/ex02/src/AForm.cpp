#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

// Good to know for virtual classes : https://www.linkedin.com/pulse/why-do-we-need-virtual-destructors-joydip-kanjilal/

AForm::AForm() : _name("A simple AForm"), _signed(false), _tosign(5), _toexecute(70)
{
	// std::cout << " ********** AForm :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

AForm::AForm(AForm const& src): _name(src.getName()), _signed(src._signed), _toexecute(src._toexecute), _tosign(src._tosign)
{
	// std::cout << " ********** AForm :: Constructeur par recopie ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
    *this = src;
}

AForm::AForm(std::string const name, unsigned int gradeToExecute, unsigned int gradeToSign) : _name(name), _tosign(gradeToSign), _toexecute(gradeToExecute)
{
    this->_signed = false;
    try
    {
        if (this->_tosign < 1)
        {
            AForm::GradeTooHighException exc; 
            throw exc;
        }
        else if (this->_tosign > 150)
        {
            AForm::GradeTooLowException exc; 
            throw exc;
        }
    }
    catch(const std::exception& e)
    {
        // std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    }
	// std::cout << " ********** AForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

AForm::AForm(unsigned int const gradetoSign) : _name("A simple AForm"), _tosign(gradetoSign), _toexecute(70), _signed(false)
{
    try
    {
        if (this->_tosign < 1 || this->_toexecute < 1)
        {
            AForm::GradeTooHighException exc; 
            throw exc;
        }
        else if (this->_tosign > 150 || this->_toexecute > 150)
        {
            AForm::GradeTooLowException exc; 
            throw exc;
        }
    }
    catch(const std::exception& e)
    {
        // std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    }
	// std::cout << " ********** AForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

AForm::AForm(std::string const name) : _name(name), _toexecute(70), _tosign(5), _signed(false)
{
    try
    {
        if (this->_tosign < 1 || this->_toexecute < 1)
        {
            AForm::GradeTooHighException exc; 
            throw exc;
        }
        else if (this->_tosign > 150 || this->_toexecute > 150)
        {
            AForm::GradeTooLowException exc; 
            throw exc;
        }
    }
    catch(const std::exception& e)
    {
        // std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    }
	// std::cout << " ********** AForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

AForm::~AForm() 
{
	// std::cout << " ********** AForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

AForm&    AForm::operator=( AForm const & rhs)
{
    // std::cout << "AForm :: Assignation operator " << std::endl;
    // std::cout << "RHS GRADE" << rhs._grade << std::endl;
    this->_signed = rhs._signed;
    return *this;
}

std::string const AForm::getName() const
{
	return (this->_name);
}

bool                AForm::isSigned() const
{
    return (this->_signed);
}

unsigned const int  AForm::getGradeFormToSign() const
{
    return (this->_tosign);
}

void    AForm::beSigned(Bureaucrat& bureaucrat)
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
            AForm::GradeTooLowException exc; 
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

unsigned const int  AForm::getGradeFormToExecute() const
{
    return (this->_toexecute);
}

bool    AForm::getSignature()
{
    this->_signed = !this->_signed;
    return (this->_signed);
}

void  AForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (this->isSigned() == false)
        {
            throw AForm::FormNotSigned();
        }
        if(executor.getGrade() > this->getGradeFormToExecute())
        {

            throw AForm::GradeTooLowToExecuteException();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    this->formexec(executor);
}

std::ostream& operator<<(std::ostream& o, AForm const& rhs)
{
    // std::cout << " Copy assignment operator called" << std::endl;
    o << rhs.getName() << "is " << (rhs.isSigned() == true ? "Signed" : "Unsigned") << "with a signing grade equal to :"
    << rhs.getGradeFormToSign() << "and executing grade equal to : " << rhs.getGradeFormToExecute() << std::endl;
    return o;
}
