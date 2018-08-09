//by Carp-Bezverhnii Maxim
#include "Contacts.class.hpp"

int main()
{
	std::string command;
	Contacts list;

	std::cout << "---Program *Phone Number Book*---" << std::endl;
	while(command != "EXIT")
	{
		
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, command, '\n');
		if (command == "ADD")
		{
			std::string first_name, last_name, phone_number;
			std::cout << "Enter First Name for new contact :" << std::endl;
			std::cin >> first_name;
			std::cout << "Enter Last Name for new contact :" << std::endl;
			std::cin >> last_name;
			std::cout << "Enter phone number for new contact :" << std::endl;
			std::cin >> phone_number;
			list.add_contact(first_name, last_name, phone_number);
			std::cin.ignore(); 
		}
		else if(command == "SEARCH")
		{
			std::string search_str;
			std::cout << "Enter First Name or Last Name which you want to find :" << std::endl;
			std::cin >> search_str;
			list.find_contact(search_str);
			std::cin.ignore(); 
		}
		else if (command != "EXIT" && command != "SEARCH" && command != "ADD")
			std::cout << "Please enter a valid command!\n" << "Only available ADD, SEARCH and EXIT" << std::endl;
	}
	return 0;
}
