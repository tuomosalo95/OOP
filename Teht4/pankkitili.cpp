#include "pankkitili.h"

pankkitili::pankkitili()
{
    balance = 0.0;
}

bool pankkitili::deposit(double amount)
{
    if(amount <= 0)
        return false;

    balance += amount;
    return true;
}

bool pankkitili::withdraw(double amount)
{
    if(amount <= 0)
        return false;

    if(amount > balance)
        return false;

    balance -= amount;
    return true;
}

double pankkitili::getBalance() const
{
    return balance;
}
