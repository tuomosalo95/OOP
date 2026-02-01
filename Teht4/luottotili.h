#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class luottotili : public pankkitili
{
public:
    luottotili(double luottoraja);

    bool deposit(double amount) override;
    bool withdraw(double amount) override;

private:
    double creditLimit;
};

#endif // LUOTTOTILI_H
