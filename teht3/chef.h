#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

class chef
{
protected:
    std::string chefName;

public:
    chef(const std::string& name);
    virtual ~chef();

    int makeSalad(int ingredients);
    int makeSoup(int ingredients);
};

#endif // CHEF_H
