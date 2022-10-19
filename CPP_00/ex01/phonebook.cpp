#include <iostream>
#include "./contact.hpp"
#include "./phonebook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook( void ) :  Nbcontact(0)
{
	// std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook( void )
{
	// std::cout << "Destructor called" << std::endl;
}

void	PhoneBook::menu_PhoneBook( void )
{	
	std::cout << "*---------------------------------------------------------------------------*" << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << "*---------------------------------------------------------------------------*" << std::endl;
	std::cout << "| Option : [ADD] [SEARCH] [EXIT]                                            |" << std::endl;
	std::cout << "*---------------------------------------------------------------------------*" << std::endl;
}

Contact	PhoneBook::getcontact(int i)
{
	return (this->_contacts[i]);
}

void	PhoneBook::AddContact(int i, Contact my_contact)
{
	this->_contacts[i] = my_contact;
}

void	PhoneBook::adding_option(std::string user_entry, PhoneBook *repertory)
{
	user_entry.clear();
	(void)repertory;
	Contact	newest;

	std::cout << "First name : ";	
	std::getline(std::cin, user_entry);
	if (std::cin.eof() )
		exit(1) ;
	else if (user_entry.empty())
		return ;
	else
	{
		newest.setfirstname(user_entry);
		user_entry.clear();
	}
	std::cout << "Last name : ";
	user_entry.clear();
	std::getline(std::cin, user_entry);
	if (std::cin.eof() )
		exit(1) ;
	else if (user_entry.empty())
		return ;
	else
		newest.setlastname(user_entry);
	std::cout << "Nickname : ";
	user_entry.clear();
	std::getline(std::cin, user_entry);
	if (std::cin.eof() )
		exit(1) ;
	else if (user_entry.empty())
		return ;
	else
		newest.setnickname(user_entry);
	std::cout << "Phone Number : ";
	user_entry.clear();
	std::getline(std::cin, user_entry);
	if (std::cin.eof() )
		exit(1) ;
	else if (user_entry.empty())
		return ;
	else
		newest.setnumbah(user_entry);
	std::cout << "Your darkest secret : ";
	user_entry.clear();
	std::getline(std::cin, user_entry);
	if (std::cin.eof() )
		exit(1) ;
	else if (user_entry.empty())
		return ;
	else
		newest.setsecret(user_entry);
	this->_contacts[this->Nbcontact] = newest;
	this->Nbcontact++;
}