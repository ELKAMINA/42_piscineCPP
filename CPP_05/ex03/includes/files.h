#ifndef FILES_CLASS_HPP
# define FILES_CLASS_HPP
#include <iostream>
#include <fstream>
#include <string>

typedef struct s_files
{
    std::string     to_write;
    std::string     name;
}   t_files;

typedef struct s_formTypes
{
    std::string    formNames[3];
    AForm*          forms[3];
    AForm*           choosen_form;
}   t_types;


#endif