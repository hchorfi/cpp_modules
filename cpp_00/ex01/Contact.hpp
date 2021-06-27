#ifndef CONTACT_CLASS_H

# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

#define	FIRST 1
#define	LAST 2
#define NICK 3
#define PHONE 4
#define DARKEST 5
#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Reset "\033[0m"

class Contact {
    public:
        int id;
        Contact(void);
        ~Contact(void);
        std::string GetString(int label) const;
        void SetString(std::string infos, int label);

    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
};

#endif