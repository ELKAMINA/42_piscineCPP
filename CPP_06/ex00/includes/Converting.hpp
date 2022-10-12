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
        bool        getDotStatus() const;
        void        is_single_char(std::string argument);
        void        is_float(std::string argument);
        void        make_conversions(std::string argument);
        void        getRealTypeFromString(std::string argument);
        class AmpossiToConvert : public std::exception
        {
            public: 
                virtual const char* what() const throw()
                {
                    return ("Ampossi to convert!");
                }
        };
        // operator _toFloat(); 
        // operator _toInt();
        // operator _toDouble();
    
    private :
        std::string         _argument;
        int                 _inting;
        char                _charing;
        double              _doubling;
        float               _floating;
        bool                _dot;
        bool                _ef;

};

#endif