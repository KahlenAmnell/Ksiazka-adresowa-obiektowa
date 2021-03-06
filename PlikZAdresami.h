#ifndef PLIKZADRESAMI_H
#define PLIKZADRESAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include "PlikTekstowy.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresami :protected PlikTekstowy
{
    int idOstatniegoAdresata;
    //const string NAZWA_PLIKU_Z_ADRESAMI;
    const string NAZWA_PLIKU_TYMCZASOWEGO_Z_ADRESAMI;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void pobierzZPlikuIdOstatniegoAdresata();
    void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);

public:
    PlikZAdresami(string nazwaPlikuZAdresami);
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    void edytujWybranaLinieWPliku(int idEdytowanegoAdresata, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);

};
#endif // PLIKZADRESAMI_H
