#include <string.h>
#include <iostream>
#include "./contact.hpp"
#include "./phonebook.hpp"

Contact::Contact( void )
{
	// std::cout << "Constructor called" << std::endl;
	// return;
}

Contact::~Contact( void )
{
	// std::cout << "Destructor called" << std::endl;
	// return;
}

void Contact::setindex(int iu_index)
{
	this->_index = iu_index;
}

void Contact::resize()
{
	if (this->_first_name.size() > 10)
	{
		this->_first_name.resize(10);
		this->_first_name[9] = '.';
	}
	if (this->_last_name.size() > 10)
	{
		this->_last_name.resize(10);
		this->_last_name[9] = '.';
	}
	if (this->_nick_name.size() > 10)
	{
		this->_nick_name.resize(10);
		this->_nick_name[9] = '.';
	}
}

void Contact::setfirstname(std::string iu_firstname)
{
	this->_first_name = iu_firstname;
}

void Contact::setlastname(std::string iu_lastname)
{
	this->_last_name = iu_lastname;
}

void Contact::setnickname(std::string iu_nickname)
{
	this->_nick_name = iu_nickname;
}

void Contact::setnumbah(std::string iu_numbah)
{
	this->_phone_number = iu_numbah;
}

void Contact::setsecret(std::string iu_secret)
{
	this->_darkest_secret = iu_secret;
}

std::string Contact::getfirstname( void ) const
{
	return this->_first_name;
}

std::string Contact::getlastname( void ) const
{
	return this->_last_name;
}

std::string Contact::getnickname( void ) const
{
	return this->_nick_name;
}

std::string Contact::getnumbah( void ) const
{
	return this->_phone_number;
}

std::string Contact::getsecret( void ) const
{
	return this->_darkest_secret;
}