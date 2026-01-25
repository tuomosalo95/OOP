#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public chef {
private:
    std::string password = "pizza";

    int makePizza(int flour, int water);

public:
    ItalianChef(const std::string& name);
    ~ItalianChef();

    bool askSecret(const  std::string& pw, int flour, int water);
};

#endif // ITALIANCHEF_H
