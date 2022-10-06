#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H
#include <iostream>

// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class A_Animal
{
    public :
		A_Animal();
		A_Animal(const A_Animal& twins);
		A_Animal(std::string type);
		A_Animal& operator=(A_Animal const &);
		virtual ~A_Animal();
		std::string	getType() const;
		void		setType(std::string type);
		virtual void makeSound() const = 0;
	
	protected :
		std::string	_type;
};

#endif