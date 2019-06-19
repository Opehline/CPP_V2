#include <iostream>
#include <list>

#include "Werkstatt.h"
#include "Bestellung.h"

#ifndef AUFTRAGSBUCH_H
#define AUFTRAGSBUCH_H


class Auftragsbuch
{
    public:
        Auftragsbuch();
        virtual ~Auftragsbuch();

    protected:

    private:
        Werkstatt werkstatt;
        std::list<Bestellung> bestellungen;

};

#endif // AUFTRAGSBUCH_H
