#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori()
{
    cout << "Notifikaattori konst" << endl;
}

void Notifikaattori::lisaa(Seuraaja* lisSeuraajaPtr)
{
    cout << "lis S" << endl;
    if (lisSeuraajaPtr == nullptr) return;
    if (seuraajat == nullptr)
    {
        seuraajat = lisSeuraajaPtr;
        return;
    }
    lisSeuraajaPtr->next = seuraajat;
    seuraajat = lisSeuraajaPtr;
}

void Notifikaattori::poista(Seuraaja* poistSeuraajaPtr)
{
    cout << "poist S" << endl;
    if (poistSeuraajaPtr == nullptr) return;
    if (seuraajat == nullptr) return;
    if (seuraajat == poistSeuraajaPtr)
    {
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* seurTempNext = seuraajat->next;
    Seuraaja* seurTempPrev = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        if (seurTempNext == poistSeuraajaPtr)
        {
            seurTempPrev->next = seurTempNext->next;
            return;
        }
        seurTempPrev = seurTempNext;
        seurTempNext = seurTempNext->next;
    }
    if (seurTempNext == poistSeuraajaPtr)
    {
        seurTempPrev->next = nullptr;
    }

}

void Notifikaattori::tulosta()
{
    if (seuraajat == nullptr)
    {
        cout << "Ei seuraajia!" << endl;
        return;
    }
    Seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        cout << seurTempNext->getNimi() << endl;
        seurTempNext = seurTempNext->next;
    }
    cout << seurTempNext->getNimi() << endl;
}

void Notifikaattori::postita(string viesti)
{
    if (seuraajat == nullptr)
    {
        cout << "Ei seuraajia!" << endl;
        return;
    }
    Seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        seurTempNext->paivitys(viesti);
        seurTempNext = seurTempNext->next;
    }
    seurTempNext->paivitys(viesti);
}



