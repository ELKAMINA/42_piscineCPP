#include <iostream>
#include <cstring>
#include "./Fixed.hpp"

int main( void ) 
{
	Fixed a;
	// Fixed c;
	// Fixed r;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a is : " << a << std::endl;
	std::cout << "++a is : "<< ++a << std::endl;
	// std::cout << "c++ is : "<< c++ << std::endl;
	// std::cout << "r++ is : "<< r++ << std::endl;
	// std::cout << "r + c is : "<< c / r << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}