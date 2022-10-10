#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/files.h"
#include <fstream>
#include <iostream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm() : AForm("ShrubberyCreationFrom", 5, 25)
{
    this->_target = "";
	// std::cout << " ********** PresidentialPardonForm :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : AForm(src.getName(), src.getGradeFormToExecute(), src.getGradeFormToSign())
{
    
    this->_target = "";
    try
    {
        if (src.getGradeFormToSign() > 25)
        {
            PresidentialPardonForm::GradeTooLowToSignException exc; 
            throw exc;
        }
        if (src.getGradeFormToExecute() > 5)
        {
            PresidentialPardonForm::GradeTooLowToExecuteException exc; 
            throw exc;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    //     return;
    }
	std::cout << " ********** PresidentialPardonForm :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
    *this = src;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target)
{
    this->_target = target;
	// std::cout << " ********** PresidentialPardonForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm() 
{
	// std::cout << " ********** PresidentialPardonForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

std::string         PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

PresidentialPardonForm&    PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs)
{
    this->_target = rhs._target;
    // std::cout << "PresidentialPardonForm :: Assignation operator " << std::endl;
    // std::cout << "RHS GRADE" << rhs._grade << std::endl;
    
    return *this;

}

void  PresidentialPardonForm::formexec(Bureaucrat const &executor) const
{
    std::cout << this->getTarget() << "Your target has been pardonned by Zaphod Beeblerox..." << std::endl;
}