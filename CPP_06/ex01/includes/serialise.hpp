#ifndef SERIALISE_CLASS_HPP
# define SERIALISE_CLASS_HPP
#include <string>
#include <iostream>
#include <stdint.h>

typedef struct s_data
{
    int         test;
    char        c;
    std::string str;
} Data;

uintptr_t serialise(Data* ptr);
Data* deserialise(uintptr_t ptr);
#endif