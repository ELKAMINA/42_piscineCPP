#ifndef	HARL_CLASS_HPP
# define HARL_CLASS_HPP
#include <string>

enum	options
{
	DEBUG,
	WARNING,
	ERROR,
	INFO
};

class Harl
{
	public :

		Harl( void );
		~Harl ( void );
		void complain( std::string level );
		std::string capitalise(std::string leve);

	private :

		void (Harl::*fptr [4])( void );
		std::string	levels[4];
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif