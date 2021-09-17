#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{
public:
    static string konwersjaIntNaString(int liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
//    static bool czyPlikJestPusty(fstream &plikTekstowy);
    static int konwersjaStringNaInt(string liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int wczytajLiczbeCalkowita();
    static char wczytajZnak();
};

#endif // METODYPOMOCNICZE_H
