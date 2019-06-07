// Tanja Treffler
//   Projekt f�r C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include "Lagerinitialisierung.hpp"
#include "HerstellungVerkauf.hpp"


/* Nachkauf von Brettern und N�geln */
 void materialnachkauf(int tische_kunde){
    // Pr�fung, ob machbar bereits in anderer Funktion
    // Lager ausreichend gef�llt? Wenn nicht genug da -> nachkaufen.

    int bedarf_n = tische_kunde * nagelJeTisch;
    int bedarf_b = tische_kunde * brettJeTisch;

    while(meinLager.bretter<bedarf_b || meinLager.naegel<bedarf_n){
        // Was fehlt gleich kaufen
        // N�gel
        if(meinLager.naegel<bedarf_n){// N�gel fehlen
            meinLager.naegel+= NAGELKAUFEINHEIT;        // Eine Einheit addieren
            meinLager.geld  -= NAGELKAUFEINHEIT*preise["nagel"];  // bezahlen
        }
        // Bretter
        if(meinLager.bretter<bedarf_b){ // Bretter fehlen
            meinLager.bretter+= BRETTKAUFEINHEIT;
            meinLager.geld   -= BRETTKAUFEINHEIT*preise["brett"];
        }

        std::cout << "MATERIALNACHKAUF ERFOLGT.\n" << std::endl;
    }
 };


/* Wie viele Tische k�nnen mit aktuellen Ressourcen (+ Geld) gefertigt werden?*/
 int baubaretische(){

    // Tische aus Materialien
     int tische_n = meinLager.naegel  / nagelJeTisch; // ohne Nachkommastellen
     int tische_b = meinLager.bretter / brettJeTisch;
     int baubar = std::min(tische_n, tische_b);

     // Weitere Materialien mit Geld kaufen
     // -> Lokal, um tats�chlichen Bestand nicht zu �ndern!
     // Min-baubar schonmal abziehen
     int naegel_test  = meinLager.naegel  - baubar*nagelJeTisch;
     int bretter_test = meinLager.bretter - baubar*brettJeTisch;
     float geld_test  = meinLager.geld;

     // Solange genug Geld  da ist (f�r 1x Bretter, 1x N�gel)
     // Beides, um nicht auf den letzten Cent zu spekulieren.
     // Nachher l�uft bei der Bestellung was schief und man ist pleite :D
     while
        (geld_test >
         (NAGELKAUFEINHEIT*preise["nagel"]+BRETTKAUFEINHEIT*preise["brett"]) ||
            (naegel_test > nagelJeTisch && bretter_test>brettJeTisch)){
        if (naegel_test < nagelJeTisch){
            // Kauf neue N�gel
            naegel_test += NAGELKAUFEINHEIT;
            geld_test   -= NAGELKAUFEINHEIT*preise["nagel"];
        }
        if (bretter_test < brettJeTisch){
            bretter_test += BRETTKAUFEINHEIT;
            geld_test    -= BRETTKAUFEINHEIT*preise["brett"];
        }
        //pseudo-bauen
        bretter_test -= brettJeTisch;
        naegel_test  -= nagelJeTisch;
        baubar ++;
     }
     return baubar;
 }

/* Setzt aus Brettern und N�geln Tische zusammen */
 void tischbau(int tische_bau){
    // Lagerkorrektur nach Bestellung
    // Ein Tisch verbraucht 18 Bretter und 27 N�gel
    meinLager.bretter -= tische_bau* brettJeTisch;
    meinLager.naegel  -= tische_bau*nagelJeTisch;
    meinLager.tische  += tische_bau;
    std::cout << tische_bau << " TISCHE GEBAUT \n" << std::endl;
 };

/* Verkauf, Warenausgabe */
void verkauf(int tische_kunde){
    meinLager.geld    += tische_kunde * preise["tisch"];
    meinLager.tische  -= tische_kunde;
    std::cout << "Dem Kunden wurden die Waren zugestellt." << std::endl;
    std::cout << "Im Lager sind nun " << meinLager.bretter << " Bretter, "
              << meinLager.naegel << "  Naegel und "
              << meinLager.geld << " Geld.\n" << std::endl;
};
