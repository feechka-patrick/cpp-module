#include "string"

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact(void);
		~Contact(void);
};

class PhoneBook
{
	private:
		Contact *contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
};