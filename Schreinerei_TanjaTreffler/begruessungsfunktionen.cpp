#include "header.hpp"
#include "Lagerinitialisierung.hpp"
#include "HerstellungVerkauf.hpp"

#define Testkunden 5

/*
Organisierende und kommunizierende FUNKTIONEN
*/

/* globale Variablen (nicht konstant) */
// Lagerbestand deklarienen
int bretter = 0;    // Anzahl Preis:  1.00 Geld
float geld  = 0;    //
int naegel  = 0;    // Anzahl Preis:  0.05 Geld
int tische  = 0;    // Anzahl Preis: 62.00 Geld

/* Beginne mit dem Betrieb*/
void startBetrieb(){
    // Testbetrieb mit n Kunden
    int n = Testkunden;
    int auftragsbuch[n]={};

    // Lagerbestand initialisieren, Preise festlegen
    loadLagerstart();

    // Mehrere Kunden dürfen Bestellen
    for(int i = 0; i<Testkunden; i++){
        std::cout << "Kunde " << i+1 << std::endl;

        // Kunden begrüßen, Bestellung aufnehmen
        int tische_kundenwunsch = bestellungsaufnahme();

        if (tische_kundenwunsch > 0){
            // Eine Sekunde Pause erzeugen? "Bauzeit"
            std::this_thread::sleep_for (std::chrono::seconds(1));

            // Alles da -> dann bau
            tischbau(tische_kundenwunsch);

            // Eine Sekunde Pause erzeugen? "Bauzeit"
            std::this_thread::sleep_for (std::chrono::seconds(1));

            // Verkauf
            verkauf(tische_kundenwunsch);

            auftragsbuch[i] = tische_kundenwunsch;
        }else{
            auftragsbuch[i] = 0;
        }
    }

    bilanzausgabe(auftragsbuch);

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

int bestellungsverifikation(int tische_kunde){

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
            std::cout << "Vielen Dank fuer die Bestellung. \n" << std::endl;

            // Lager ausreichend gefüllt? Wenn nicht alles da, nachkaufen.
            materialnachkauf(tische_kunde);

            return 1;

        } else  if(bestellbestaetigung == "Nein"){
            std::cout << "Schade, dass Sie nicht bestellen. Schoenen Tag noch." << std::endl; // wenn Zeit, Preisnachlass?
        }else {
            std::cout << "Das war unklar, also keine Bestellung. Probier es nochmal.\n" << std::endl; // Nochmal fragen!
            goto bestellungverifikation;
        }
    } else {
        // Bestellung nicht machbar, übersteigt Ressourcen
        std::cout << "Die Bestellung ueberfordert unseren Betrieb. Bitte nehmen Sie eine kleinere Menge ab" << std::endl;
        std::cout << "Wir haben Ressourcen fuer " << tische_machbar << " Tische.\n" << std::endl;
        // Sprung zu Begrüßung
        return 2;
    }

    return 0;

};

/* Zusammenfassung der Besllungsaufnahme */
int bestellungsaufnahme(){

    begruessung:
    // Bestellung des Kunden annehmen
    int tische_kundenwunsch = kundenbegruessung(); // Rückgabe: Anzahl gewünschter Tische

    int kaufabschluss = bestellungsverifikation(tische_kundenwunsch); // Bestätigung und Machbarkeitsprüfung

    if (kaufabschluss == 1){
        return tische_kundenwunsch;
    }else if ( kaufabschluss == 2){
        goto begruessung;
    } else{
        return 0;
    }
};


/* Ausgabe Auftragsbuch */
void bilanzausgabe(int* auftraege){
    for(int i = 0; i<Testkunden; i++){
        std::cout << "Kunde " << i << " hat " << auftraege[i] << " Tische gekauft." << std::endl;
    }

}

