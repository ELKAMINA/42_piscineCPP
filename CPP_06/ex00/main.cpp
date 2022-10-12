#include "./includes/Converting.hpp"

int main (int argc, char* arg[])
{
    Converting  converting;
    if (argc != 2)
        std::cout << "Wrong number of arguments" << std::endl;
    else
    {
        converting.make_conversions(arg[1]);
        std::cout << converting;
        // std::cout << converting.getDoubling() << std::endl;
        // std::cout << converting.getInting() << std::endl;
        // std::cout << converting.getFloating() << std::endl;
    }
}