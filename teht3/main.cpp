#include <iostream>
#include "chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    chef basicChef("Gordon");
    std::cout << "Salads: " << basicChef.makeSalad(12) << "\n";
    std::cout << "Soups: " << basicChef.makeSoup(10) << "\n";

    std::cout << "\n";

    ItalianChef mario("Mario");
    mario.askSecret("pizza", 20, 15);
    mario.askSecret("wrong", 20, 15);

    return 0;
}
