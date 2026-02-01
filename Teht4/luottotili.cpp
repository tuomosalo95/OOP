#include "luottotili.h"

luottotili::luottotili(double luottoraja)
{
    creditLimit = -luottoraja;
    balance = 0.0;
}

bool luottotili::deposit(double amount)
{
    if(amount <=0)
        return false;

    if(balance + amount > 0)
        return false;

    balance += amount;
    return true;
}

bool luottotili::withdraw(double amount)
{
    if(amount <= 0)
        return false;

    if(balance - amount < creditLimit)
        return false;

    balance -= amount;
    return true;
}
