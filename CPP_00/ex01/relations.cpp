#include <iostream>
#include <string.h>
#include <iomanip>
#include <sstream>
#include "./contact.hpp"
#include "./phonebook.hpp"


int	main()
{
	std::string				user_entry;
	int						id;
	PhoneBook 				repertory;
	
	repertory.menu_PhoneBook();
	std::cout << "Hello YOU ! So what  do you need ? ";
	std::cin >> user_entry;
	while (user_entry.compare("EXIT") != 0)
	{
		if (user_entry.compare("ADD") == 0)
		{
			// std::cout << "Be careful! Empty information will quit the program" << std::endl;
			user_entry.clear();
			if (repertory.Nbcontact >= 7)
				repertory.Nbcontact = 0;
			Contact	newest;
			for (size_t i = 0; i < 4; i++)
			{
				std::cout << "First name : ";
				std::cin.ignore();
				std::getline(std::cin, user_entry);
				if (user_entry.empty())
					return (1);
				else
				{
					newest.setfirstname(user_entry);
				}
				std::cout << "Last name : ";
				user_entry.clear();
				std::getline(std::cin, user_entry);
				if (user_entry.empty())
					return (1);
				else
					newest.setlastname(user_entry);
				std::cout << "Nickname : ";
				user_entry.clear();
				std::getline(std::cin, user_entry);
				if (user_entry.empty())
					return (1);
				else
					newest.setnickname(user_entry);
				std::cout << "Phone Number : ";
				user_entry.clear();
				std::getline(std::cin, user_entry);
				if (user_entry.empty())
					return (1);
				else
					newest.setnumbah(user_entry);
				std::cout << "Your darkest secret : ";
				user_entry.clear();
				std::getline(std::cin, user_entry);
				if (user_entry.empty())
					return (1);
				else
					newest.setsecret(user_entry);
				repertory.AddContact(repertory.Nbcontact, newest);
			}
			repertory.Nbcontact++;
		}
		else if (user_entry.compare("SEARCH") == 0)
		{
			std::cout << "Please enter the id of the contact you need : ";
			std::cin.ignore();
			std::getline(std::cin, user_entry);
			std::istringstream iss (user_entry);
			iss >> id;
			if (id < 0 || id > 7)
				std::cout << "Sorry, the contact doesn't exist " << std::endl;
			else
			{
				Contact actual_c;
				actual_c = repertory.getcontact(id);
				actual_c.resize();
				std::cout << std::left << std::setw(10) << id << "|" 
					<< std::left << std::setw(10) << actual_c.getfirstname() << "|"
					  << std::left << std::setw(10) << actual_c.getlastname() << "|" 
					  << std::left << std::setw(10) << actual_c.getnickname()
				 			<< std::endl;
			}
		}
		else if (user_entry.compare("EXIT") == 0)
			exit(EXIT_SUCCESS);
		std::cout << "Something else ? ";
		std::cin >> user_entry;
	}
}