#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main ()
{
    char wybor;
    bool czyZalogowany = false;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while(true)
    {
        if (czyZalogowany == false)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                czyZalogowany = ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
/*
            if (adresaci.empty() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata*/
                //ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                //ksiazkaAdresowa.wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
               // wyszukajAdresatowPoNazwisku(adresaci);
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                czyZalogowany = false;
               //adresaci.clear();
                break;
            }

        }
    }
//KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//ksiazkaAdresowa.logowanieUzytkownika();
//ksiazkaAdresowa.edytujAdresata();
//ksiazkaAdresowa.wyswietlWszystkichAdresatow();
//ksiazkaAdresowa.wylogowanieUzytkownika();
return 0;
}
