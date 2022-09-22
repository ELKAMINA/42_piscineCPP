#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

enum details
{
	FIRST_NAME = 1,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUMBER,
	SECRET,
};
class Contact
{
	public :

		Contact( void );
		~Contact( void );
		void			setindex(int iu_index);
		void			setfirstname(std::string iu_firstname);
		void			setlastname(std::string iu_lastname);
		void			setnickname(std::string iu_nickname);
		void			setnumbah(std::string iu_numbah);
		void			setsecret(std::string iu_secret);
		void			resize( void );


		std::string		getfirstname() const;
		std::string		getlastname() const;
		std::string		getnickname() const;
		std::string		getnumbah() const;
		std::string		getsecret() const;

	private :

		int			_index;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif