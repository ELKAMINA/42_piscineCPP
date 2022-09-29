#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
    public :
        Fixed( void );
        Fixed( Fixed const& copy );
        ~Fixed( void );
        Fixed & operator=(Fixed const & rhs);
        int                 getRawBits( void ) const; //retourne la valeur du nbre à virgule fixe sans la convertir
        void                 setRawBits( int const raw ); //initialise la valeur du nombre à virgule fixe avec celle passée en param

    private : 
        int                 _number;
        static int const    _bits_nb; //stocker le nb de bits de la partie fractionnaire et dont la valeur sera toujours le littéral entier 8
};

#endif
