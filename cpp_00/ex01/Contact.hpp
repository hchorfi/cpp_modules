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