#include <cstring>
#include <iostream>
#include <iomanip>
#include "./Harl.hpp"
#include <sstream>

int	main()
{
	Harl 		harl;

	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("BLABLA");
	harl.complain("4 ");
	return 1;
}