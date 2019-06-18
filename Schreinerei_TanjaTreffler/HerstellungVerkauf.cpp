// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

//#include "Lagerinitialisierung.hpp"
#include "HerstellungVerkauf.hpp"

/* Konstruktor */
HerstellungVerkauf::HerstellungVerkauf(int tische_kunde){
    anzahltische = tische_kunde;
}
HerstellungVerkauf::HerstellungVerkauf(int tische_kunde,
                                       Begruessungsfunktionen _betrieb){
    anzahltische = tische_kunde;
    betrieb = betrieb;
}
HerstellungVerkauf::HerstellungVerkauf(int tische_kunde, Lagern* p_lager){
    anzahltische = tische_kunde;
    p_myLager = p_lager;
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
/* get, set Lager-Pointer */
Lagern* HerstellungVerkauf::getLager(){
    return p_myLager; // oder &Lagern?
}
void HerstellungVerkauf::setLager(Lagern* p_Lager){
    p_myLager = p_Lager;
}

/* Nachkauf von Brettern und Nägeln */
 void HerstellungVerkauf::materialnachkauf(){
    // Prüfung, ob machbar bereits in anderer Funktion
    // Lager ausreichend gefüllt? Wenn nicht genug da -> nachkaufen.

    // getTische() statt Funktionsparameter (int tische_kunde)
    int bedarf_n = getTische() * p_myLager->getNagelJeTisch();
    int bedarf_b = getTische() * p_myLager->getBrettJeTisch();
    //int bedarf_n = tische_kunde * nagelJeTisch;
    //int bedarf_b = tische_kunde * brettJeTisch;

    while(p_myLager->meinInventar.bretter<bedarf_b ||
          p_myLager->meinInventar.naegel<bedarf_n){
        // Was fehlt gleich kaufen
        // Nägel
        if(p_myLager->meinInventar.naegel<bedarf_n){// Nägel fehlen
            // Eine Einheit addieren
            p_myLager->meinInventar.naegel+= p_myLager->getNagelkaufeinheit();
            // bezahlen
            p_myLager->meinInventar.geld  -= p_myLager->getNagelkaufeinheit()*
                                              p_myLager->getPreise()["nagel"];
        }
        // Bretter
        if(p_myLager->meinInventar.bretter<bedarf_b){ // Bretter fehlen
            p_myLager->meinInventar.bretter+= p_myLager->getBrettkaufeinheit();
            p_myLager->meinInventar.geld   -= p_myLager->getBrettkaufeinheit()*
                                               p_myLager->getPreise()["brett"];
        }

        std::cout << "MATERIALNACHKAUF ERFOLGT.\n" << std::endl;
    }
 };


/* Wie viele Tische können mit aktuellen Ressourcen (+ Geld) gefertigt werden?*/
 int HerstellungVerkauf::baubaretische(){

     // Tische aus Materialien         // ohne Nachkommastellen
     int tische_n = p_myLager->meinInventar.naegel  / p_myLager->getNagelJeTisch();
     int tische_b = p_myLager->meinInventar.bretter / p_myLager->getBrettJeTisch();
     int baubar = std::min(tische_n, tische_b);

     // Weitere Materialien mit Geld kaufen
     // -> Lokal, um tatsächlichen Bestand nicht zu ändern!
     // Min-baubar schonmal abziehen
     int naegel_test  = p_myLager->meinInventar.naegel  - baubar*p_myLager->getNagelJeTisch();
     int bretter_test = p_myLager->meinInventar.bretter - baubar*p_myLager->getBrettJeTisch();
     float geld_test  = p_myLager->meinInventar.geld;

     // Solange genug Geld  da ist (für 1x Bretter, 1x Nägel)
     // Beides, um nicht auf den letzten Cent zu spekulieren.
     // Nachher läuft bei der Bestellung was schief und man ist pleite :D
     while
        (geld_test >
         (p_myLager->getNagelkaufeinheit()*p_myLager->getPreise()["nagel"]+
          p_myLager->getBrettkaufeinheit()*p_myLager->getPreise()["brett"]) ||
            (naegel_test > p_myLager->getNagelJeTisch() &&
             bretter_test>p_myLager->getBrettJeTisch())){
        if (naegel_test < p_myLager->getNagelJeTisch()){
            // Kauf neue Nägel
            naegel_test += p_myLager->getNagelkaufeinheit();
            geld_test   -= p_myLager->getNagelkaufeinheit() *
                           p_myLager->getPreise()["nagel"];
        }
        if (bretter_test < p_myLager->getBrettJeTisch()){
            bretter_test += p_myLager->getBrettkaufeinheit();
            geld_test    -= (p_myLager->getPreise()["brett"]) *
                             p_myLager->getBrettkaufeinheit();
        }
        //pseudo-bauen
        bretter_test -= p_myLager->getBrettJeTisch();
        naegel_test  -= p_myLager->getNagelJeTisch();
        baubar ++;
     }
     return baubar;
 }

/* Setzt aus Brettern und Nägeln Tische zusammen */
 void HerstellungVerkauf::tischbau(){
    // Lagerkorrektur nach Bestellung
    // Ein Tisch verbraucht 18 Bretter und 27 Nägel
    p_myLager->meinInventar.bretter -= getTische()*p_myLager->getBrettJeTisch();
    p_myLager->meinInventar.naegel  -= getTische()*p_myLager->getNagelJeTisch();
    p_myLager->meinInventar.tische  += getTische();
    std::cout << anzahltische << " TISCHE GEBAUT \n" << std::endl;
 };

/* Verkauf, Warenausgabe */
void HerstellungVerkauf::verkauf(){
    //getTische() nicht nötig, eher anzahltische?
    p_myLager->meinInventar.geld += getTische()*p_myLager->getPreise()["tisch"];
    p_myLager->meinInventar.tische -= getTische();
    std::cout << "Dem Kunden wurden die Waren zugestellt." << std::endl;
    std::cout << "Im Lager sind nun " << p_myLager->meinInventar.bretter
              << " Bretter, "
              << p_myLager->meinInventar.naegel << "  Naegel und "
              << p_myLager->meinInventar.geld << " Geld.\n" << std::endl;
};
