#include <iostream>
#include "./includes/serialise.hpp"
#include <stdint.h>
#include <string>

int main()
{
    Data    data;

    std::cout << &data << std::endl;
    serialise(&data);

    std::cout << serialise(&data) << std::endl;
    std::cout << deserialise(serialise(&data)) << std::endl;

}