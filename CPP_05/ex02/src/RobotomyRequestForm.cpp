#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/files.h"
#include <fstream>
#include <iostream>
#include <string>

RobotomyRequestForm::RobotomyRequestForm() : AForm("ShrubberyCreationFrom", 45, 72)
{
    this->_target = "";
	// std::cout << " ********** RobotomyRequestForm :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : AForm(src.getName(), src.getGradeFormToExecute(), src.getGradeFormToSign())
{
    
    this->_target = "";
    try
    {
        if (src.getGradeFormToSign() > 72)
        {
            RobotomyRequestForm::GradeTooLowToSignException exc; 
            throw exc;
        }
        if (src.getGradeFormToExecute() > 45)
        {
            RobotomyRequestForm::GradeTooLowToExecuteException exc; 
            throw exc;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    //     return;
    }
	std::cout << " ********** RobotomyRequestForm :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
    *this = src;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target)
{
    this->_target = target;
	// std::cout << " ********** RobotomyRequestForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm() 
{
	// std::cout << " ********** RobotomyRequestForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

std::string         RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

RobotomyRequestForm&    RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs)
{
    this->_target = rhs._target;
    // std::cout << "RobotomyRequestForm :: Assignation operator " << std::endl;
    // std::cout << "RHS GRADE" << rhs._grade << std::endl;
    
    return *this;

}

void    RobotomyRequestForm::formexec(Bureaucrat const &executor) const
{
    std::cout << "Vrrrrrrrrr...." << std::endl;
    // std::cout << "RAND" << rand() % 2 << std::endl;
    if (rand() % 2 == 0)
        std::cout << this->getTarget() << "Has been robotised..." << std::endl;
    else
        std::cout << this->getTarget() << "Has not been robotised..." << std::endl;
}