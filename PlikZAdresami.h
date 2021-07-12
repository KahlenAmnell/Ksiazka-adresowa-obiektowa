#ifndef PLIKZADRESAMI_H
#define PLIKZADRESAMI_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresami
{
    const string nazwaPlikuZAdresatami;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

public:
    PlikZAdresami();
    void dopiszAdresataDoPliku(Adresat adresat);
};
#endif // PLIKZADRESAMI_H
