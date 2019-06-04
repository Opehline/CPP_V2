// Tanja Treffler
// Projekt
//
// Betreibsablauf in der Schreinerei


#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <typeinfo>

/* Weitere Funktionen deklarieren*/
void loadLagerstart();
int kundenbegruessung();                  // Rückgabe: Anzahl gewünschter Tische
bool bestellungsverifikation(int tische); // Bestätigung und Prüfung auf Machbarkeit
void verkauf(int tische);                 // Verkauf
void materialnachkauf(int tische);
void tischbau(int tische);                // Macht aus Material Tische
int baubaretische();                      // Wie viele Tische können derzeit maximal hergestellt werden?

/* Konstanten */
const float nagelpreis =  0.05;
const float brettpreis =  1.00;
const float tischpreis = 62.00;


#define PREISBERECHNUNG(t) (t)*tischpreis

#define verifikationUmbau


/* globale Variablen (nicht konstant) */
// Lagerbestand deklarienen
int bretter = 0;    // Anzahl Preis:  1.00 Geld
float geld  = 0;    //
int naegel  = 0;    // Anzahl Preis:  0.05 Geld
int tische  = 0;    // Anzahl Preis: 62.00 Geld

int main(int argc, char **argv){

    // Lagerbestand initialisieren;
    loadLagerstart();

    std::string bestellbestaetigung = "";
    bool kaufbar = true;

    begruessung:
    // Bestellung des Kunden annehmen
    int tische_kundenwunsch = kundenbegruessung(); // Rückgabe: Anzahl gewünschter Tische

    bool kaufabschluss = bestellungsverifikation(tische_kundenwunsch);  // Bestätigung und Machbarkeitsprüfung
    #ifndef verifikationUmbau
    bestellungverifikation: // Label für goto-Anweisung bei Verständnisproblemen
    std::cout << tische_kundenwunsch << " Tische also. Das kostet " << PREISBERECHNUNG(tische_kundenwunsch);
    std::cout << " Geld. Wollen Sie diese verbindlich bestellen? \n (Ja/Nein)" << std::endl;
    // Antworten ja, nein, ich versthe dich nicht
    std::cin >> bestellbestaetigung;
    std::cin.clear(); // löscht den Speicher cin
    if (bestellbestaetigung == "Ja" || bestellbestaetigung == "JA" || bestellbestaetigung == "ja" ){
        // Lager ausreichend gefüllt? Wenn nicht alles da, nachkaufen.
        kaufbar = materialnachkauf(tische_kundenwunsch);

        if(kaufbar){
            std::cout << "Vielen Dank fuer die Bestellung." << std::endl;
        }else{ // gefragte Menge zu groß -> neuer Versuch
            goto begruessung;
        }


    } else  if(bestellbestaetigung == "Nein"){
        std::cout << "Schade, dass Sie nicht bestellen. Schoenen Tag noch." << std::endl; // wenn Zeit, Preisnachlass?
    }else {
        std::cout << "Das war unklar, also keine Bestellung. Probier es nochmal." << std::endl; // Nochmal fragen!
        goto bestellungverifikation;
    }
    #endif // verifikationUmbau

    if (kaufabschluss){
        // Alles da -> dann bau
         void tischbau(int tische);

        // Verkauf
        verkauf(tische_kundenwunsch);
    }


}

/*
ZUSÄTZLICHE FUNKTIONEN
*/
void loadLagerstart(){
    bretter =  50;  // Anzahl Preis:  1.00 Geld
    geld    = 200;
    naegel  = 300;  // Anzahl Preis:  0.05 Geld
    tische  =   0;  // Anzahl Preis: 62.00 Geld
};

/* Rückgabe: Anzahl gewünschter Tische */
int kundenbegruessung(){
    int tische_kundenwunsch = 0;
    std::cout << "Hallo Kunde. Wie viele Tische willst du kaufen?" << std::endl;
    std::cin >> tische_kundenwunsch;
    // TODO: Abfrage ob Zahl größer als 0, Eingabe tatsächlich ne Zahl?
    std::cin.ignore(10000,'\n');
    return tische_kundenwunsch;
};

bool bestellungsverifikation(int tische_kunde){
    bestellungverifikation: // Label für goto-Anweisung bei Verständnisproblemen

    //machbar?
    int tische_machbar = baubaretische();

    // Ja
    if(tische_machbar >= tische_kunde){
        std::cout << tische_kunde << " Tische also. Das kostet " << PREISBERECHNUNG(tische_kunde);
        std::cout << " Geld. Wollen Sie diese verbindlich bestellen? \n (Ja/Nein)" << std::endl;
        // Antworten ja, nein, ich versthe dich nicht
        std::string bestellbestaetigung = "";
        std::cin >> bestellbestaetigung;
        std::cin.clear(); // löscht den Speicher cin
        if (bestellbestaetigung == "Ja" || bestellbestaetigung == "JA" || bestellbestaetigung == "ja" ){
            // Lager ausreichend gefüllt? Wenn nicht alles da, nachkaufen.
            materialnachkauf(tische_kunde);

            std::cout << "Vielen Dank fuer die Bestellung." << std::endl;


        } else  if(bestellbestaetigung == "Nein"){
            std::cout << "Schade, dass Sie nicht bestellen. Schoenen Tag noch." << std::endl; // wenn Zeit, Preisnachlass?
        }else {
            std::cout << "Das war unklar, also keine Bestellung. Probier es nochmal." << std::endl; // Nochmal fragen!
            goto bestellungverifikation;
        }
    } else {
        // Bestellung nicht machbar, übersteigt Ressourcen
        std::cout << "Die Bestellung ueberfordert unseren Betrieb. Bitte nehmen Sie eine kleinere Menge ab" << std::endl;
        std::cout << "Wir haben Ressourcen fuer " << tische_machbar << " Tische." << std::endl;
        // Sprung zu Begrüßung
    }

};

/* Verkauf, Warenausgabe */
void verkauf(int tische){
    geld    += tische * tischpreis;
    tische  -= tische;
    std::cout << "Dem Kunden wurden die Waren zugestellt." << std::endl;
    std::cout << "Im Lager sind nun " << bretter << " Bretter, " << naegel << "  Naegel und " << geld << " Geld." << std::endl;
}

/* Nachkauf von Brettern und Nägeln */
 void materialnachkauf(int tische){
    // Prüfung, ob machbar bereits in anderer Funktion
    // Lager ausreichend gefüllt? Wenn nicht alles da, nachkaufen.

    int bedarf_n = tische * 27;
    int bedarf_b = tische * 18;

    while(bretter<bedarf_b || naegel<bedarf_n){
        // Was fehlt gleich kaufen
        // Nägel
        if(naegel<bedarf_n){// Nägel fehlen
            naegel+=500;        // Eine Einheit abziehen
            geld -= 500*nagelpreis;  // eine zu kaufende Einheit addieren
        }
        // Bretter
        if(bretter<bedarf_b){ // Bretter fehlen
            bretter+=100;        // Eine Einheit abziehen
            geld -= 100*brettpreis;  // eine zu kaufende Einheit addieren
        }
    }

    std::cout << "MATERIALNACHKAUF ERFOLGT." << std::endl;
    std::cout << "Im Lager sind nun " << bretter << " Bretter, " << naegel << "  Naegel und " << geld << " Geld." << std::endl;


    /*
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

    return true; */
 };

 /* Setzt aus Brettern und Nägeln Tische zusammen */
 void tischbau(int tische){
    // Lagerkorrektur nach Bestellung
    // Ein Tisch verbraucht 18 Bretter und 27 Nägel
    bretter -= tische* 18;
    naegel  -= tische*27;
    tische  += tische;
    std::cout << "Im Lager sind nun " << bretter << " Bretter, " << naegel << "  Naegel und " << geld << " Geld." << std::endl;
 };

 /* wie viele Tische können mit den aktuellen Ressourcen, inkl. Geld, gefertigt werden?*/
 int baubaretische(){
     int baubar = 0;
    // Tische aus Materialien
     int tische_n = naegel / 27; // Nachkommastellen abschneiden hier erwünscht
     int tische_b = bretter / 18;
     baubar = std::min(tische_n, tische_b);
     printf("Es sind aus den vorhandene Materialien %d Tische baubar. \n", baubar);

     // Weitere Materialien mit Geld kaufen -> Lokale Variablen, um tatsächlichen Bestand nicht zu ändern!
     // Min-baubar schonmal abziehen
     int naegel_test  = naegel  - baubar*27;
     int bretter_test = bretter - baubar*18;
     float geld_test = geld;

     // Solange genug Geld (1x Bretter + 1x Nägel) da ist (Ruhig beides, um nicht auf den letzten Cent zu spekulieren.)
     // NAchher läuft bei der BEstellung was schief und man ist plaeite :D
     while (geld_test > (500*nagelpreis+100*brettpreis) || (naegel_test > 27 && bretter_test>18)){
        if (naegel_test < 27){
            // Kauf neue Nägel
            naegel_test += 500; // Eine Einheit
            geld_test -= 500*nagelpreis;
        }
        if (bretter_test < 18){
            bretter_test += 100;
            geld_test -=  100*brettpreis;
        }
        //pseudo-bauen
        bretter_test -= 18;
        naegel_test -= 27;
        baubar ++;
     }
     printf("Es sind mindestens %d Tische baubar. \n", baubar);
     printf("Im Lager ist dann noch: %d Naegel, %d Bretter, %.2f Geld.", naegel_test, bretter_test, geld_test);

     return baubar;
 }







