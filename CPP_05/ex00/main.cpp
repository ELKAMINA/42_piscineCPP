#include "./includes/Bureaucrat.hpp"
#include <iostream>
#include <string>

int main()
{
    /* SIMPLE TESTS */
    // std::cout << " Hello " << std::endl;
    // Bureaucrat fonctionnaire;
    // Bureaucrat  George("George");

    // fonctionnaire.setLowerGrade();
    // // std::cout << "Graaadeees :" << fonctionnaire.getGrade() << std::endl;
    // std::cout << fonctionnaire << std::endl;
    // std::cout << George.getName() << std::endl;
    	{
		try
		{
			std::cout << "==== TESTING GOOD CONSTRUCTORS ====" << std::endl;
			Bureaucrat	hey = Bureaucrat();
			Bureaucrat	boss = Bureaucrat("Boss", 1);
			Bureaucrat	sousmerde = Bureaucrat("Sous Merde", 150);
			Bureaucrat	moyen = Bureaucrat("Moyen", 70);
			std::cout << hey << std::endl;
			std::cout << boss << std::endl;
			std::cout << sousmerde << std::endl;
			std::cout << moyen << std::endl;
			hey = moyen;
			std::cout << hey << std::endl;
			boss.setHigherGrade();
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	// {
	// 	std::cout << "==== TESTING BAD CONSTRUCTORS ====" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat	toohigh = Bureaucrat("Too High", 0);
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		Bureaucrat	toolow = Bureaucrat("Too low", 151);
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// {
	// 	std::cout << "==== TESTING CHANGE GRADE ====" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat	boss = Bureaucrat("Boss", 2);
	// 		std::cout << boss << std::endl;
	// 		std::cout << "Grade up !" << std::endl;
	// 		boss.setHigherGrade();
	// 		std::cout << boss << std::endl;
	// 		std::cout << "Grade up !" << std::endl;
	// 		boss.setHigherGrade();
	// 		std::cout << boss << std::endl;
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}

	// 	try
	// 	{
	// 		Bureaucrat	nullos = Bureaucrat("Nullos", 149);
	// 		std::cout << nullos << std::endl;
	// 		std::cout << "Grade down !" << std::endl;
	// 		nullos.setLowerGrade();
	// 		std::cout << nullos << std::endl;
	// 		std::cout << "Grade down !" << std::endl;
	// 		nullos.setHigherGrade();
	// 		std::cout << nullos << std::endl;
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// }

}