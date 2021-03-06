#ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

#include "Contact.hpp"
#define NumOfContacts 8

class PhoneBook {
	public:
		std::string command;
		Contact InContact[NumOfContacts];
		int	ContactAdded;

		PhoneBook(void);
		~PhoneBook(void);

		void    GetCommand(void);
		void	AddContact(void);
		void	SearchContact(void);
		void	PrintSearchHeader(void) const;
		void	PrintContactInfo(int index) const;

	private:

};

#endif
