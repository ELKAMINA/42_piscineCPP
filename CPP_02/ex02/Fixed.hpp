#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
    public :
        Fixed( void );
        Fixed( Fixed const& copy );
        Fixed( int const integer);
        Fixed( float const ft); // reverifier le nombre de bits de la partie fractionnaire.
        ~Fixed( void );
        // Surcharge operateur (addition ...)
        Fixed & operator=(Fixed const & rhs);
        Fixed operator+(Fixed const & rhs);
        Fixed   operator-(Fixed const & rhs);
        Fixed   operator*(Fixed const & rhs);
        Fixed   operator/(Fixed const & rhs);
        // Surcharge operateur (incrementation  ...)
        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);
        // Surcharge operateur (Comparaison  ...)
        bool    operator<(Fixed const & rhs);
        bool    operator>(Fixed const & rhs);
        bool    operator>=(Fixed const & rhs);
        bool    operator<=(Fixed const & rhs);
        bool    operator==(Fixed const & rhs);
        bool    operator!=(Fixed const & rhs);
        int                 getRawBits( void ) const; //retourne la valeur du nbre à virgule fixe sans la convertir
        void                 setRawBits( int const raw ); //initialise la valeur du nombre à virgule fixe avec celle passée en param

        float               toFloat( void ) const; // convertit la valeur en virgule fixe en nbre à virgule flottante
        int                 toInt( void )const;// convertit la valeur en virgule fixe en nbre entier
        static Fixed&             min(Fixed& left, Fixed& right);
        static Fixed const        &min(Fixed const &left, Fixed const &right);
        static Fixed const        &max(Fixed const &left, Fixed const &right);
        static Fixed&             max(Fixed& left, Fixed& right);
        
    private : 
        int                 _fixed_nb;
        static int const    _bits_nb; //stocker le nb de bits de la partie fractionnaire et dont la valeur sera toujours le littéral entier 8
};

std::ostream & operator<<( std::ostream & o, Fixed const& rhs);

#endif
