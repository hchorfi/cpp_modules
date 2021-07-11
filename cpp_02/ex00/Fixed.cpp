#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called\n";
    *this = src;
}

Fixed &Fixed::operator=(Fixed const &obj)
{
    std::cout << "Assignation operator called\n";
    if (this != &obj)
        this->_fixedPoint = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return this->_fixedPoint;
}


void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    this->_fixedPoint = raw;
}

int _fraction = 8;