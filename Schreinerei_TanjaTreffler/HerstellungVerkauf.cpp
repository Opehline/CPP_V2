#include "Lagerinitialisierung.hpp"
#include "HerstellungVerkauf.hpp"


/* Nachkauf von Brettern und Nägeln */
 void materialnachkauf(int tische_kunde){
    // Prüfung, ob machbar bereits in anderer Funktion
    // Lager ausreichend gefüllt? Wenn nicht alles da, nachkaufen.

    int bedarf_n = tische_kunde * nagelJeTisch;
    int bedarf_b = tische_kunde * brettJeTisch;

    while(bretter<bedarf_b || naegel<bedarf_n){
        // Was fehlt gleich kaufen
        // Nägel
        if(naegel<bedarf_n){// Nägel fehlen
            naegel+= NAGELKAUFEINHEIT;        // Eine Einheit addieren
            geld  -= NAGELKAUFEINHEIT*preise["nagel"];  // bezahlen
        }
        // Bretter
        if(bretter<bedarf_b){ // Bretter fehlen
            bretter+= BRETTKAUFEINHEIT;        // Eine Einheit addieren
            geld   -= BRETTKAUFEINHEIT*preise["brett"];  // bezahlen
        }

        std::cout << "MATERIALNACHKAUF ERFOLGT.\n" << std::endl;
    }
    //std::cout << "Im Lager sind nun " << bretter << " Bretter, " << naegel << "  Naegel und " << geld << " Geld." << std::endl;


    #ifdef Materialnachkauf_V1 // -> Funktioniert durch Programmumbau so nicht mehr
    // Wie viel fehlt
    int n_mangel = tische* 27 - naegel;
    int b_mangel = tische* 18 - bretter;

    while((n_mangel>=0 || b_mangel>=0)){ // >=, weil ganz leeres Lager auch doof
        // Nägel
        if(n_mangel>0){// Nägel fehlen
            n_mangel-=500;        // Eine Einheit abziehen
            kaufbedarf_n += 500;  // eine zu kaufende Einheit addieren
        }
        // Bretter
        if(b_mangel>0){ // Bretter fehlen
            b_mangel-=100;        // Eine Einheit abziehen
            kaufbedarf_b += 100;  // eine zu kaufende Einheit addieren
        }
        // Entscheidung und aus der Schleife raus
        if(n_mangel<0 && b_mangel<0){
            if(geld > kaufbedarf_n*nagelpreis+kaufbedarf_b*brettpreis){ // Option 1: Genug Geld da -> kaufen
                // Kaufen
                naegel  += kaufbedarf_n;
                bretter += kaufbedarf_b;
                geld    -= kaufbedarf_n*nagelpreis;
                geld    -= kaufbedarf_b*brettpreis;
                std::cout << "EINKAUF ERFOLGT." << std::endl;
                std::cout << "Im Lager sind nun " << bretter << " Bretter, " << naegel << "  Naegel und " << geld << " Geld." << std::endl;
                return true;
            }
        }

    return true;
    #endif // Materialeinkauf_V1
 };


 /* wie viele Tische können mit den aktuellen Ressourcen, inkl. Geld, gefertigt werden?*/
 int baubaretische(){
     int baubar = 0;
    // Tische aus Materialien
     int tische_n = naegel  / nagelJeTisch; // Nachkommastellen abschneiden hier erwünscht
     int tische_b = bretter / brettJeTisch;
     baubar = std::min(tische_n, tische_b);

     // Weitere Materialien mit Geld kaufen -> Lokale Variablen, um tatsächlichen Bestand nicht zu ändern!
     // Min-baubar schonmal abziehen
     int naegel_test  = naegel  - baubar*nagelJeTisch;
     int bretter_test = bretter - baubar*brettJeTisch;
     float geld_test = geld;

     // Solange genug Geld (1x Bretter + 1x Nägel) da ist (Ruhig beides, um nicht auf den letzten Cent zu spekulieren.)
     // Nachher läuft bei der Bestellung was schief und man ist pleite :D
     while (geld_test > (NAGELKAUFEINHEIT*preise["nagel"]+BRETTKAUFEINHEIT*preise["brett"]) ||
            (naegel_test > nagelJeTisch && bretter_test>brettJeTisch)){
        if (naegel_test < nagelJeTisch){
            // Kauf neue Nägel
            naegel_test += NAGELKAUFEINHEIT;
            geld_test   -= NAGELKAUFEINHEIT*preise["nagel"];
        }
        if (bretter_test < brettJeTisch){
            bretter_test += BRETTKAUFEINHEIT;
            geld_test    -=  BRETTKAUFEINHEIT*preise["brett"];
        }
        //pseudo-bauen
        bretter_test -= brettJeTisch;
        naegel_test  -= nagelJeTisch;
        baubar ++;
     }
     return baubar;
 }

  /* Setzt aus Brettern und Nägeln Tische zusammen */
 void tischbau(int tische_bau){
    // Lagerkorrektur nach Bestellung
    // Ein Tisch verbraucht 18 Bretter und 27 Nägel
    bretter -= tische_bau* brettJeTisch;
    naegel  -= tische_bau*nagelJeTisch;
    tische  += tische_bau;
    std::cout << tische_bau << " TISCHE GEBAUT \n" << std::endl;
 };

/* Verkauf, Warenausgabe */
void verkauf(int tische_kunde){
    geld    += tische_kunde * preise["tisch"];
    tische  -= tische_kunde;
    std::cout << "Dem Kunden wurden die Waren zugestellt." << std::endl;
    std::cout << "Im Lager sind nun " << bretter << " Bretter, " << naegel << "  Naegel und " << geld << " Geld.\n" << std::endl;
};
