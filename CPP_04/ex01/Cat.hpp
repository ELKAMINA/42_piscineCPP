#ifndef CAT_CLASS_H
# define CAT_CLASS_H
#include <iostream>
#include "./Animal.hpp"
#include "./Brain.hpp"
// Appeler une fction du meme nom qui E dans une classe mere = ovveride de fnction

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat& twin);
		Cat(std::string type);
		Cat& operator=(Cat const & src);
		virtual ~Cat();
		virtual void makeSound() const;
		Brain*	getBrain() const;
		
	private :
		Brain* _cerveau;
};

#endif