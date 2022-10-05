#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << "\e[0;32ITest avec Dog and Cat\e[0m" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete(meta);
    delete(i);
    delete(j);
    // std::cout << "\e[0;32mI***** Test avec WrongCat*****\e[0m" << std::endl;
    // const WrongAnimal* meta = new WrongAnimal();
    // // const WrongAnimal* j = new Dog();
    // const WrongAnimal* i = new WrongCat();
    // // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the WrongCat sound!
    // // j->makeSound();
    // // meta->makeSound();
    // delete(meta);
    // // delete(j);
    return 0;
}