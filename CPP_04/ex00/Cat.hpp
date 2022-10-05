#ifndef CAT_CLASS_H
# define CAT_CLASS_H
#include <iostream>
#include "./Animal.hpp"
// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat& twin);
		Cat(std::string type);
		Cat& operator=(Cat const &);
		~Cat();
		virtual void makeSound() const;
};

#endif