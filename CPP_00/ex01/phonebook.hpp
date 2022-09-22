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
		std::string	infos[4];
		void		get_infos(std::string user_entry, int index);

	
	private :
		Contact _contacts[8];
};

#endif