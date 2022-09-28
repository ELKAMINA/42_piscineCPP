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
	std::cout << "ID : " <<  &Harl::debug << std::endl;
}

Harl::~Harl ( void )
{
	
}

void	Harl::complain(std::string level)
{
	std::istringstream iss (level);
	int	id;

	iss >> id;
	(this->fptr[id]);
	std::cout << "ID : " << this->fptr[id] << std::endl;
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


