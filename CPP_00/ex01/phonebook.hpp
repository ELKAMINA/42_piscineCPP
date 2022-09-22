#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook
{
	public : 
		PhoneBook( void );
		~PhoneBook( void );
		int 		Nbcontact;
		bool		add_form;
		Contact		getcontact(int index);
		void		AddContact(int index, Contact c);
		void		menu_PhoneBook( void );
		void		adding_option(std::string user_entry, PhoneBook *repertory);

	
	private :
		Contact _contacts[8];
};

#endif