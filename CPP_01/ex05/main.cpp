#include <string>
#include <iostream>
#include <iomanip>
#include "./Harl.hpp"
#include <sstream>

int	main()
{
	Harl 		hey;
	std::string	input;

	std::cin >> input;
	hey.complain(input);
	return 1;
}