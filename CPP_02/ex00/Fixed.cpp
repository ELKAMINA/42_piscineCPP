#include "./Fixed.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>

Fixed::Fixed( void ) : _number(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&    Fixed::operator=( Fixed const & rhs) // returnType operator symbol (arguments)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_number = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_bits_nb;
}

void Fixed::setRawBits( int const raw )
{
    this->_number = raw;
}

int const    Fixed::_bits_nb = 0;

std::ostream& operator<<(std::ostream& o, Fixed const & rhs)
{
    o << rhs.getRawBits();
    return o;
}
