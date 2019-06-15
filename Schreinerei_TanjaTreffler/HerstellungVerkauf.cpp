// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "Lagerinitialisierung.hpp"
#include "HerstellungVerkauf.hpp"

/* Konstruktor */
HerstellungVerkauf::HerstellungVerkauf(int tische_kunde){
    this->anzahltische = tische_kunde;
}
HerstellungVerkauf::HerstellungVerkauf(int tische_kunde,
                                       Begruessungsfunktionen _betrieb){
    anzahltische = tische_kunde;
    betrieb = betrieb;
}
HerstellungVerkauf::~HerstellungVerkauf(){
    //std::cout << "HerstellungVerkauf-Objekt beseitigt" << std::endl;
}

/* Get-Anzahl Tische */
int HerstellungVerkauf::getTische(){
    return anzahltische;
}
/* Set-Anzahl Tische */
void HerstellungVerkauf::setTische(int tische_kunde){
    anzahltische = tische_kunde;
}
/* get, set Betrieb */
Begruessungsfunktionen HerstellungVerkauf::getBetrieb(){
    return betrieb;
}
void HerstellungVerkauf::setBetrieb(Begruessungsfunktionen _betrieb){
    betrieb = _betrieb;
}

/* Nachkauf von Brettern und Nägeln */
 void HerstellungVerkauf::materialnachkauf(){
    // Prüfung, ob machbar bereits in anderer Funktion
    // Lager ausreichend gefüllt? Wenn nicht genug da -> nachkaufen.

    //Lager erstellen -> langfristig keine gute Lösung
    // Für Konstanten sollte es aber klappen
    Lagern lager2;

    // getTische() statt Funktionsparameter (int tische_kunde)
    int bedarf_n = getTische() * lager2.getNagelJeTisch();
    int bedarf_b = getTische() * lager2.getBrettJeTisch();
    //int bedarf_n = tische_kunde * nagelJeTisch;
    //int bedarf_b = tische_kunde * brettJeTisch;

    while(meinLager.bretter<bedarf_b || meinLager.naegel<bedarf_n){
        // Was fehlt gleich kaufen
        // Nägel
        if(meinLager.naegel<bedarf_n){// Nägel fehlen
            meinLager.naegel+= lager2.getNagelkaufeineheit(); // Eine Einheit addieren
            // bezahlen
            meinLager.geld  -= lager2.getNagelkaufeineheit()*lager2.getPreise()["nagel"];
        }
        // Bretter
        if(meinLager.bretter<bedarf_b){ // Bretter fehlen
            meinLager.bretter+= lager2.getBrettkaufeinheit();
            meinLager.geld   -= lager2.getBrettkaufeinheit()*lager2.getPreise()["brett"];
        }

        std::cout << "MATERIALNACHKAUF ERFOLGT.\n" << std::endl;
    }
 };


/* Wie viele Tische können mit aktuellen Ressourcen (+ Geld) gefertigt werden?*/
 int HerstellungVerkauf::baubaretische(){

     // provisorisch lokales Lager für Konstanten erzeugen
     Lagern lager3;

    // Tische aus Materialien
     int tische_n = meinLager.naegel  / lager3.getNagelJeTisch(); // ohne Nachkommastellen
     int tische_b = meinLager.bretter / lager3.getBrettJeTisch();
     int baubar = std::min(tische_n, tische_b);

     // Weitere Materialien mit Geld kaufen
     // -> Lokal, um tatsächlichen Bestand nicht zu ändern!
     // Min-baubar schonmal abziehen
     int naegel_test  = meinLager.naegel  - baubar*lager3.getNagelJeTisch();
     int bretter_test = meinLager.bretter - baubar*lager3.getBrettJeTisch();
     float geld_test  = meinLager.geld;

     // Solange genug Geld  da ist (für 1x Bretter, 1x Nägel)
     // Beides, um nicht auf den letzten Cent zu spekulieren.
     // Nachher läuft bei der Bestellung was schief und man ist pleite :D
     while
        (geld_test >
         (lager3.getNagelkaufeineheit()*lager3.getPreise()["nagel"]+
          lager3.getBrettkaufeinheit()*lager3.getPreise()["brett"]) ||
            (naegel_test > lager3.getNagelJeTisch() &&
             bretter_test>lager3.getBrettJeTisch())){
        if (naegel_test < lager3.getNagelJeTisch()){
            // Kauf neue Nägel
            naegel_test += lager3.getNagelkaufeineheit();
            geld_test   -= lager3.getNagelkaufeineheit()*lager3.getPreise()["nagel"];
        }
        if (bretter_test < lager3.getBrettJeTisch()){
            bretter_test += lager3.getBrettkaufeinheit();
            geld_test    -= lager3.getBrettkaufeinheit()*lager3.getPreise()["brett"];
        }
        //pseudo-bauen
        bretter_test -= lager3.getBrettJeTisch();
        naegel_test  -= lager3.getNagelJeTisch();
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
    meinLager.bretter -= getTische()* lager4.getBrettJeTisch();
    meinLager.naegel  -= getTische()* lager4.getNagelJeTisch();
    meinLager.tische  += getTische();
    std::cout << getTische() << " TISCHE GEBAUT \n" << std::endl;
 };

/* Verkauf, Warenausgabe */
void HerstellungVerkauf::verkauf(){
    //getTische statt tische_kunde
    Lagern lager5;
    meinLager.geld    += getTische() * lager5.getPreise()["tisch"];
    meinLager.tische  -= getTische();
    std::cout << "Dem Kunden wurden die Waren zugestellt." << std::endl;
    std::cout << "Im Lager sind nun " << meinLager.bretter << " Bretter, "
              << meinLager.naegel << "  Naegel und "
              << meinLager.geld << " Geld.\n" << std::endl;
};
