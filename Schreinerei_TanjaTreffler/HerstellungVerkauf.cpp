#include "Lagerinitialisierung.hpp"
#include "HerstellungVerkauf.hpp"


/* Nachkauf von Brettern und N�geln */
 void materialnachkauf(int tische_kunde){
    // Pr�fung, ob machbar bereits in anderer Funktion
    // Lager ausreichend gef�llt? Wenn nicht alles da, nachkaufen.

    int bedarf_n = tische_kunde * nagelJeTisch;
    int bedarf_b = tische_kunde * brettJeTisch;

    while(bretter<bedarf_b || naegel<bedarf_n){
        // Was fehlt gleich kaufen
        // N�gel
        if(naegel<bedarf_n){// N�gel fehlen
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
        // N�gel
        if(n_mangel>0){// N�gel fehlen
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


 /* wie viele Tische k�nnen mit den aktuellen Ressourcen, inkl. Geld, gefertigt werden?*/
 int baubaretische(){
     int baubar = 0;
    // Tische aus Materialien
     int tische_n = naegel  / nagelJeTisch; // Nachkommastellen abschneiden hier erw�nscht
     int tische_b = bretter / brettJeTisch;
     baubar = std::min(tische_n, tische_b);

     // Weitere Materialien mit Geld kaufen -> Lokale Variablen, um tats�chlichen Bestand nicht zu �ndern!
     // Min-baubar schonmal abziehen
     int naegel_test  = naegel  - baubar*nagelJeTisch;
     int bretter_test = bretter - baubar*brettJeTisch;
     float geld_test = geld;

     // Solange genug Geld (1x Bretter + 1x N�gel) da ist (Ruhig beides, um nicht auf den letzten Cent zu spekulieren.)
     // Nachher l�uft bei der Bestellung was schief und man ist pleite :D
     while (geld_test > (NAGELKAUFEINHEIT*preise["nagel"]+BRETTKAUFEINHEIT*preise["brett"]) ||
            (naegel_test > nagelJeTisch && bretter_test>brettJeTisch)){
        if (naegel_test < nagelJeTisch){
            // Kauf neue N�gel
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

  /* Setzt aus Brettern und N�geln Tische zusammen */
 void tischbau(int tische_bau){
    // Lagerkorrektur nach Bestellung
    // Ein Tisch verbraucht 18 Bretter und 27 N�gel
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
