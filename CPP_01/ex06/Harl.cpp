#include <string>
#include <iostream>
#include <iomanip>
#include "./Harl.hpp"
#include <sstream>

Harl::Harl ( void )
{
	this->fptr[0] = &Harl::debug;
	this->fptr[1] = &Harl::info;
	this->fptr[2] = &Harl::warning;
	this->fptr[3] = &Harl::error;
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
}

Harl::~Harl ( void )
{
	
}

std::string	Harl::capitalise(std::string level)
{
	std::string	my_str;
	int	j = 0;
	while(level[j])
	{
		level[j] = (unsigned char)toupper(level[j]);
		j++;
	}
	my_str = level;
	return my_str;
}

void	Harl::complain(std::string level)
{
	bool	okay = false;
	level = capitalise(level);
	int i = 0;
	while (i < 4)
	{
		if (level.compare(this->levels[i]) == 0)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			((this->*fptr[0]))();
			std::cout << "[ INFO ]" << std::endl;
			((this->*fptr[1]))();
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			((this->*fptr[1]))();
			std::cout << "[ WARNING ]" << std::endl;
			((this->*fptr[2]))();
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			((this->*fptr[2]))();
			std::cout << "[ ERROR ]" << std::endl;
			((this->*fptr[3]))();
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			((this->*fptr[3]))();
			break;	
		default:
			std::cout << "Nothing to complain about ..." << std::endl;
			break;
	}
}

void	Harl::debug( void )
{
	std::cout << "DEBUG" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "INFO" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "WARNING" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "ERROR" << std::endl;
}


