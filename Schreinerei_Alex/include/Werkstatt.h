
#include <iostream>

#include "Lager.h"

#ifndef WERKSTATT_H
#define WERKSTATT_H



class Werkstatt
{
    public:
        Werkstatt();
        virtual ~Werkstatt();

    protected:

    private:
        Lager lager;
        int geld;
};

#endif // WERKSTATT_H
