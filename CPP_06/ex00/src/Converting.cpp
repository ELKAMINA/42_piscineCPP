#include <ctype.h>
#include <iostream>
#include "./includes/Converting.hpp"

Converting::Converting()
{
    this->_argument = "";
	this->_dot = false;
	this->_ef = false;
	// std::cout << " ********** Converting :: Constructeur par defaut ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

Converting::Converting(Converting const& src)
{
    
    this->_argument = src._argument;
	this->_dot = src._dot;
	this->_ef = src._ef;
    *this = src;
}

Converting::Converting(std::string argument)
{
    this->_argument = argument;
	this->_dot = false;
	this->_ef = false;
	// std::cout << " ********** Converting :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}


Converting::~Converting() 
{
	// std::cout << " ********** Converting :: Destructeur ************* " << std::endl;
	// std::cout << std::endl;
	// std::cout << " **********        ************* " << std::endl;
	// std::cout << std::endl;
}

std::string         Converting::getArgument() const
{
    return (this->_argument);
}

bool         Converting::getDotStatus() const
{
    return (this->_dot);
}

void	Converting::is_single_char(std::string argument)
{
	if (argument.length() == 1)
	{
		if (isdigit(argument[0]) == 0)
		{
			this->_charing = argument[0];
			this->_inting = static_cast<int>(this->_charing);
			this->_doubling = static_cast<double>(this->_charing);
			this->_floating = static_cast<float>(this->_charing);
		}
		else
		{
			this->_inting = static_cast<int>(argument[0]);
			this->_charing = static_cast<char>(this->_inting);
			this->_doubling = static_cast<double>(this->_inting);
			this->_floating = static_cast<float>(this->_inting);
		}
	}
}

void	Converting::is_float(std::string argument)
{
	try
	{
		if (argument.length() >= 3)
		{
			int	i = 0;
			while (argument[i] == ' ')
				i++;
			while (argument[i])
			{
				if (isdigit(argument[i]) != 0)
				{
					if (argument[i] == '.' && this->_dot == false)
					{
						this->_dot = true;
						continue;
					}
					if (argument[i] == 'f' && this->_ef == false)
					{
						this->_ef = true;
						continue;
					}
					if (argument[i] != '.' && argument[i] != 'f')
					{
						AmpossiToConvert exc;
						throw exc;
					}	
				}
				i++;
			}
			if (this->_dot == false && this->_ef == false)
			{
				/* code */
			}
			
			
			if (isdigit(argument[0]) == 0)
			{
				this->_charing = argument[0];
				this->_inting = static_cast<int>(this->_charing);
				this->_doubling = static_cast<double>(this->_charing);
				this->_floating = static_cast<float>(this->_charing);
			}
			else
			{
				this->_inting = static_cast<int>(argument[0]);
				this->_charing = static_cast<char>(this->_inting);
				this->_doubling = static_cast<double>(this->_inting);
				this->_floating = static_cast<float>(this->_inting);
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
	
}



void	Converting::getRealTypeFromString(std::string argument)
{
	is_single_char(argument);
	is_float(argument);
	
}

void	Converting::make_conversions(std::string argument)
{

}
