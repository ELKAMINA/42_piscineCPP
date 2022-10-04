#ifndef CAT_CLASS_H
# define CAT_CLASS_H
#include <iostream>
#include "./animal.hpp"
// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat&);
		Cat(std::string type);
		Cat& operator=(Cat const &);
		~Cat();
};