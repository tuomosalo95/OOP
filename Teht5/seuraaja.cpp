#include "seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja()
{
    cout << "Seuraaja konst" << endl;
}

Seuraaja::Seuraaja(string aNimi)
{
    cout << "Seuraaja param konst" << endl;
    nimi = aNimi;
}

string Seuraaja::getNimi()
{
    cout << "getN" << endl;
    return(nimi);
}

void Seuraaja::paivitys(string viesti)
{
    cout << "paivitys" << endl;
    cout << "Viesti: " << viesti << endl;
}
