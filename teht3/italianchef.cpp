#include "italianchef.h"
#include <algorithm>


ItalianChef::ItalianChef(const std::string& name)
    : chef(name)
{
    std::cout << "ItalianChef constructor: " << chefName << " created\n";

}

ItalianChef::~ItalianChef()
{
    std::cout << "ItalianChef destructor: " << chefName << " destroyed\n";

}

int ItalianChef::makePizza(int flour, int water)
{
    std::cout << chefName << " makes pizza...\n";

    int pizzasFromFlour = flour / 5;
    int pizzasFromWater = water / 5;

    return std::min(pizzasFromFlour, pizzasFromWater);
}

bool ItalianChef::askSecret(const std::string& pw, int flour, int water)
{
    if (pw == password) {
        int pizzas = makePizza(flour, water);
        std::cout << "Pizzas made: " << pizzas << "\n";
        return true;
    }

    std::cout << "Wrong password!\n";
    return false;
}
