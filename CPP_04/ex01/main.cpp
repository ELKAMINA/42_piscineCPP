#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"
#include <iostream>
#include <string>

/* Copie superficielle = shallow copy, profonde = Deep copy : https://fr.acervolima.com/copie-superficielle-et-copie-profonde-en-c/#:~:text=En%20copie%20superficielle%2C%20un%20objet,la%20section%20heap%20de%20memory%20.
Vidéo / https://www.youtube.com/watch?v=TjN_5rGMpfg*/

int main()
{
    std::cout << "\e[0;32mI***** Verif appel classe Animal*****\e[0m" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    // std::cout << "\e[0;32mI***** Verif copies d'objets*****\e[0m" << std::endl;
    // Cat* Kitty = new Cat("Kityy kitou");
    // Cat* siblings = Kitty;
    // siblings->setType("LOOOOOOL");
    // std::cout << "Sibling :  " << siblings->getType() << std::endl;
    // std::cout << "Kitty : " << Kitty->getType() << std::endl;
    // // Animal*  tab_an[10];
    // for (size_t i = 0; i < 10; i++)
    // {
    //     if (i < 5)
    //         tab_an[i] = new Cat();
    //     else
    //         tab_an[i] = new Dog();
    // }
    // for (size_t i = 0; i < 10; i++)
    // {
    //     delete tab_an[i];
    // }
    // std::cout << "\e[0;32mI***** Test avec WrongCat*****\e[0m" << std::endl;
    // const WrongAnimal* meta = new WrongAnimal();
    // // const WrongAnimal* j = new Dog();
    // const WrongAnimal* i = new WrongCat();
    // // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the WrongCat sound!
    // // j->makeSound();
    // // meta->makeSound();
    return 0;
}