#include <iostream>
#include <string>
#include <fstream>
#include "./files.h"

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

void	get_strings_innewfile(t_files *files)
{
	while (std::getline(files->file, files->temp))
	{
		while	(files->temp.find(files->s1) != std::string::npos)
		{
			files->pos = files->temp.find(files->s1);
			files->start = 0;
			files->newstr = files->newstr.append(files->temp.substr(files->start, files->pos));
			files->newstr.append(files->s2);
			files->temp = files->temp.substr((files->pos + files->size_s1), (files->temp.size()) - (files->pos + files->size_s1));
			files->go = false;
		}
		files->newstr = files->newstr.append(files->temp);
		if (files->go == false)
			files->file2 << files->newstr;
		else
			files->file2 << files->temp;
		files->file2 << std::endl;
		files->temp.clear();
		files->newstr.clear();
	}
}

void	fail_file2( t_files *files)
{
	std::cout << "Could not open file2!" << std::endl;
	files->file2.close();
}

void	fail_file1( t_files *files)
{
	std::cout << "Could not open file!" << std::endl;
	files->file.close();
}

void	main_loop(char *arv[], t_files *files)
{
	files->s1 = arv[2];
	files->s2 = arv[3];
	files->size_s1 = files->s1.size();
	files->size_s2 = files->s2.size();
	files->file.open(arv[1]);
	files->go = true;
	files->newfile = getting_filename(arv[1]);
	files->file2.open(files->newfile, std::ios::out);
	if	(files->file.is_open())
	{
		if	(files->file2.is_open())
			get_strings_innewfile(files);
		else
			fail_file2(files);
	}
	else
		fail_file1(files);
	files->file.close();
	files->file2.close();
}

int	main(int argc, char *arv[])
{
	t_files	files;

	if	(argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	else
		main_loop(arv, &files);
}