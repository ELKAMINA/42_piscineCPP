#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/files.h"
#include <fstream>
#include <iostream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationFrom", 137, 145)
{
    this->_target = "";
	// std::cout << " ********** ShrubberyCreationForm :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm(src.getName(), src.getGradeFormToExecute(), src.getGradeFormToSign())
{
    
    this->_target = "";
    try
    {
        if (src.getGradeFormToSign() > 145)
        {
            AForm::GradeTooLowToSignException exc; 
            throw exc;
        }
        if (src.getGradeFormToExecute() > 137)
        {
            AForm::GradeTooLowToExecuteException exc; 
            throw exc;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "For '" << this->getName() << "'" << " the ";
        std::cerr << e.what() << '\n';
    //     return;
    }
	std::cout << " ********** ShrubberyCreationForm :: Constructeur par recopie ************* " << std::endl;
	std::cout << std::endl;
	std::cout << " **********        ************* " << std::endl;
	std::cout << std::endl;
    *this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)
{
    this->_target = target;
	// std::cout << " ********** ShrubberyCreationForm :: Constructeur param ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}


ShrubberyCreationForm::~ShrubberyCreationForm() 
{
	// std::cout << " ********** ShrubberyCreationForm :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

std::string         ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

ShrubberyCreationForm&    ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs)
{
    this->_target = rhs._target;
    // std::cout << "ShrubberyCreationForm :: Assignation operator " << std::endl;
    // std::cout << "RHS GRADE" << rhs._grade << std::endl;
    
    return *this;

}

void    ShrubberyCreationForm::formexec(Bureaucrat const &executor) const
{
    t_files         trees;
    std::ofstream   myFile;
    std::ifstream   drawings (".trees");  

    trees.name = this->getTarget() + "_shrubbery";
    trees.name = trees.name.c_str(); // Add a null terminated character to the string
    // std::cout << "NAME " << trees.name << std::endl;
    myFile.open(trees.name, std::ios::trunc);
    if (!myFile)
    {
        std::cout << "Error when opening the myFile";
        return ;
    }
    if(myFile.is_open())
    {
        myFile << "             /\\" << std::endl;
        myFile << "            <  >" << std::endl;
        myFile << "             \\/" << std::endl;
        myFile << "             /\\" << std::endl;
        myFile << "            /  \\" << std::endl;
        myFile << "           /++++\\" << std::endl;
        myFile << "          /  ()  \\" << std::endl;
        myFile << "          /      \\" << std::endl;
        myFile << "         /~`~`~`~`\\" << std::endl;
        myFile << "        /  ()  ()  \\" << std::endl;
        myFile << "        /          \\" << std::endl;
        myFile << "       /*&*&*&*&*&*&\\" << std::endl;
        myFile << "      /  ()  ()  ()  \\" << std::endl;
        myFile << "      /              \\" << std::endl;
        myFile << "     /++++++++++++++++\\" << std::endl;
        myFile << "    /  ()  ()  ()  ()  \\" << std::endl;
        myFile << "    /                  \\" << std::endl;
        myFile << "   /~`~`~`~`~`~`~`~`~`~`\\" << std::endl;
        myFile << "  /  ()  ()  ()  ()  ()  \\" << std::endl;
        myFile << "  /*&*&*&*&*&*&*&*&*&*&*&\\" << std::endl;
        myFile << " /                        \\" << std::endl;
        myFile << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\" << std::endl;
        myFile << "           |   |" << std::endl;
        myFile << "          |`````|" << std::endl;
        myFile << "          \\_____/" << std::endl;
        myFile << std::endl;
        myFile << std::endl;
        myFile << std::endl;
        myFile << std::endl;
        myFile << "              # #### ####" << std::endl
        << "            ### \\/#|### |/####" << std::endl
        << "           ##\\/#/ \\||/##/_/##/_#" << std::endl
        << "         ###  \\/###|/ \\/ # ###" << std::endl
        << "       ##_\\_#\\_\\## | #/###_/_####" << std::endl
        << "      ## #### # \\ #| /  #### ##/##" << std::endl
        << "       __#_--###`  |{,###---###-~" << std::endl
        << "                 \\ }{" << std::endl
        << "                  }}{" << std::endl
        << "                  }}{" << std::endl
        << "             ejm  {{}" << std::endl
        << "            , -=-~{ .-^- _" << std::endl
        << "                   `}" << std::endl
        << "                   {" << std::endl;
    myFile.close();
    }
}