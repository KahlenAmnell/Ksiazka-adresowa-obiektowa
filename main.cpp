#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main () {
int idZalogowanegoUzytkownika = 0;
int idOstatniegoAdresata = 0;
KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
idOstatniegoAdresata = ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
idOstatniegoAdresata = ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
ksiazkaAdresowa.wyswietlWszystkichAdresatow();
idZalogowanegoUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika(idZalogowanegoUzytkownika);
return 0;
}
