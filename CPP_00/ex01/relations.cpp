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
			std::cout << "An empty entry will stop the form!" << std::endl;
			if (repertory.Nbcontact >= 7)
				repertory.Nbcontact = 0;
			repertory.adding_option(user_entry, &repertory);
		}
		else if (user_entry.compare("SEARCH") == 0)
		{
			std::cout << "Please enter the id of the contact you need : ";
			std::cin.ignore();
			std::getline(std::cin, user_entry);
			if (std::cin.eof() )
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
				actual_c.resize();
				std::cout << std::right << std::setw(10) << id << "|" 
					<< std::right << std::setw(10) << actual_c.getfirstname() << "|"
					  << std::right << std::setw(10) << actual_c.getlastname() << "|" 
					  << std::right << std::setw(10) << actual_c.getnickname()
				 			<< std::endl;
			}
		}
		else if (user_entry.compare("EXIT") == 0)
			exit(EXIT_SUCCESS);
		user_entry.clear();
		std::cout << "Something else ? ";
		std::getline(std::cin, user_entry);
		if (std::cin.eof())
			exit(1) ;
		else if (user_entry.empty())
			user_entry = "KIKOU";
	}
}