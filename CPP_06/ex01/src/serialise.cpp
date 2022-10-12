#include "../includes/serialise.hpp"

uintptr_t serialise(Data* ptr)
{
    // On va utilise teintrepretation cast car c'est le plus permissif de tous les cast 
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialise(uintptr_t ptr)
{
    // On va utilise teintrepretation cast car c'est le plus permissif de tous les cast 
    return (reinterpret_cast<Data*>(ptr));
}