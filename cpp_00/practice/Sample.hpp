#ifndef SAMPLE_H
# define SAMPLE_H

#include <iostream>

class   Sample {

    public:

        int var;

        Sample( void );
        ~Sample ( void );

        void    fun(void);
    
    private:

        int _var;

        void    _fun(void) const;
};

class   Sample2 {
    public:

    char            var1;
    int             var2;
    float   const   var3;
    int             var4;

    Sample2(char a, int b, float const c);
    ~Sample2(void);
};

#endif
