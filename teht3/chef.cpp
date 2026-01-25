#include "chef.h"

chef::chef(const std::string& name) : chefName(name)
{
    std::cout << "Chef constructor: " << chefName << " created\n";
}

chef::~chef()
{
    std::cout << "Chef destructor: " << chefName << " destroyed\n";
}

int chef::makeSalad(int ingredients)
{
    std::cout << chefName << " makes salad...\n";
    return ingredients / 5;
}

int chef::makeSoup(int ingredients)
{
    std::cout << chefName << " makes soup...\n";
    return ingredients / 3;
}
