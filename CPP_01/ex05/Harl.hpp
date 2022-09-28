#ifndef	HARL_CLASS_HPP
# define HARL_CLASS_HPP
#include <string>


class Harl
{
	public :

		void (Harl::* fptr[4])( void );
		Harl( void );
		~Harl ( void );
		void complain( std::string level );
	
	private :

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif