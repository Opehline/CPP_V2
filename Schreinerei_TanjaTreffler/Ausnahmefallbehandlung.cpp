// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "Begruessungsfunktionen.hpp"
#include "Ausnahmefallbehandlung.hpp"


Ausnahmefallbehandlung::Ausnahmefallbehandlung()
{
    //ctor
}

Ausnahmefallbehandlung::~Ausnahmefallbehandlung()
{
    //dtor
}

int Ausnahmefallbehandlung::test_bestellungsaufnahme(int e, int tische){
    if(e == AUSNAHME_NaN){
        while(!std::cin){
                std::cout << "Das war keine Zahl und geht so nicht." << std::endl;
                std::cout << "Gib eine neue Zahl an Tischen ein: " << std::endl;

                std::cin.clear();
                std::cin.ignore(10000,'\n');

                std::cin >> tische;
            }
    }
    return tische;
}

void Ausnahmefallbehandlung::test_bestellungsaufnahme(int e){

    if(e == AUSNAHME_ZuKlein){
            // <0
            std::cout << "Wir geben keine Tische aus und zahlen dafuer. "
                      << "Die Bestellung wird verworfen. "  << std::endl;
        }
    else if(e == AUSNAHME_Null){
            // = 0
            std::cout << "0 Tische sind keine Bestellung, schade." << std::endl;
    }
}


int Ausnahmefallbehandlung::testeingabe(){
    /*try{
        // bla
    }
    catch(){
        // blubb
    }*/
    return 0;
};
