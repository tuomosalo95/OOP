#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <string>
#include "pankkitili.h"
#include "luottotili.h"

class asiakas
{
public:
    asiakas(std::string nimi, double luottoraja);

    void showSaldo() const;

    bool talletus(double amount);
    bool nosto(double amount);

    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);

    bool tiliSiirto(double amount, asiakas &toWhom);

private:
    std::string name;
    pankkitili pankkitili;
    luottotili luottotili;
};

#endif // ASIAKAS_H
