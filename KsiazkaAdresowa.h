#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenager *adresatMeneger;
    const string NAZWA_PLIKU_Z_ADRESAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami);
    ~KsiazkaAdresowa();
    char wybierzOpcjeZMenuGlownego();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    bool logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();

    char wybierzOpcjeZMenuUzytkownika();
    void wyszukajAdresatowPoImieniu();
    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    void usunAdresata();
    void edytujAdresata();
};

#endif // KSIAZKAADRESOWA_H
