// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "Lagerinitialisierung.hpp"

#ifndef preise_H
#define preise_H
// Konstruktor
Lagern::Lagern(){
    /* Einkaufsgrößen */
    NAGELKAUFEINHEIT = 500;
    BRETTKAUFEINHEIT = 100;

    // Materialpreise
    preise = {
    {"nagel", 0.05},
    {"brett", 1.00},
    };

    // Lagerinitialisierung
    #if 0
    meinInventar = {300, 50, 0, 200}; // Nagel, Brett, Tisch, Geld
    #else
    loadLagerstart();
    #endif // 1
};
Lagern::Lagern(int _NAGELKAUFEINHEIT, int _BRETTKAUFEINHEIT,
               std::map<std::string, float> _preise){
    /* Einkaufsgrößen */
    NAGELKAUFEINHEIT = _NAGELKAUFEINHEIT;
    BRETTKAUFEINHEIT = _BRETTKAUFEINHEIT;
    preise       = _preise;
};

/* Get-Methoden */
int Lagern::getNagelkaufeinheit(){
    return NAGELKAUFEINHEIT;
}
int Lagern::getBrettkaufeinheit(){
    return BRETTKAUFEINHEIT;
}
std::map<std::string, float> Lagern::getPreise(){
    return preise;
}
#endif // preise_H

/* Anfangsbestand für das Lager*/
void Lagern::loadLagerstart(){
    // Nagel, Brett, Tisch, Geld
    // meinInventar = {300, 50, 0, 200};


    /* Lagerbestand einlesen*/
    // Datei Lagerbestand.txt
    std::ifstream lagerstart("Lagerbestand.txt"); // Objekt ifstream "Lagerstart"

    // Fehler beim öffnen abfragen
    if(lagerstart.fail()){
        std::cerr << "Datei oeffnen hat nicht funktioniert";
        lagerstart.close();
    }
    // Tatsäächliches Einlesen
    int value=0;
    int i = 1;
    while(lagerstart>>value){
        switch (i){
            case 1:
                meinInventar.naegel = value;
                break;
            case 2:
                meinInventar.bretter = value;
                break;
            case 3:
                meinInventar.tische = value;
                break;
            case 4:
                meinInventar.geld = value;
                break;
        }
        i++;
    }

    lagerstart.close();

};

