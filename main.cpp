#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main () {

KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
ksiazkaAdresowa.logowanieUzytkownika();
//ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//ksiazkaAdresowa.usunAdresata();
//ksiazkaAdresowa.dodajAdresata();
ksiazkaAdresowa.edytujAdresata();
ksiazkaAdresowa.wyswietlWszystkichAdresatow();
ksiazkaAdresowa.wylogowanieUzytkownika();
return 0;
}
