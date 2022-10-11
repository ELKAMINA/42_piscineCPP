#include "../includes/Intern.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
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
    for (size_t i = 0; i < 3; i++)
    {
        delete this->catalog.forms[i];
    }
    
    
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
    try
    {
        catalog.formNames[0] = "shrubbery creation";
        catalog.formNames[1] = "robotomy request";
        catalog.formNames[2] = "presidential pardon";
        catalog.forms[0] = new ShrubberyCreationForm(target);
        catalog.forms[1] = new RobotomyRequestForm(target);
        catalog.forms[2] = new PresidentialPardonForm(target);
        for (size_t i = 0; i < 3; i++)
        {
            if (formName.compare(catalog.formNames[i]) == 0)
            {
                catalog.choosen_form = catalog.forms[i];
                return (catalog.choosen_form);
            }
        }
        NonExistingform exec;
        throw exec;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}