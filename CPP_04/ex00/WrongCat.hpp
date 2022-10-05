#ifndef WRONGCAT_CLASS_H
# define WRONGCAT_CLASS_H
#include <iostream>
#include "./WrongAnimal.hpp"
// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat&);
		WrongCat(std::string type);
		~WrongCat();
		WrongCat& operator=(WrongCat const &);
		virtual void makeSound() const;
};

#endif