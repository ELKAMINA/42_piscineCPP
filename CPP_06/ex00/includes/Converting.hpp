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
        bool        getDispChar() const;
        bool        getmaxInt () const;
        bool        getImpoFloat() const;
        bool        getImpoDouble() const;
        bool        getnanOrInf() const;
        bool        getDotStatus() const;
        bool        getMaxDouble() const;
        bool        getMaxFloat() const;
        void        is_single_char(std::string const argument);
        void        is_float(std::string const argument);
        void        is_double(std::string const argument);
        void        is_int(std::string const argument);
        void        printable_char(char c);
        void        make_conversions(std::string const argument);
        void        getRealTypeFromString(std::string const argument);
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
        bool                _signed;
        bool                _maxInt;
        bool                _maxFloat;
        bool                _maxDouble;
        bool                _NonDisplayableChar;
        bool                _impossbileFloat;
        bool                _impossbileDouble;
        bool                _nanorInf;

};

std::ostream & operator<<( std::ostream & o, Converting const& rhs);

#endif