#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Intern.hpp"
#include "../includes/files.h"
#include <fstream>
#include <iostream>
#include <string>

Intern::Intern()
{
	// std::cout << " ********** Intern :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Intern::Intern(Intern const& src)
{
    *this = src;
}

Intern::~Intern() 
{
	// std::cout << " ********** Intern :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Intern&    Intern::operator=( Intern const & rhs)
{
    *this = rhs;
    // std::cout << "Intern :: Assignation operator " << std::endl;
    // std::cout << "RHS GRADE" << rhs._grade << std::endl;
    
    return *this;
}

AForm*   Intern::makeForm(std::string formName, std::string target)
{
    AForm* allforms[3];

    allforms[0] = new ShrubberyCreationForm("shrubbery form");
    allforms[1] = new PresidentialPardonForm("presidential form");
    allforms[2] = new RobotomyRequestForm("robotomy form");
    
}