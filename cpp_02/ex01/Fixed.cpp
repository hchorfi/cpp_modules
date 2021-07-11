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
    //std::cout << "getRawBits member function called\n";
    return this->_fixedPoint;
}


void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    this->_fixedPoint = raw;
}

Fixed::Fixed(int const val)
{
    std::cout << "Int constructor called\n";
    this->_fixedPoint = val * (1 << this->_fraction);
}

Fixed::Fixed(float const val)
{
    std::cout << "Float constructor called\n";
    this->_fixedPoint = roundf(val * (1 << this->_fraction));
}

float   Fixed::toFloat( void ) const
{
    return ((float)this->_fixedPoint / (float)(1 << this->_fraction));
}

int Fixed::toInt( void ) const
{
    return (roundf(this->_fixedPoint / (1 << this->_fraction)));
}

std::ostream &operator<<(std::ostream &o, Fixed const &obj)
{
    o << obj.toFloat();
    return o;
}

const int Fixed::_fraction = 8;