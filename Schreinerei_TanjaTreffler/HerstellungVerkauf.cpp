// Tanja Treffler
//   Projekt für C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include "Lagerinitialisierung.hpp"
#include "HerstellungVerkauf.hpp"

/* Konstruktor */
HerstellungVerkauf::HerstellungVerkauf(int tische_kunde){
    this->anzahltische = tische_kunde;
}
HerstellungVerkauf::~HerstellungVerkauf(){
    //std::cout << "HerstellungVerkauf-Objekt beseitigt" << std::endl;
}

/* Get-Anzahl Tische */
HerstellungVerkauf::getTische(){
    return anzahltische;
}

/* Set-Anzahl Tische */
void HerstellungVerkauf::setTische(int tische_kunde){
    anzahltische = tische_kunde;
}

/* Nachkauf von Brettern und Nägeln */
 void HerstellungVerkauf::materialnachkauf(){
    // Prüfung, ob machbar bereits in anderer Funktion
    // Lager ausreichend gefüllt? Wenn nicht genug da -> nachkaufen.

    //Lager erstellen -> langfristig keine gute Lösung
    // Für Konstanten sollte es aber klappen
    Lagern lager2;

    // getTische() statt Funktionsparameter (int tische_kunde)
    int bedarf_n = getTische() * lager2.nagelJeTisch;
    int bedarf_b = getTische() * lager2.brettJeTisch;
    //int bedarf_n = tische_kunde * nagelJeTisch;
    //int bedarf_b = tische_kunde * brettJeTisch;

    while(meinLager.bretter<bedarf_b || meinLager.naegel<bedarf_n){
        // Was fehlt gleich kaufen
        // Nägel
        if(meinLager.naegel<bedarf_n){// Nägel fehlen
            meinLager.naegel+= lager2.NAGELKAUFEINHEIT; // Eine Einheit addieren
            // bezahlen
            meinLager.geld  -= lager2.NAGELKAUFEINHEIT*preise["nagel"];
        }
        // Bretter
        if(meinLager.bretter<bedarf_b){ // Bretter fehlen
            meinLager.bretter+= lager2.BRETTKAUFEINHEIT;
            meinLager.geld   -= lager2.BRETTKAUFEINHEIT*preise["brett"];
        }

        std::cout << "MATERIALNACHKAUF ERFOLGT.\n" << std::endl;
    }
 };


/* Wie viele Tische können mit aktuellen Ressourcen (+ Geld) gefertigt werden?*/
 int HerstellungVerkauf::baubaretische(){

     // provisorisch lokales Lager für Konstanten erzeugen
     Lagern lager3;

    // Tische aus Materialien
     int tische_n = meinLager.naegel  / lager3.nagelJeTisch; // ohne Nachkommastellen
     int tische_b = meinLager.bretter / lager3.brettJeTisch;
     int baubar = std::min(tische_n, tische_b);

     // Weitere Materialien mit Geld kaufen
     // -> Lokal, um tatsächlichen Bestand nicht zu ändern!
     // Min-baubar schonmal abziehen
     int naegel_test  = meinLager.naegel  - baubar*lager3.nagelJeTisch;
     int bretter_test = meinLager.bretter - baubar*lager3.brettJeTisch;
     float geld_test  = meinLager.geld;

     // Solange genug Geld  da ist (für 1x Bretter, 1x Nägel)
     // Beides, um nicht auf den letzten Cent zu spekulieren.
     // Nachher läuft bei der Bestellung was schief und man ist pleite :D
     while
        (geld_test >
         (lager3.NAGELKAUFEINHEIT*preise["nagel"]+
          lager3.BRETTKAUFEINHEIT*preise["brett"]) ||
            (naegel_test > lager3.nagelJeTisch &&
             bretter_test>lager3.brettJeTisch)){
        if (naegel_test < lager3.nagelJeTisch){
            // Kauf neue Nägel
            naegel_test += lager3.NAGELKAUFEINHEIT;
            geld_test   -= lager3.NAGELKAUFEINHEIT*preise["nagel"];
        }
        if (bretter_test < lager3.brettJeTisch){
            bretter_test += lager3.BRETTKAUFEINHEIT;
            geld_test    -= lager3.BRETTKAUFEINHEIT*preise["brett"];
        }
        //pseudo-bauen
        bretter_test -= lager3.brettJeTisch;
        naegel_test  -= lager3.nagelJeTisch;
        baubar ++;
     }
     return baubar;
 }

/* Setzt aus Brettern und Nägeln Tische zusammen */
 void HerstellungVerkauf::tischbau(){
    // Lagerkorrektur nach Bestellung
    // Ein Tisch verbraucht 18 Bretter und 27 Nägel
    // getTische statt Funktionsvariable  int tische_bau
    Lagern lager4; // provisorisch
    meinLager.bretter -= getTische()* lager4.brettJeTisch;
    meinLager.naegel  -= getTische()* lager4.nagelJeTisch;
    meinLager.tische  += getTische();
    std::cout << getTische() << " TISCHE GEBAUT \n" << std::endl;
 };

/* Verkauf, Warenausgabe */
void HerstellungVerkauf::verkauf(){
    //getTische statt tische_kunde
    meinLager.geld    += getTische() * preise["tisch"];
    meinLager.tische  -= getTische();
    std::cout << "Dem Kunden wurden die Waren zugestellt." << std::endl;
    std::cout << "Im Lager sind nun " << meinLager.bretter << " Bretter, "
              << meinLager.naegel << "  Naegel und "
              << meinLager.geld << " Geld.\n" << std::endl;
};
