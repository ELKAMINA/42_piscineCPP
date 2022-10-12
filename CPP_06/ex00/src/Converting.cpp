#include <ctype.h>
#include <iostream>
#include <iomanip>
#include "../includes/Converting.hpp"

Converting::Converting()
{
    this->_argument = "";
	this->_dot = false;
	this->_ef = false;
	this->_signed = false;
	this->_maxInt = false;
	this->_inting = 0;
	this->_doubling = 0.0;
	this->_floating = 0.0f;
	this->_charing = '0';
	this->_NonDisplayableChar = false;
	this->_impossbileFloat = false;
	this->_impossbileDouble = false;
	this->_nanorInf = false;
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
	this->_signed = src._signed;
	this->_charing = src._charing;
	this->_inting = src._inting;
	this->_maxInt = src._maxInt;
	this->_floating = src._floating;
	this->_doubling = src._doubling;
	this->_NonDisplayableChar = src._NonDisplayableChar;
	this->_impossbileFloat = src._impossbileFloat;
	this->_impossbileDouble = src._impossbileDouble;
	this->_nanorInf = src._nanorInf;
    *this = src;
}

Converting::Converting(std::string const argument)
{
    this->_argument = argument;
	this->_dot = false;
	this->_ef = false;
	this->_signed = false;
	this->_inting = 0;
	this->_doubling = 0.0;
	this->_floating = 0.0f;
	this->_maxInt = false;
	this->_charing = '0';
	this->_NonDisplayableChar = false;
	this->_impossbileFloat = false;
	this->_impossbileDouble = false;
	this->_nanorInf = false;
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

void	Converting::is_single_char(std::string const argument)
{
	if (argument.length() == 1)
	{
		if (isdigit(argument[0]) != 0 && isprint(argument[0]))
		{
			if (argument[0] != '0')
				this->_charing = argument[0];
			else
				this->_NonDisplayableChar = true;
			this->_inting = atoi(argument.c_str());
			this->_charing = static_cast<char>(this->_inting);
			this->_doubling = static_cast<double>(this->_inting);
			this->_floating = static_cast<float>(this->_inting);
		}
		else
		{
			this->_charing = argument[0];
			this->_inting = static_cast<int>(this->_charing);
			this->_doubling = static_cast<double>(this->_charing);
			this->_floating = static_cast<float>(this->_charing);
		}
	}
}

void	Converting::is_double(std::string const argument)
{
	if (argument == "nan" || argument == "+inf" || argument == "inf" || argument == "-inf")
		this->_impossbileFloat = true;
	this->_doubling = atof(argument.c_str());
	this->_inting = static_cast<int>(this->_doubling);
	this->_charing = '*';
	this->_floating = static_cast<float>(this->_doubling);
}

void	Converting::is_int(std::string const argos)
{
	std::string const argument = argos;
	if (this->_signed == true)
		std::string const argument = argos.substr(1, argos.length());
	if (argument.compare("2147483647") > 0 || argument.compare("2147483648") > 0)
		this->_maxInt = true; 
	else
		this->_inting = atoi(argument.c_str());
	// std::cout << "je rentre ici" << this->_doubling << std::endl;
	this->_doubling = static_cast<double>(this->_inting);
	this->_charing = static_cast<char>(this->_inting);
	this->_floating = static_cast<float>(this->_inting);
}


void	Converting::is_float(std::string const argos)
{
	try
	{
		if (argos.length() >= 3)
		{
			int	i = 0;
			while (argos[i] == ' ')
				i++;
			int j = i;
			std::string const argument = argos.substr(j, argos.length());
			if (argument.length() == 1)
				is_single_char(argument);
			// std::cout << "argument [i]" << argument[i] << std::endl;
			if (argument[i] == '-' || argument[i] == '+')
			{
				this->_signed = true;
				i++;
			}
			while (argument[i])
			{
				if (isdigit(argument[i]) == 0)
				{
					if (argument == "nanf" || argument == "+inff" || argument == "inff" || argument == "-inff")
							this->_impossbileFloat = true;
					if (argument == "nan" || argument == "+inf" || argument == "inf" || argument == "-inf")
					{
						is_double(argument);
						return ;
					}
					if (argument[i] == '.' && this->_dot == false)
					{
						this->_dot = true;
						continue;
					}
					if (argument[i] == 'f' && this->_ef == false)
					{
						if (i != argument.length() - 1)
						{
							AmpossiToConvert exc;
							throw exc;
						}
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
			std::string arg = argument.substr(j, argument.size() - j);
			if (this->_dot == false && this->_ef == true)
			{
				AmpossiToConvert exc;
				throw exc;
			}
			else if (this->_dot == true && this->_ef == false)
			{
				is_double(arg);
				return ;
			}
			else if (this->_dot == false && this->_ef == false)
			{
				is_int(arg);
				return ;
			}
			else
			{
				this->_floating = atof(arg.c_str());
				this->_doubling = static_cast<double>(this->_floating);
				this->_charing = '*';
				this->_inting = static_cast<int>(this->_floating);
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
}

void	Converting::getRealTypeFromString(std::string const argument)
{
	is_single_char(argument);
	is_float(argument);
}

void	Converting::make_conversions(std::string const argument)
{
	getRealTypeFromString(argument);
}

std::string         Converting::getArgument() const
{
    return (this->_argument);
}

bool         Converting::getDotStatus() const
{
    return (this->_dot);
}

int         Converting::getInting() const
{
    return (this->_inting);
}

float         Converting::getFloating() const
{
    return (this->_floating);
}

double         Converting::getDoubling() const
{
	// std::cout << "weeeeesh " << this->_doubling << std::endl;
    return (this->_doubling);
}

char         Converting::getCharing() const
{
    return (this->_charing);
}

bool         Converting::getDispChar() const
{
    return (this->_NonDisplayableChar);
}

bool         Converting::getmaxInt() const
{
    return (this->_maxInt);
}

bool         Converting::getImpoFloat() const
{
    return (this->_impossbileFloat);
}

bool         Converting::getImpoDouble() const
{
    return (this->_impossbileDouble);
}

bool         Converting::getnanOrInf() const
{
    return (this->_nanorInf);
}

Converting&    Converting::operator=( Converting const & rhs)
{
    this->_signed = rhs._signed;
    this->_dot = rhs._dot;
    this->_ef = rhs._ef;
    // std::cout << "Converting :: Assignation operator " << std::endl;
    // std::cout << "RHS GRADE" << rhs._grade << std::endl;
    
    return *this;

}

std::ostream& operator<<(std::ostream& o, Converting const& rhs)
{
    // std::cout << " Copy assignment operator called" << std::endl;
	if (rhs.getDispChar() == true)
		o << "char: Non displayable" << std::endl;
	else if (rhs.getImpoDouble() == true || rhs.getImpoFloat() == true)
		o << "char: impossible" << std::endl;
	else
		o << "char: " << rhs.getCharing() << std::endl;
	if (rhs.getImpoDouble() == true || rhs.getImpoFloat() == true || rhs.getmaxInt() == true)
		o << "int: impossible" << std::endl;
	else
		o << "int: " << rhs.getInting() << std::endl;
	o << std::setprecision(1) << std::fixed;
	if (rhs.getmaxInt() == true)
		o << "float: impossible" << std::endl;
	else
		o << "float: " << rhs.getFloating() << "f" << std::endl;
	if (rhs.getmaxInt() == true)
		o << "double: impossible" << std::endl;
	else
		o << "double: " << rhs.getDoubling() << std::endl;
	
	
    return o;
}