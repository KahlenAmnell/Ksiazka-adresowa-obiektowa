#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    string nazwaPlikuZUzytkownikami;

    vector<Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    string konwersjaIntNaString(int liczba);
    bool czyPlikJestPusty(ofstream &plikTekstowy);
    string wczytajLinie();

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};