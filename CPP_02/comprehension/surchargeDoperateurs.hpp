#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H
#include <iostream>

class Integer
{
    public :
        Integer( int const n );
        ~Integer( void );

        int  getValue( void ) const;

         /* 2 surcharges d'operateur */
            // Operator = Symbole indiquand une operation : mot-clé qui fait d'une simple déclaration de fct membre, une surcharge d'opérateurs.
            // Differents types dopérateurs : unaire (a = -10), binaire, ternaire
        Integer & operator=(Integer const & rhs); // operateur d'assignation = binaire
        Integer  operator+(Integer const & rhs) const;
    
    private :
        int _n;


};

std::ostream & operator<<( std::ostream & o, Integer const& rhs);

#endif