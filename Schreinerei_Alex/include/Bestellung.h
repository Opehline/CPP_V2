#include <list>
#include<string>

#include "Moebelstueck.h"

#ifndef BESTELLUNG_H
#define BESTELLUNG_H


class Bestellung
{
    public:
        Bestellung();
        virtual ~Bestellung();

    protected:

    private:
        std::list<Moebelstueck> moebel;
        std::string kunde;
        int preis;
        bool fertig;
};

#endif // BESTELLUNG_H
