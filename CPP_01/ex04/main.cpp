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
		std::string		newstr;
		std::string		s1;
		std::string		s2;
		std::string		temp;
		bool			go;
		size_t			pos;
		size_t			size_s1;
		size_t			size_s2;
		size_t			start;

		s1 = arv[2];
		s2 = arv[3];
		size_s1 = s1.size();
		size_s2 = s2.size();
		file.open(arv[1]);
		go = true;
		newfile = getting_filename(arv[1]);
		file2.open(newfile, std::ios::out);
		if	(file.is_open())
		{
			if	(file2.is_open())
			{
				while (std::getline(file, temp))
				{
					while	(temp.find(s1) != std::string::npos)
					{
						pos = temp.find(s1);
						start = 0;
						newstr = newstr.append(temp.substr(start, pos));
						newstr.append(s2);
						temp = temp.substr((pos + size_s1), (temp.size()) - (pos + size_s1));
						go = false;
					}
					newstr = newstr.append(temp);
					if (go == false)
						file2 << newstr;
					else
						file2 << temp;
					file2 << std::endl;
					temp.clear();
					newstr.clear();
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