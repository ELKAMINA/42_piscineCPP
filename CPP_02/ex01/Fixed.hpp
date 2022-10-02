#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
    public :
        Fixed( void );
        Fixed( Fixed const& copy );
        Fixed( int const integer);
        // Fixed( float const itg); // reverifier le nombre de bits de la partie fractionnaire.
        ~Fixed( void );
        Fixed & operator=(Fixed const & rhs);
        int                 getRawBits( void ) const; //retourne la valeur du nbre à virgule fixe sans la convertir
        void                 setRawBits( int const raw ); //initialise la valeur du nombre à virgule fixe avec celle passée en param
        // float               toFloat( void ) const; // convertit la valeur en virgule fixe en nbre à virgule flottante
        // int                 toInt( void )const;// convertit la valeur en virgule fixe en nbre entier
    private : 
        int                 _fixed_nb;
        static int const    _bits_nb; //stocker le nb de bits de la partie fractionnaire et dont la valeur sera toujours le littéral entier 8
};

std::ostream & operator<<( std::ostream & o, Fixed const& rhs);

#endif
