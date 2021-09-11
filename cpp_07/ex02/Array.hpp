#ifndef ARRAY_H
#define ARRAY_H

#include <iomanip>
#include <iostream>
#include <stdexcept>

template <class T>
class Array
{
    private:
        T *_Arr;
        unsigned int _Size;
    public:
        Array(){
            try {
                _Arr = new T(); // ampty T type array
                _Size = 0;
            } catch (const std::bad_alloc& e) {
                std::cout << "Allocation failed: " << e.what() << '\n';
            }
        }

        Array(unsigned int n){
            try {
                _Arr = new T[n]; // size n T type array 
                for (unsigned int i = 0; i < n ; i++)
                    _Arr[i] = T(); //initialize by default value 
                _Size = n;
            } catch (const std::bad_alloc& e) {
                std::cout << "Allocation failed: " << e.what() << '\n';
            }
        }

        Array(const Array &copy){
            *this = copy;
        }

        Array& operator = (const Array &copy) {
            if (copy._Size == 0)
            {
                try {
                    this->_Arr = new T(); // ampty T type array
                    this->_Size = 0;
                } catch (const std::bad_alloc& e) {
                    std::cout << "Allocation failed: " << e.what() << '\n';
                }
            } else {
                try {
                    this->_Arr = new T[copy._Size]; // size n T type array 
                    for (unsigned int i = 0; i < copy._Size ; i++)
                        this->_Arr[i] = copy._Arr[i]; //copy values
                    this->_Size = copy._Size;
                } catch (const std::bad_alloc& e) {
                    std::cout << "Allocation failed: " << e.what() << '\n';
                }
            }
            return *this;
        }

        unsigned int Size() const{
            return this->_Size;
        }

        T* getArr(){
            return this->_Arr;
        }

        T& operator [] (unsigned int i){
            if (i < 0 || i >= this->_Size)
                throw std::out_of_range("out of range");
            return _Arr[i];
        }

        ~Array(){
            delete[] this->_Arr;
        }
};

template <typename T>
std::ostream& operator << (std::ostream& os, Array<T> &obj){
    unsigned int j = obj.Size();
    T *ptr = obj.getArr();
    os << "size : " << j << "\n";
    for (unsigned int i = 0; i < j ; i ++){
        os << "'" << ptr[i] << "'\n";
    }
    return os;
};



#endif