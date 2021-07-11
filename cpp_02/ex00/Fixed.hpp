#ifndef FIXED_H
#define FIXED_H

# include <iostream>

class Fixed
{
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const &src);
        Fixed &operator=(Fixed const &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int _fixedPoint;
        static const int _fraction;

};

#endif