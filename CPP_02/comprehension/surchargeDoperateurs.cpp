#include "./surchargeDoperateurs.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>

Integer::Integer(const int n) : _n(n)
{
    std::cout << "Constructeur" << std::endl;
}

Integer::~Integer()
{
    std::cout << "Destructeur" << this->_n << std::endl;
}

int Integer::getValue( void ) const
{
    return this->_n;
}

Integer&    Integer::operator=( Integer const & rhs)
{
    std::cout << "Assignation operator called from " << this->_n;
    std::cout << "to " << rhs.getValue() << std::endl;

    this->_n = rhs.getValue();
    return *this;
}

Integer    Integer::operator+( Integer const & rhs) const
{
    std::cout << "Assignation operator called with " << this->_n;
    std::cout << "and " << rhs.getValue() << std::endl;

    return Integer( this->_n + rhs.getValue());
}

std::ostream& operator<<(std::ostream& o, Integer const & rhs)
{
    o << rhs.getValue();
    return o;
}
