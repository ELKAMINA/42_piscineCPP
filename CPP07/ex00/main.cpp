#include "./Includes/whatever.hpp"
#include <iostream>
#include <string.h>

int main()
{
    int a = 42;
    int b = 67;
    char c = 'a';
    char d = 'R';
    std::string e = "Hey Girl";
    std::string f = "Hola Chico";
    float g = 3.19282f;
    float h = 5.19282f;
    double i = 100.0;
    double j = 340.50;

    /* ********** SWAP ********** */
    swap<int>(a, b);
    swap<char>(c, d);
    ::swap<std::string>(e, f); // je ne sais pas pk, la déclaration comme ci-dessus ne marche pas dans le cas d'une string
    swap<float>(g,h);

    std::cout << "SWAP" << std::endl;
    std::cout << "SWAPPING INT --> a : " << a << std::endl;
    std::cout << "SWAPPING INT --> b : " << b << std::endl;
    std::cout << "SWAPPING CHAR --> c : " << c << std::endl;
    std::cout << "SWAPPING CHAR --> d : " << d << std::endl;
    std::cout << "SWAPPING STRING --> e : " << e << std::endl;
    std::cout << "SWAPPING STRING --> f : " << f << std::endl;
    std::cout << "SWAPPING FLOAT --> g : " << g << std::endl;
    std::cout << "SWAPPING FLOAT --> h : " << h << std::endl;


    std::cout << std::endl;
    std::cout << "MAX" << std::endl;
    /* ********** MAX ********** */
    std::cout << "a is : " << a << " b is : " << b << std::endl;
    std::cout << "MAX between a and b: " << max<int>(a, b) << std::endl;
    std::cout << "c is : " << c << " d is : " << d << std::endl;
    std::cout << "MAX between c and d: " << max<char>(c, d) << std::endl;
    std::cout << "e is : " << e << " f is : " << f << std::endl;
    std::cout << "MAX between e and f: " << ::max<std::string>(e, f) << std::endl;
    std::cout << "g is : " << c << " h is : " << d << std::endl;
    std::cout << "MAX between g and h: " << max<float>(g,h) << std::endl;
    std::cout << "i is : " << c << " j is : " << d << std::endl;
    std::cout << "MAX between i and j: " << max<double>(i,j) << std::endl;



    /* ********** MIN ********** */
    std::cout << std::endl;
    std::cout << "MIN" << std::endl;
    std::cout << "a is : " << a << " b is : " << b << std::endl;
    std::cout << "min between 42 and 67: " << min<int>(a, b) << std::endl;
    std::cout << "c is : " << c << " d is : " << d << std::endl;
    std::cout << "min between 'a' and 'R': " << min<char>(c, d) << std::endl;
    std::cout << "e is : " << e << " f is : " << f << std::endl;
    std::cout << "min between 'Hey Boy' and 'Hola Chico': " << ::min<std::string>(e, f) << std::endl;
    std::cout << "g is : " << c << " h is : " << d << std::endl;
    std::cout << "min between 3.19282f and 5.19282f;" << min<float>(g,h) << std::endl;
    std::cout << "i is : " << c << " j is : " << d << std::endl;
    std::cout << "min between i = 100.0 and j = 340.50;: " << min<double>(i,j) << std::endl;
    

}