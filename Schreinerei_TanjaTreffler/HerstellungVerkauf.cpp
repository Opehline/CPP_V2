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

    while(meinLager.bretter<bedarf_b || meinLager.naegel<bedarf_n){
        // Was fehlt gleich kaufen
        // Nägel
        if(meinLager.naegel<bedarf_n){// Nägel fehlen
            meinLager.naegel+= p_myLager->getNagelkaufeinheit(); // Eine Einheit addieren
            // bezahlen
            meinLager.geld  -= p_myLager->getNagelkaufeinheit()*p_myLager->getPreise()["nagel"];
        }
        // Bretter
        if(meinLager.bretter<bedarf_b){ // Bretter fehlen
            meinLager.bretter+= p_myLager->getBrettkaufeinheit();
            meinLager.geld   -= p_myLager->getBrettkaufeinheit()*p_myLager->getPreise()["brett"];
        }

        std::cout << "MATERIALNACHKAUF ERFOLGT.\n" << std::endl;
    }
 };


/* Wie viele Tische können mit aktuellen Ressourcen (+ Geld) gefertigt werden?*/
 int HerstellungVerkauf::baubaretische(){

     // Tische aus Materialien         // ohne Nachkommastellen
     int tische_n = meinLager.naegel  / p_myLager->getNagelJeTisch();
     int tische_b = meinLager.bretter / p_myLager->getBrettJeTisch();
     int baubar = std::min(tische_n, tische_b);

     // Weitere Materialien mit Geld kaufen
     // -> Lokal, um tatsächlichen Bestand nicht zu ändern!
     // Min-baubar schonmal abziehen
     int naegel_test  = meinLager.naegel  - baubar*p_myLager->getNagelJeTisch();
     int bretter_test = meinLager.bretter - baubar*p_myLager->getBrettJeTisch();
     float geld_test  = meinLager.geld;

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
            geld_test   -= p_myLager->getNagelkaufeinheit()*p_myLager->getPreise()["nagel"];
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
    // getTische statt Funktionsvariable  int tische_bau
    #if 0 // Lagertest
    std::cout << "Testlagerpointer " << p_myLager->getBrettJeTisch() << std::endl;
    std::cout << "Testlagerpointer " << p_myLager->getPreise()["tisch"] << std::endl;
    #endif // 1
    // meinLager ist noch struct, nicht in Klasse
    meinLager.bretter -= getTische()* p_myLager->getBrettJeTisch();
    meinLager.naegel  -= getTische()* p_myLager->getNagelJeTisch();
    meinLager.tische  += getTische();
    std::cout << getTische() << " TISCHE GEBAUT \n" << std::endl;
 };

/* Verkauf, Warenausgabe */
void HerstellungVerkauf::verkauf(){
    //getTische() nicht nötig, eher anzahltische?
    meinLager.geld    += getTische() * p_myLager->getPreise()["tisch"];
    meinLager.tische  -= getTische();
    std::cout << "Dem Kunden wurden die Waren zugestellt." << std::endl;
    std::cout << "Im Lager sind nun " << meinLager.bretter << " Bretter, "
              << meinLager.naegel << "  Naegel und "
              << meinLager.geld << " Geld.\n" << std::endl;
};
