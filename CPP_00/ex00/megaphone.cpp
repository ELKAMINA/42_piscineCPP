#include <iostream>
#include <cstring>

int	main(int argc, char *argv[])
{
	std::string	my_str;
	if	(argc > 1)
	{
		for(int i = 1; i < argc ; i++)
		{
			for(int j = 0; j < strlen(argv[i]); j++)
				argv[i][j] = (unsigned char)toupper(argv[i][j]);
			my_str = argv[i];
			std::cout << my_str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}