#include "iostream"
#include "string"
#include "iomanip"

class Contact
{
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

		Contact(void);
		~Contact(void);
};

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
	public:
		PhoneBook(void){index = 0;};
		void	add(void)
		{
			std::cout << "Enter first name: ";
			std::cin >> contacts[index].firstname;
			std::cout << "\nEnter last name: ";
			std::cin >> contacts[index].lastname;
			std::cout << "\nEnter nickname: ";
			std::cin >> contacts[index].nickname;
			std::cout << "\nEnter phone number: ";
			std::cin >> contacts[index].phone_number;
			std::cout << "\nEnter darkest secret: ";
			std::cin >> contacts[index].darkest_secret;
			index++;
		};
		void	search(void)
		{
			std::cout << std::setw(10) << std::right << "INDEX" 
						<< "|" << std::setw(10) << "FIRST NAME"
						<< "|" << std::setw(10) << "LAST NAME"
						<< "|" << std::setw(10) << "NICKNAME"
						<< "|" << std::endl;
			for(int i = 0; i < 8; i++)
			{
				std::cout << std::setw(10) << std::right << i + 1
						<< "|" << std::setw(10) << contacts[i].firstname
						<< "|" << std::setw(10) << contacts[i].lastname
						<< "|" << std::setw(10) << contacts[i].nickname
						<< "|" << std::endl;
			}
		}
		~PhoneBook(void);
};


int	main()
{
	std::cout << "--PHONEBOOK--";
	std::string command;
	std::cout << "\n--> ";
	std::cin >> command;

	PhoneBook phonebook;
	while (command != "EXIT")
	{
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << "\nCOMMAND NOT FOUND. TRY AGAIN.";
		std::cout << "\n--> ";
		std::cin >> command;
	}
	return (0);
}