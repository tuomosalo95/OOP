#include <iostream>
#include "asiakas.h"


int main()
{
    asiakas a("Matti", 500);
    asiakas b("Liisa", 300);

    a.talletus(200);
    a.nosto(50);

    a.luotonNosto(100);
    a.luotonMaksu(50);

    a.showSaldo();
    b.showSaldo();

    std::cout << "Siirretään 100 euroa Matilta Liisalle...\n";
    a.tiliSiirto(100, b);

    a.showSaldo();
    b.showSaldo();

    return 0;
}
