#include "./Includes/Array.hpp"
#include <iomanip>
#include <string.h>
#include <stdexcept>
#include <iostream>
#include <cstddef>


int main()
{
    /* ******* Test des constructeurs ****** */
    try
    {
        // Array<unsigned int> tab;
        // std::cout << tab.size() << std::endl;
        // std::cout << tab[0] << std::endl;

        // Array<char>tab(100);
        // std::cout << "size : " << tab.size() << std::endl;
        // std::cout << tab[100] << std::endl;

        Array<int> nb(5); 
        int* parRecopie = new int[5];
        srand(time(NULL)); //Initilialise la fction srand sur tmps actuel
        for (int i = 0; i < 5; i++)
        {
            int value = rand(); // Avoir un nbre aléatoire
            // std::cout << "value : " << value << std::endl;
            nb[i] = value;
            // std::cout << "nb[i]" << nb[i] << std::endl;
            parRecopie[i] = value;
        }
        Array<int>test(nb);
        test[3] = 89;
        // for(int i = 0; i < 5; i++)
        // {
        //     std::cout << "nb[i]" << nb[i] << std::endl;
        //     std::cout << "test[i]" << test[i] << std::endl;
        //     std::cout << std::endl;
        // }
        Array<int>Affect;
        Affect = test;
        // std::cout << test[4] << std::endl;
        // std::cout << Affect[0] << std::endl;
        Affect[0] = 2;
        // std::cout << Affect[0] << std::endl;
        // std::cout << test[4] << std::endl;
        // test[3] = 8000;
        for(int i = 0; i < 5; i++)
        {
            std::cout << "Affect[i]" << Affect[i] << std::endl;
            std::cout << "test[i]" << test[i] << std::endl;
            std::cout << std::endl;
        }

        /* INVALID INDEXES */
        std::cout << Affect[-6] << std::endl;
        // delete [] parRecopie;
    }
    catch(const std::exception& e)
    {
        // delete [] parRecopie;
        std::cerr << e.what() << '\n';
    }
    
}