#include "./includes/Bureaucrat.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << " Hello " << std::endl;
    Bureaucrat fonctionnaire;

    fonctionnaire.setLowerGrade();
    std::cout << "Graaadeees :" << fonctionnaire.getGrade() << std::endl;
}