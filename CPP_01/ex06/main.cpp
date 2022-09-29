#include <cstring>
#include <iostream>
#include <iomanip>
#include "./Harl.hpp"
#include <sstream>

int	main(int argc, char *argv[])
{
	Harl 		harl;

	if	(argc != 2)
		std::cout << "Wrong number of args" << std::endl;
	else
	{
		harl.complain(argv[1]);
	}
	return 1;
}