#include "Contact.hpp"

Contact::Contact(void)
{
    //std::cout << this.id << " contact constructor called\n";
    return;
}

Contact::~Contact(void){return;}

std::string Contact::GetString(int label) const
{
    if (label == FIRST)
        return (this->FirstName);
    else if (label == LAST)
        return (this->LastName);
    else if (label == NICK)
        return (this->Nickname);
    else if (label == PHONE)
        return (this->PhoneNumber);
    else if (label == DARKEST)
        return (this->DarkestSecret);
    return NULL;
}

void    Contact::SetString(std::string infos, int label)
{
    if (label == FIRST)
        this->FirstName = infos;
    else if (label == LAST)
        this->LastName = infos;
    else if (label == NICK)
        this->Nickname = infos;
    else if (label == PHONE)
        this->PhoneNumber = infos;
    else if (label == DARKEST)
        this->DarkestSecret = infos;
}
