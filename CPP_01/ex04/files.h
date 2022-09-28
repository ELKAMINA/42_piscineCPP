#ifndef FILES_H
# define FILES_H

typedef	struct s_files
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
}	t_files;

#endif