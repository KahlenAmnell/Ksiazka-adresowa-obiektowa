#include "KsiazkaAdresowa.h"

KsiazkaAdresowa::KsiazkaAdresowa(string nazwaPlikuZUzytkownikami):uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
{
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();

}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}

int KsiazkaAdresowa::wylogowanieUzytkownika(int idZalogowanegoUzytkownika)
{
    idZalogowanegoUzytkownika = adresatMeneger.wylogowanieUzytkownika(idZalogowanegoUzytkownika);
    return idZalogowanegoUzytkownika;
}
