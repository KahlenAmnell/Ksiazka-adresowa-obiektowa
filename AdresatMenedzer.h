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
public:
    AdresatMenager(int idZalogowanegoUzytkownika, string nazwaPlikuZAdresatami);
    char wybierzOpcjeZMenuUzytkownika();

    void dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();
    void edytujAdresata();

private:
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector<Adresat> adresaci;
    PlikZAdresami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

    Adresat ustawNoweImie(Adresat &adresat);
    Adresat ustawNoweNazwisko(Adresat &adresat);
    Adresat ustawNowyNumerTelefonu(Adresat &adresat);
    Adresat ustawNowyAdres(Adresat &adresat);
    Adresat ustawNowyEmail(Adresat &adresat);
};
#endif // ADRESATMENEGER_H
