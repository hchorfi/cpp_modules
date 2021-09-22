#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iomanip>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>

template <class T, class Container = std::deque<T> >
class Mutantstack : public std::stack <T, Container>
{
    private:
        
    public:
        typedef typename Mutantstack<T>::container_type::iterator iterator;
        Mutantstack(){};
        ~Mutantstack(){};
        Mutantstack(const Mutantstack<T, Container> &copy) : std::stack <T, Container>(copy){
            *this = &copy;
        };
        Mutantstack<T, Container>& operator = (const Mutantstack<T, Container> &copy){
            this->c = copy.c;
            return *this;
        };
        iterator begin(){
            return this->c.begin();
        };
        iterator end(){
            return this->c.end();
        };
        // void push (const T &val)
        // {
        //     this->c.push_front(val);
        // }
        // void pop ()
        // {
        //     this->c.pop_front();
        // }
        // T& top(){
        //     return this->c.front();
        // }
};

#endif