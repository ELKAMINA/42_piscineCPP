#include "./Fixed.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>

//Shifting left =  the most significant bit is lost and a 0 bit is inserted on the other end -- << is multiply. Ex : 10 << 8 means 10 * 2^8;
//Shifting right =  the least significant bit is lost and a the most significant bit is copied -- >> is divide. Ex : 10 >> 8 means 10 / 2^8;
// Bon lien to understand : https://www.youtube.com/watch?v=Jlv1lIYqiaQ && https://www.youtube.com/watch?v=KXwRt7og0gI
Fixed::Fixed( void ) : _fixed_nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed( int const integer ) // 32 bits - Range of Representation : [0, 4.295.967.295]
{
    std::cout << "Constructor wIth parameters called" << std::endl;
    this->_fixed_nb = integer << this->_bits_nb;
    return ;    
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&    Fixed::operator=( Fixed const & rhs) // returnType operator symbol (arguments)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_nb = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_bits_nb;
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_nb = raw;
}

int const    Fixed::_bits_nb = 8;

std::ostream& operator<<(std::ostream& o, Fixed const & rhs)
{
    std::cout << " Copy assignment operator called" << std::endl;
    o << rhs.getRawBits();
    return o;
}
