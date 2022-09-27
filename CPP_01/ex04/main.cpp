#include <iostream>
#include <fstream>

// https://www.codespeedy.com/find-substring-from-text-file-in-cpp/

std::string getting_filename(std::string file)
{
	int 			index 		= 0;
	std::string		replacing	= "replace.txt";
	int				i			= 0;
	int				size		= 0;

	size = file.size();
	file.resize(size+9);
	if (file.find(".") != std::string::npos)
	{
		index = file.find(".");
		index++;
		while (replacing[i])
		{
			file[index] = replacing[i];
			index++;
			i++;
		}
	}
	return file;
}

int	main(int argc, char *arv[])
{
	if	(argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	else
	{
		std::ifstream	file;
		std::ofstream	file2;
		std::string		newfile;
		std::string		s1;
		std::string		s2;
		std::string		temp;

		s1 = arv[2];
		s2 = arv[3];
		file.open(arv[1]);
		newfile = getting_filename(arv[1]);
		std::cout << newfile << std::endl;
		file2.open(newfile, std::ios::out);
		if	(file.is_open())
		{
			if	(file2.is_open())
			{
				std::cout << "arv3" << s2 << std::endl;
				std::string		input;
				while (std::getline(file, temp))
				{
					std::cout << "TEMP : " << temp << std::endl;
					if	(temp.find(s1) != std::string::npos) // npos means until the end of the string.
					{
						std::cout << "s1 : " << temp.find(s1) << std::endl;
						std::cout << "THE STRING IS HEEEWEE!" << std::endl;
						temp.clear();
					}
					else
					{
						file2 << temp;
						file2 << std::endl;	
					}
				}
			}
			else
			{
				std::cout << "Could not open file2!" << std::endl;
				file2.close();
			}
		}
		else
		{
			std::cout << "Could not open file !" << std::endl;
			file.close();
		}
	}
}