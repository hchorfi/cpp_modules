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
    std::cout << "Please Enter Your Command:\n";
    while (std::getline(std::cin, this->command))
    {
        if (!(this->command.compare("ADD")))
        {
            this->AddContact();
        }
        else if (!(this->command.compare("SEARCH")))
        {
            this->SearchContact();
        }
        else if (!(this->command.compare("EXIT")))
        {
            break ;
        }
        else if (!(this->command.compare("")))
        {
            continue ;
        }
        else
        {
            std::cout << "(�_�) : Please Enter A Valid Command: 'ADD, SEARCH or EXIT'\n";
            continue ;
        }
        std::cout << "Please Enter Your Command:\n";
    }
}

void	PhoneBook::AddContact(void)
{
    std::string infos;
    if (this->ContactAdded == NumOfContacts)
    {
        this->ContactAdded = 0;
    }
    std::cout << "Please Enter The informations for the Contact Number " << this->ContactAdded + 1 << "\n";
    std::cout << "Enter the First Name:\n";
    std::cin >> infos;
    this->InContact[this->ContactAdded].SetString(infos, FIRST);
    std::cout << "Enter the Last Name:\n";
    std::cin >> infos;
    this->InContact[this->ContactAdded].SetString(infos, LAST);
    std::cout << "Enter the Phone Number:\n";
    std::cin >> infos;
    this->InContact[this->ContactAdded].SetString(infos, PHONE);
    std::cout << "Enter the Nickname:\n";
    std::cin >> infos;
    this->InContact[this->ContactAdded].SetString(infos, NICK);
    std::cout << "Enter the Secret:\n";
    std::cin >> infos;
    this->InContact[this->ContactAdded].SetString(infos, DARKEST);
    if (this->InContact[this->ContactAdded].id > NumOfContacts)
    this->InContact[this->ContactAdded].id += this->ContactAdded + 1;
    this->ContactAdded++;
}

void    PhoneBook::PrintSearchHeader(void) const
{
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

void	PhoneBook::SearchContact(void)
{
    int i = 0;
    int index;

    this->PrintSearchHeader();

    while (i < NumOfContacts)
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

    std::cout << "Please Insert Contact's Index :\n";
    std::cin >> index;
    if (index)
        std::cout << index;
}