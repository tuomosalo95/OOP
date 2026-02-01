#include "asiakas.h"
#include <iostream>

asiakas::asiakas(std::string nimi, double luottoraja)
    : name(nimi), luottotili(luottoraja)

{
}

void asiakas::showSaldo() const
{
    std::cout << "Asiakas: " << name << "\n";
    std::cout << " Pankkitili saldo: " << pankkitili.getBalance() << "\n";
    std::cout << " Luottotili saldo: " << luottotili.getBalance() << "\n";
}

bool asiakas::talletus(double amount)
{
    return pankkitili.deposit(amount);
}

bool asiakas::nosto(double amount)
{
    return pankkitili.withdraw(amount);
}

bool asiakas::luotonMaksu(double amount)
{
    return luottotili.deposit(amount);
}

bool asiakas::luotonNosto(double amount)
{
    return luottotili.withdraw(amount);
}

bool asiakas::tiliSiirto(double amount, asiakas &toWhom)
{
    if(amount <= 0)
        return false;

    if(!pankkitili.withdraw(amount))
        return false;

    if(!toWhom.pankkitili.deposit(amount))
    {
        pankkitili.deposit(amount);
        return false;
    }

    return true;
}
