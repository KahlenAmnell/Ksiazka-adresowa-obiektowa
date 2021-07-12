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
    int idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    return idZalogowanegoUzytkownika;
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

int KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    int idOstatniegoAdresata = adresatMeneger.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    return idOstatniegoAdresata;
}

int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    idOstatniegoAdresata = adresatMeneger.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
    return idOstatniegoAdresata;
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMeneger.wyswietlWszystkichAdresatow();
}
