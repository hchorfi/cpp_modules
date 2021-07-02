#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->ContactAdded = 0;
    this->GetCommand();
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Adios Amigos\n";
    std::cout << "   ⊂_ヽ\n";
    std::cout << "     ＼＼\n";
    std::cout << "       ＼( ͡° ͜ʖ ͡°)\n";
    std::cout << "         >　 ⌒ ヽ\n";
    std::cout << "        / 　 へ＼\n";
    std::cout << "       /　　/　＼＼\n";
    std::cout << "       ﾚ　ノ　　 ヽ_つ\n";
    std::cout << "      /　/\n";
    std::cout << "     /　/|\n";
    std::cout << "    (　(ヽ\n";
    std::cout << "    |　|、＼\n";
    std::cout << "    | 丿 ＼ ⌒)\n";
    std::cout << "    | |　　) /\n";
    std::cout << "  ノ )　　Lﾉ\n";
    std::cout << "  (_／\n";
    return;
}

void    PhoneBook::GetCommand(void)
{
    std::cout << Green << "Please Enter Your Command: ADD-SEARCH-EXIT\n" << Reset;
    while (std::getline(std::cin, this->command))
    {
        if (!(this->command.compare("ADD")))
            this->AddContact();
        else if (!(this->command.compare("SEARCH")))
            this->SearchContact();
        else if (!(this->command.compare("EXIT")))
            break ;
        else if (!(this->command.compare("")))
            continue ;
        else
        {
            std::cout << Red << "(�_�) : Please Enter A Valid Command: 'ADD, SEARCH or EXIT'\n" << Reset;
            continue ;
        }
        std::cout << Green << "Please Enter Your Command: ADD-SEARCH-EXIT\n" << Reset;
    }
}

void	PhoneBook::AddContact(void)
{
    std::string infos;
    if (this->ContactAdded == NumOfContacts)
        this->ContactAdded = 0;
    std::cout << Blue << "\nPlease Enter The informations for the New Contact:\n" << Reset;
    std::cout << Blue << "\nEnter the First Name:\n" << Reset;
    std::getline(std::cin, infos);
    this->InContact[this->ContactAdded].SetString(infos, FIRST);
    infos.clear();
    std::cout << Blue << "\nEnter the Last Name:\n" << Reset;
    std::getline(std::cin, infos);
    this->InContact[this->ContactAdded].SetString(infos, LAST);
    infos.clear();
    std::cout << Blue << "\nEnter the Phone Number:\n" << Reset;
    std::getline(std::cin, infos);
    this->InContact[this->ContactAdded].SetString(infos, PHONE);
    infos.clear();
    std::cout << Blue << "\nEnter the Nickname:\n" << Reset;
    std::getline(std::cin, infos);
    this->InContact[this->ContactAdded].SetString(infos, NICK);
    infos.clear();
    std::cout << Blue << "\nEnter the Secret:\n" << Reset;
    std::getline(std::cin, infos);
    this->InContact[this->ContactAdded].SetString(infos, DARKEST);
    infos.clear();
    this->InContact[this->ContactAdded].id = this->ContactAdded + 1;
    this->ContactAdded++;
}

void    PhoneBook::PrintSearchHeader(void) const
{
    std::cout << "\n";
    std::cout << std::right << std::setw(10) << "Index";
    std::cout << " | ";
    std::cout << std::right << std::setw(10) << "first name";
    std::cout << " | ";
    std::cout << std::right << std::setw(10) << "last name";
    std::cout << " | ";
    std::cout << std::right << std::setw(11) << "nickname\n";
    for (int i = 0 ; i < (4 * 10) + (3*3); i++)
        std::cout << "_";
    std::cout << "\n\n";
}

void    PhoneBook::PrintContactInfo(int index) const
{
    if (this->InContact[index - 1].id != 0 && this->InContact[index - 1].id == index)
    {
        std::cout << "\n";
        std::cout << std::left << std::setw(20) << "First Name" << ":" << this->InContact[index - 1].GetString(FIRST) << "\n";
        std::cout << std::left << std::setw(20) << "Last Name" << ":" << this->InContact[index - 1].GetString(LAST) << "\n";
        std::cout << std::left << std::setw(20) << "Nickname" << ":" << this->InContact[index - 1].GetString(NICK) << "\n";
        std::cout << std::left << std::setw(20) << "Phone Number" << ":" << this->InContact[index - 1].GetString(PHONE) << "\n";
        std::cout << std::left << std::setw(20) << "Darckest Secret" << ":" << this->InContact[index - 1].GetString(DARKEST) << "\n";
        std::cout << "\n";
    }
    else
        std::cout << Red << "\nNo Contact Found\n" << Reset;
}

void	PhoneBook::SearchContact(void)
{
    int i = 0;
    int index;

    this->PrintSearchHeader();

    while (i < NumOfContacts && this->InContact[i].id > 0)
    {
        std::cout << std::right << std::setw(10) << this->InContact[i].id;
        std::cout << " | ";
        if (this->InContact[i].GetString(FIRST).length() > 10)
            std::cout << std::right << std::setw(10) << this->InContact[i].GetString(FIRST).substr(0, 9) + ".";
        else
            std::cout << std::right << std::setw(10) << this->InContact[i].GetString(FIRST);
        std::cout << " | ";
        if (this->InContact[i].GetString(LAST).length() > 10)
            std::cout << std::right << std::setw(10) << this->InContact[i].GetString(LAST).substr(0, 9) + ".";
        else
            std::cout << std::right << std::setw(10) << this->InContact[i].GetString(LAST);
        std::cout << " | ";
        if (this->InContact[i].GetString(NICK).length() > 10)
            std::cout << std::right << std::setw(10) << this->InContact[i].GetString(NICK).substr(0, 9) + "." << "\n";
        else
            std::cout << std::right << std::setw(10) << this->InContact[i].GetString(NICK) << "\n";
        i++;
    }

    std::cout << Yellow << "\nPlease Insert Contact's Index : 1->"<< NumOfContacts <<"\n" << Reset;
    std::cin >> index;
    if (std::cin.good())
    {
        if (index < 0 || index > NumOfContacts)
            std::cout << Red << "\nOut Of Range\n" << Reset;
        else
            this->PrintContactInfo(index);
    }
    else
    {
        std::cin.clear();
        std::cin.ignore(2147483647, '\n');
        std::cout << Red << "Wrong input\n" << Reset;
    }    
}