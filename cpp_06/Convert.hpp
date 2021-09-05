#ifndef CONVERT_H
#define CONVERT_H

#include <iomanip>
#include <iostream>
#include <stdexcept>

class Convert
{
    private:
        std::string _Value;

    public:
        Convert();
        Convert(std::string value);
        Convert(const Convert& copy);
        Convert& operator = (const Convert& copy);

        std::string getValue() const;
        void    setValue(std::string value);

        void    printValues();

        operator char();
        operator int();
        operator float();
        operator double();
};

#endif