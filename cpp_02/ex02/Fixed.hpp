#ifndef FIXED_H
#define FIXED_H

# include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const &src);
        Fixed &operator=(Fixed const &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed(int const val);
        Fixed(float const val);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed operator * (Fixed const &obj) const;
        Fixed operator + (Fixed const &obj) const;
        Fixed operator - (Fixed const &obj) const;
        Fixed operator / (Fixed const &obj) const;
        bool operator < (Fixed const &obj) const;
        bool operator > (Fixed const &obj) const;
        bool operator >= (Fixed const &obj) const;
        bool operator <= (Fixed const &obj) const;
        bool operator == (Fixed const &obj) const;
        bool operator != (Fixed const &obj) const;
        static Fixed min(Fixed const &obj, Fixed const &obj2);
        static Fixed max(Fixed const &obj, Fixed const &obj2);
        Fixed operator++ (void);
        Fixed operator++ (int);
        Fixed operator-- (void);
        Fixed operator-- (int);

    private:
        int _fixedPoint;
        static const int _fraction;

};

std::ostream &operator<<(std::ostream &o, Fixed const &obj);

#endif