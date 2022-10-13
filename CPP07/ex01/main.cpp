#include "./Includes/Iter.hpp"
#include <iostream>
#include <string.h>


int main()
{
    /* ******** INT ********** */
    // int tab[4] = {0, 1, 2, 3};
    // iter<int>(tab, 4, display<int>); 

    /* ******** CHAR ********** */
    // char tab[] = "Kikoukaka";
    // iter<char>(tab, 9, display<char>);   

    /* ******** FLOAT ********** */
    float tab[] = {3.14f, 4.98f, 7.928};
    iter<float>(tab, 3, display<float>);   
}