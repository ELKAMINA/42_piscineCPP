#include "./Fixed.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>
#include <math.h>

//Shifting left =  the most significant bit is lost and a 0 bit is inserted on the other end -- << is multiply. Ex : 10 << 8 means 10 * 2^8;
//Shifting right =  the least significant bit is lost and a the most significant bit is copied -- >> is divide. Ex : 10 >> 8 means 10 / 2^8;
// Bon lien to understand : https://www.youtube.com/watch?v=Jlv1lIYqiaQ && https://www.youtube.com/watch?v=KXwRt7og0gI

// Good to know : https://medium.com/incredible-coder/converting-fixed-point-to-floating-point-format-and-vice-versa-6cbc0e32544e

Fixed::Fixed( void ) : _fixed_nb(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& src )
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed( int const integer ) // 32 bits - Range of Representation : [0, 4.295.967.295]
{
    // std::cout << "Int Constructor called" << std::endl;
    this->_fixed_nb = integer << this->_bits_nb;
    return ;    
}

Fixed::Fixed( float const ft ) // 32 bits - Range of Representation : [0, 4.295.967.295]
{
    // std::cout << "Float Constructor called" << std::endl;
    this->_fixed_nb = roundf(ft * (1 << this->_bits_nb));
    return ;    
}

Fixed::~Fixed( void )
{
    // std::cout << "Destructor called" << std::endl;
}
/*                              OPERATEURS DASSIGNATION    */
Fixed&    Fixed::operator=( Fixed const & rhs) // returnType operator symbol (arguments)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_nb = rhs._fixed_nb;
    return *this;
}

Fixed    Fixed::operator+( Fixed const & rhs) // returnType operator symbol (arguments)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed   Fixed::operator-( Fixed const & rhs) // returnType operator symbol (arguments)
{
    // std::cout << "Copy assignment operator called" << std::endl;
   return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed    Fixed::operator*( Fixed const & rhs) // returnType operator symbol (arguments)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed    Fixed::operator/( Fixed const & rhs) // returnType operator symbol (arguments)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    return Fixed(this->toFloat() / rhs.toFloat());
}

/*                              INCREMENTATION AND DECREMENTATION     */
//Prefix
Fixed&   Fixed::operator++(void)
{
    // std::cout << "Prefix incrementation operator called" << std::endl;
    this->_fixed_nb++;
    return *this;
}
//Postfix
Fixed    Fixed::operator++(int)
{
    // std::cout << "Postfix incrementation operator called" << std::endl;
    Fixed temporaire = *this;
    this->_fixed_nb++;
    return temporaire;
}

//Prefix
Fixed&   Fixed::operator--(void)
{
    // std::cout << "Prefix incrementation operator called" << std::endl;
    this->_fixed_nb--;
    return *this;
}

//Postfix
Fixed    Fixed::operator--(int)
{
    // std::cout << "Postfix incrementation operator called" << std::endl;
    Fixed temporaire = *this;
    this->_fixed_nb--;
    return temporaire;
}

/*                              COMPARISON    */
bool    Fixed::operator>(Fixed const & rhs)
{
    if  (this->_fixed_nb > rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<(Fixed const & rhs)
{
    if  (this->_fixed_nb < rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed const & rhs)
{
    if  (this->_fixed_nb <= rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed const & rhs)
{
    if  (this->_fixed_nb >= rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator!=(Fixed const & rhs)
{
    if  (this->_fixed_nb != rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator==(Fixed const & rhs)
{
    if  (this->_fixed_nb == rhs.getRawBits())
        return true;
    return false;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_nb;
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_nb = raw;
}


float Fixed::toFloat( void ) const
{
    return ((float)this->_fixed_nb / (1 << _bits_nb));
}

int Fixed::toInt( void ) const
{
    return (this->_fixed_nb / (1 << _bits_nb));
}

Fixed& Fixed::min(Fixed &left, Fixed &right)
{
    if (left.getRawBits() < right.getRawBits())
        return left;
    return (right);
}

Fixed const &Fixed::min(Fixed const  &left, Fixed const  &right)
{
    if (left.getRawBits() < right.getRawBits())
        return left;
    return (right);
}

Fixed& Fixed::max(Fixed &left, Fixed &right)
{
    if (left.getRawBits() < right.getRawBits())
        return right;
    return (left);
}

Fixed const &Fixed::max(Fixed const  &left, Fixed const  &right)
{
    if (left.getRawBits() < right.getRawBits())
        return right;
    return (left);
}

std::ostream& operator<<(std::ostream& o, Fixed const & rhs)
{
    // std::cout << " Copy assignment operator called" << std::endl;
    o << rhs.toFloat();// Fonction qui transforme le nb a virgule fixe en virgule flottante
    return o;
}

int const    Fixed::_bits_nb = 8;