#include <iostream>
#include "./contact.hpp"
#include "./phonebook.hpp"

PhoneBook::PhoneBook( void ) :  Nbcontact(0), add_form(false)
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

void	PhoneBook::get_infos(std::string user_entry, int index)
{

}