#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <iomanip>

#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Reset "\033[0m"

class Karen
{
    private:
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );

    public:
        Karen(void);
        ~Karen(void);
        void complain( std::string level );
    
};

#endif