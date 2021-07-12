#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H

#include <iostream>
#include <vector>
#include <windows.h>

#include <sstream>
#include "Adresat.h"
#include "PlikZAdresami.h"
#include "MetodyPomocnicze.h"

class AdresatMenager
{
    vector<Adresat> adresaci;
    PlikZAdresami plikZAdresatami;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wyswietlDaneAdresata(Adresat adresat);
public:
    int wylogowanieUzytkownika(int idZalogowanegoUzytkownika);
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
};
#endif // ADRESATMENEGER_H
