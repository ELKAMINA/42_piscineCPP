#ifndef  BASE_CLASS_HPP
# define BASE_CLASS_HPP
#include <climits>
#include <cmath>
#include <iostream>
#include <string>

class Base
{
	public:
        // Base();
        // Base(Base const& twin);
        // Base(std::string argument);
        // Base& operator=(Base const & rhs);
        virtual ~Base();

};


void    identify(Base* p);
void    identify(Base& p);

// std::ostream & operator<<( std::ostream & o, Base const& rhs);

#endif