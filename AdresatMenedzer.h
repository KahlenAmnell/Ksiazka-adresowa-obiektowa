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
    vector<Adresat> adresaci;

public:
    int wylogowanieUzytkownika(int idZalogowanegoUzytkownika);
};
#endif // ADRESATMENEGER_H
