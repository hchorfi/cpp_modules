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
    float floatValue = static_cast<float>(*this);
    double doubleValue = static_cast<double>(*this);
    (void)intValue, (void)doubleValue, (void)floatValue;
}

Convert::operator int() 
{
    try{
        if (_Value.length() == 1)
        {
            if (static_cast<int>(_Value[0]) >= 48 && static_cast<int>(_Value[0]) <= 57 )
            {
                std::cout << "int: " << std::stoi(_Value)<< "\n";
                std::cout << "char: Non displayable\n";
            } else 
            {
                std::cout << "int: " << static_cast<int>(_Value[0])<< "\n";
                std::cout << "char: '" << static_cast<char>(_Value[0])<< "'\n";
            }
        } else
        {
            int intValue = std::stoi(_Value);
            std::cout << "int: " << intValue << "\n";
            if (std::isprint(intValue))
                std::cout << "char: '" << static_cast<char>(intValue) << "'\n";
            else
                throw std::string("char: Non displayable\n");
        }
    } catch (std::invalid_argument){
        std::cout << "int: impossible\n";
        std::cout << "char: impossible\n";
    } catch (std::out_of_range){
        std::cout << "int: impossible\n";
        std::cout << "char: impossible\n";
    } catch (const std::string e){
        std::cout << e;
    }
    return 1;
}

// Convert::operator char() 
// {
    
//     return '1';
// }

Convert::operator double() 
{
    try{
        if (_Value.length() == 1 )
        {
            if (static_cast<int>(_Value[0]) >= 48 && static_cast<int>(_Value[0]) <= 57 )
            {
                std::cout << "double: " << std::stod(_Value)<< "\n";
            } else 
            {
                std::cout << "double: " << std::fixed <<std::setprecision(1) << static_cast<double>(_Value[0])<< "\n";
            }
        } else {
            double doubleValue = std::stod(_Value);
            std::cout << "double: " << std::fixed <<std::setprecision(1) << doubleValue << "\n";
        }
    } catch (std::invalid_argument){
        std::cout << "double: impossible\n";
    } catch (std::out_of_range){
        std::cout << "double: impossible\n";
    }   
    return 1.0;
}

Convert::operator float() 
{
    try{
        if (_Value.length() == 1)
        {
            if (static_cast<int>(_Value[0]) >= 48 && static_cast<int>(_Value[0]) <= 57 )
            {
                std::cout << "float: " << std::stof(_Value)<< "f\n";
            } else 
            {
                std::cout << "float: " << std::fixed <<std::setprecision(1) << static_cast<float>(_Value[0])<< "f\n";
            }
        } else {
            float floatValue = std::stof(_Value);
            std::cout << "float: " << std::fixed <<std::setprecision(1) << floatValue << "f\n";
        }
    } catch (std::invalid_argument){
        std::cout << "float: impossible\n";
    } catch (std::out_of_range){
        std::cout << "float: impossible\n";
    } 
    return 1.0f;
}