#include <string.h>
#include <iomanip>
#include <sstream>
#include "./contact.hpp"
#include "./phonebook.hpp"
#include <stdlib.h>
#include <iostream>


int	main()
{
	std::string				user_entry;
	int						id;
	PhoneBook 				repertory;
	bool		first_char = false;
	
	repertory.menu_PhoneBook();
	std::cout << "Hello YOU ! So what  do you need ? ";
	std::cin >> user_entry;
	while (user_entry.compare("EXIT") != 0)
	{
		if (user_entry.compare("ADD") == 0)
		{
			std::cout << "An empty entry will stop the form!" << std::endl;
			if (repertory.Nbcontact > 7)
				repertory.Nbcontact = 0;
			if (first_char == false)
			{
				std::cin.ignore();
				first_char = true;
			}
			repertory.adding_option(user_entry, &repertory);
		}
		else if (user_entry.compare("SEARCH") == 0)
		{
			for (size_t i = 0; i < 8; i++)
			{
				Contact actual_c;
				Contact cpy;
				actual_c = repertory.getcontact(i);
				cpy = repertory.getcontact(i);
				cpy.resize();
				std::cout << std::right << std::setw(10) << i << "|" 
					<< std::right << std::setw(10) << cpy.getfirstname() << "|"
					  << std::right << std::setw(10) << cpy.getlastname() << "|" 
					  << std::right << std::setw(10) << cpy.getnickname()
				 			<< std::endl;
			}
			
			std::cout << "Please enter the id of the contact you need : ";
			if (first_char == false)
			{
				std::cin.ignore();
				first_char = true;
			}
			std::getline(std::cin, user_entry);
			if (std::cin.eof())
				exit(1) ;
			else if (user_entry.empty())
				user_entry = "KIKOU";
			std::istringstream iss (user_entry);
			iss >> id;
			if (id < 0 || id > 7)
				std::cout << "Sorry, the contact doesn't exist " << std::endl;
			else
			{
				Contact actual_c;
				actual_c = repertory.getcontact(id);
				std::cout << id << std::endl;
				std::cout << actual_c.getfirstname() << std::endl;
				std::cout << actual_c.getlastname() << std::endl;
				std::cout << actual_c.getnickname() << std::endl;
				std::cout << actual_c.getnumbah() << std::endl;
				std::cout << actual_c.getsecret() << std::endl;
			}
		}
		else if (user_entry.compare("EXIT") == 0)
			exit(1);
		user_entry.clear();
		std::cout << "Something else ? ";
		std::getline(std::cin, user_entry);
		if (std::cin.eof())
			exit(1);
		else if (user_entry.empty())
			user_entry = "KIKOU";
	}
}