#ifndef  A_B_C_CLASS_HPP
# define A_B_C_CLASS_HPP
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include "./Base.hpp"


class A : public Base
{
	public:
        virtual ~A();
    class NotMyType : public std::exception
    {
        public: 
            virtual const char* what() const throw()
            {
                return ("A : Not my tyyype Dude!");
            }
    };
};

class B : public Base
{
	public:
        virtual ~B();
    class NotMyType : public std::exception
    {
        public: 
        virtual const char* what() const throw()
        {
            return ("B : Not my tyyype Dude!");
        }
    };
};

class C : public Base
{
	public:
        virtual ~C();
        class NotMyType : public std::exception
    {
    public: 
        virtual const char* what() const throw()
        {
            return ("C : Not my tyyype Dude!");
        }
    };
};


// std::ostream & operator<<( std::ostream & o, Base const& rhs);

#endif