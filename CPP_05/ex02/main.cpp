#include "./includes/Bureaucrat.hpp"
#include "./includes/AForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include <iostream>
#include <string>
// #include "./includes/PresidentialPardonForm.hpp"
// #include "./includes/RobotomyRequestForm.hpp"

int main()
{
	/* =================== Tester les attributs de Form ========================== */
	// try
	// {
	// 	Form one(20);
	// 	std::cout << one.getName() << std::endl;
	// 	Form two("Formulaire 2", 20, 10);
	// 	std::cout << two.getName() << std::endl;
	// 	Form three("Formulaire 3", 50, 20);
	// 	std::cout << three.getGradeFormToSign() << std::endl;
	// 	Form four("Formulaire 4");
	// 	std::cout << four.getGradeFormToSign() << " " << four.getGradeFormToExecute() << std::endl;
	// 	three = four;
	// 	std::cout << three.getGradeFormToSign() << " " << three.getGradeFormToExecute() << std::endl;
	// 	Form six = Form("Kikou", 2, 149);
	// 	std::cout << six.getGradeFormToSign() << " " << six.getGradeFormToExecute() << std::endl;
	// 	// Form attribut(20);
	// 	// Form attribut(20);
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// /* =================== Tester bad ========================== */
	// Bureaucrat Maire = Bureaucrat("Maire de Puteaux", 4);
	// Bureaucrat Ouvrier = Bureaucrat("Ouvrier", 150);
	// Form Hebergement("Hebergement", 60, 6);
	// Form Peinture("Peinture", 150, 150);
	// Maire.signForm(Hebergement);
	// Form Batiment("Batiment", 60, 4);
	// Ouvrier.signForm(Batiment);
	// Ouvrier.signForm(Peinture);
	// Form test1("Kikou");
	// Form test2;
	// test1 = test2;
	// std::cout << (bool)test1.isSigned() << std::endl;

	// /* =================== ShrubberyCreationForm ========================== */
	Bureaucrat Maire = Bureaucrat("Maire de Puteaux", 2);
	Bureaucrat Ouvrier = Bureaucrat("Ouvrier", 149);

	ShrubberyCreationForm form1("Chouchou");
	form1.getSignature();
	// form1.execute(Maire);
	Maire.executeForm(form1);
	Ouvrier.executeForm(form1);
	// RobotomyRequestForm form2;
	// form2.formexec(Ouvrier);
	// PresidentialPardonForm form3;
	// form3.getSignature();
	// form3.execute(Ouvrier);
	// form3.execute(Maire);

}