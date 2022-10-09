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
    // {
	// 	std::cout << "==== Constructors of all types ====" << std::endl;
	// 	Bureaucrat	test1 = Bureaucrat();
	// 	Bureaucrat	test2 = Bureaucrat("Func1", 1);
	// 	Bureaucrat	test3 = Bureaucrat("Func2", 150);
	// 	Bureaucrat	test4 = Bureaucrat("Func3", 70);
	// 	Bureaucrat	test5 = Bureaucrat("Func4", 200);
	// 	std::cout << test1 << std::endl;
	// 	std::cout << test2 << std::endl;
	// 	std::cout << test3 << std::endl;
	// 	std::cout << test4 << std::endl;
	// 	test4 = test3;
	// 	std::cout << test2 << std::endl;
	// 	test2.setHigherGrade();
	// }
	std::cout << std::endl;
	// {
	// 	std::cout << "==== Constructors failing ====" << std::endl;
	// 	Bureaucrat	toohigh = Bureaucrat("Too High", 0);
	// 	Bureaucrat	toolow = Bureaucrat("Too low", 151);
	// }
	{
		std::cout << "==== SetLower vs setHigher ====" << std::endl;
		Bureaucrat	un = Bureaucrat("un", 73737);
		std::cout << un << std::endl;
		un.setHigherGrade();
		std::cout << un << std::endl;
		un.setHigherGrade();
		std::cout << un << std::endl;
	}
}