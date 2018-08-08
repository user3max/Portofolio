//by Carp-Bezverhnii Maxim
#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

struct node {
	std::string first_name;
	std::string last_name;
	std::string phone_number;
    node *next;
};

class Contacts
{
	node *head, *tail;
public:
	Contacts()
	{
		head = NULL;
		tail = NULL;
	}

	void add_contact(std::string fName, std::string lName, std::string phNum)
	{
		node *tmp = new node;
		tmp->first_name = fName;
		tmp->last_name = lName;
		tmp->phone_number = phNum;
		tmp->next = NULL;
		if(head == NULL)
		{
			head = tmp;
			tail = tmp;
			tmp = NULL;
		}
		else
		{
			tail->next = tmp;
			tail = tmp;
		}
	}

	void find_contact(std::string value)
	{
		node *search = head;
		int found = 0;

		while(search != NULL)
		{
			if(search->first_name == value)
			{
				std::cout << "Search result for " << search->first_name << std::endl;
				std::cout << "First name : "<< search->first_name << std::endl;
				std::cout << "Last name : " << search->last_name << std::endl;
				std::cout << "Phone number : " << search->phone_number << std::endl;
				found = 1;
				break;
			}
			else if(search->last_name == value)
			{
				std::cout << "Search result for " << search->last_name << std::endl;
				std::cout << "First name : "<< search->first_name << std::endl;
				std::cout << "Last name : " << search->last_name << std::endl;
				std::cout << "Phone number : " << search->phone_number << std::endl;
				found = 1;
				break;
			}
			else
				search = search->next;
		}
		if(found == 0)
			std::cout << "Contact not found!!!" << std::endl;
	}
};


#endif