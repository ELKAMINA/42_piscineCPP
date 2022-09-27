#include <iostream>
#include <fstream>

// https://www.codespeedy.com/find-substring-from-text-file-in-cpp/

int	main(int argc, char *arv[])
{
	if	(argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return ()
	}
	else
	{
		std::ifstream	file;
		std::ofstream	copy_file;
		std::string		s1;
		std::string		s2;
		std::string		temp;
		bool			present;
		int				line;

		s1 = arv[2];
		s2 = arv[3];
		file.open(arv[1]);
		if	(file.is_open())
		{
			std::string		input;
			copy_file(arv[1] + ".replace");
			copy_file.open()
			while (getline(file, temp))
			{
				
				if	(temp.find(s1, std::string::npos)) // npos means until the end of the string.
				{
					std::cout << "THE STRING IS HEEEWEE!" << std::endl;
					ans = true;
				}
			}

		}
		else
		{
			std::cout << "Could not open the file !" << std::endl;
			file.close();
		}
	}
}