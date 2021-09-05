#include "Convert.hpp"

Convert::Convert()
{

}

Convert::Convert(std::string value)
{
    _Value = value;
}

Convert::Convert(const Convert& copy)
{
    *this = copy;
}

Convert& Convert::operator = (const Convert& copy)
{
    if (this != &copy)
    {
        _Value = copy.getValue();
    }
    return *this;
}

void Convert::setValue(std::string value)
{
    _Value = value;
}

std::string Convert::getValue() const
{
    return _Value;
}

void    Convert::printValues()
{
    int intValue = static_cast<int>(*this);
    char charValue = static_cast<char>(*this);
    float floatValue = static_cast<float>(*this);
    double doubleValue = static_cast<double>(*this);
}

Convert::operator int() 
{
    try{
        int intValue = std::stoi(_Value);
        std::cout << "int: " << intValue << "\n";
    }catch (std::invalid_argument){
        std::cout << "int: impossible\n";
    }
    return 1;
}

Convert::operator char() 
{
    
    return '1';
}

Convert::operator double() 
{
    try{
        double doubleValue = std::stod(_Value);
        std::cout << "double: " << std::fixed <<std::setprecision(1) << doubleValue << "\n";
    }catch (std::invalid_argument){
        std::cout << "double: impossible\n";
    }    
    return 1.0;
}

Convert::operator float() 
{
    try{
        float floatValue = std::stof(_Value);
        std::cout << "float: " << std::setprecision(1) << floatValue << "f\n";
    }catch (std::invalid_argument){
        std::cout << "float: impossible\n";
    }
    return 1.0f;
}