#ifndef CONVERTING_CLASS_HPP
# define CONVERTING_CLASS_HPP
#include <climits>
#include <cmath>
#include <iostream>
#include <string>


class Converting
{
	public:
        Converting();
        Converting(Converting const& twin);
        Converting(std::string argument);
        Converting& operator=(Converting const & rhs);
        virtual ~Converting();
        std::string getArgument() const;
        int         getInting() const;
        char        getCharing() const;
        float       getFloating() const;
        double      getDoubling() const;
        operator float(); 
        operator int();
        operator double();
    
    private :
        std::string         _argument;
        int                 _inting;
        char                _charing;
        double              _doubling;
        float               _floating;

};

#endif