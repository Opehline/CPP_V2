// Tanja Treffler
//   Projekt f�r C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "begruessungsfunktionen.hpp"
//#include "Lagerinitialisierung.hpp" // steht schon in eigener hpp
#include "HerstellungVerkauf.hpp"

/* Konstruktor */
Begruessungsfunktionen::Begruessungsfunktionen(){
    n = Testkunden;
}

Begruessungsfunktionen::Begruessungsfunktionen(Lagern _lager){
    n = Testkunden;
    myLagern = _lager;
}

// get set
Lagern Begruessungsfunktionen::getLager(){
    return myLagern;
};
void Begruessungsfunktionen::setLager(Lagern _lager){
    myLagern = _lager;
};


/* Organisierende und kommunizierende FUNKTIONEN */

/* Beginne mit dem Betrieb*/
void Begruessungsfunktionen::startBetrieb(){
    // Testbetrieb mit n Kunden
    int auftragsbuch[n]={};

    // Lager-Randbedingungen = Ein Lager erzeugen
    #if 1
    Lagern lager1;
    setLager(lager1);
    #endif // 0

    // Lagerbestand initialisieren, Preise festlegen
    // nixht mehr, weil schon im Lager-Konstruktor erledigt
    //getLager().loadLagerstart();


    // Mehrere Kunden d�rfen Bestellen
    for(int i = 0; i<Testkunden; i++){
        std::cout << "Kunde " << i+1 << std::endl;

        // Kunden begr��en, Bestellung aufnehmen
        // int tische_kundenwunsch = begruessungsobjekt();
        int tische_kundenwunsch = bestellungsaufnahme();

        // Objekt von HerstellungVerkauf erzeugen, damit Funktionsaufruf machbar
        # if 0
        HerstellungVerkauf verkauf_kunde(tische_kundenwunsch);
        # elif 0
        // aktuelles Objekt als Attribut bergen
        HerstellungVerkauf verkauf_kunde(tische_kundenwunsch, this);
        # else
        // Lager als Pointer mit�bergeben
        HerstellungVerkauf verkauf_kunde(tische_kundenwunsch, &myLagern);
        # endif


        if (tische_kundenwunsch > 0){
            // Eine Sekunde Pause: "Bauzeit"
            std::this_thread::sleep_for (std::chrono::seconds(1));

            // Alles da -> dann bau
            verkauf_kunde.tischbau();

            // Eine Sekunde Pause: "Lieferung"
            std::this_thread::sleep_for (std::chrono::seconds(1));

            // Verkauf
            verkauf_kunde.verkauf();

            auftragsbuch[i] = tische_kundenwunsch;
        }else{
            auftragsbuch[i] = 0;
        }
    }

    bilanzausgabe(&auftragsbuch[0]);

};

/* R�ckgabe: Anzahl gew�nschter Tische */
int Begruessungsfunktionen::kundenbegruessung(){
    int tische_kundenwunsch = 0;
    try{
        std::cout << "Hallo Kunde. Wie viele Tische willst du kaufen?"
                  << std::endl;
        std::cin >> tische_kundenwunsch;
        // Test ob Eingabe tats�chlich int
        if(!std::cin){
            throw AUSNAHME_NaN;
        }
    }
    catch(int e){
        while(!std::cin){
            std::cout << "Das war keine Zahl und geht so nicht." << std::endl;
            std::cout << "Gib eine neue Zahl an Tischen ein: " << std::endl;

            std::cin.clear();
            std::cin.ignore(10000,'\n');

            std::cin >> tische_kundenwunsch;
        }
        return tische_kundenwunsch;
    }

    // try-catch, zum testen, ob Eingabe eine g�ltige Zahl
    #if 1
    Ausnahmefallbehandlung ausnahmen;
    int bsp = ausnahmen.testeingabe();
    std::cout << bsp << " Testausgabe " << std::endl;
    #endif // 1


    std::cin.ignore(10000,'\n');
    std::cin.clear();

    // G�ltigkeitsbereich testen
    try{
        gueltigerBereich(tische_kundenwunsch);
    }
    catch(int e){
        if(e == AUSNAHME_ZuKlein){
            // <0
            std::cout << "Wir geben keine Tische aus und zahlen dafuer. "
                      << "Die Bestellung wird verworfen. "  << std::endl;
        }
        else if(e == AUSNAHME_Null){
            // = 0
            std::cout << "0 Tische sind keine Bestellung, schade." << std::endl;
        }
    }


    return tische_kundenwunsch;
};

/* Bestell�berpr�fung */
int Begruessungsfunktionen::bestellungsverifikation(int tische_kunde){

    bestellungverifikation: //Label f�r goto-Anweisung bei Verst�ndnisproblemen

    //machbar?
    HerstellungVerkauf hrstlgVrkf1(tische_kunde, &myLagern);
    int tische_machbar = hrstlgVrkf1.baubaretische();

    // Ja
    if(tische_machbar >= tische_kunde){
        # if 0 // Makro PREISBERECHNUNG anpassen oder unn�tig?
        std::cout << tische_kunde << " Tische also. "
                  << "Das kostet " << PREISBERECHNUNG(tische_kunde) <<" Geld. ";
        #else
        std::cout << tische_kunde << " Tische also. " << "Das kostet "
                  << tische_kunde*getLager().getPreise()["tisch"] <<" Geld. ";
        #endif // 0
        std::cout << "Wollen Sie diese verbindlich bestellen? \n (Ja/Nein)"
        << std::endl;
        // Antworten: ja, nein, ich versthe dich nicht
        std::string bestellbestaetigung = "";
        std::cin >> bestellbestaetigung;
        std::cin.clear(); // l�scht den Speicher cin
        if (bestellbestaetigung == "Ja" || bestellbestaetigung == "JA"
            || bestellbestaetigung == "ja" ){
            std::cout << "Vielen Dank fuer die Bestellung. \n" << std::endl;

            // Lager ausreichend gef�llt? Ggf. nachkaufen.
            hrstlgVrkf1.materialnachkauf();

            return 1;

        } else  if(bestellbestaetigung == "Nein"){
            std::cout << "Schade, dass Sie nicht bestellen. "
                      << "Schoenen Tag noch.\n"
            << std::endl; // evtl noch Preisnachlass
        }else {
            std::cout << "Das war unklar, also keine Bestellung. "
            << "Probier es nochmal.\n" << std::endl; // Nochmal fragen!
            goto bestellungverifikation;
        }
    } else {
        // Bestellung nicht machbar: �bersteigt Ressourcen
        std::cout << "Die Bestellung ueberfordert unseren Betrieb. "
                  << "Bitte nehmen Sie eine kleinere Menge ab. " << std::endl;
        std::cout << "Wir haben Ressourcen fuer " << tische_machbar
                  << " Tische.\n" << std::endl;
        // Sprung zu Begr��ung
        return 2;
    }

    return 0;

};

/* Zusammenfassung der Besllungsaufnahme */
int Begruessungsfunktionen::bestellungsaufnahme(){

    begruessung:
    // Bestellung des Kunden annehmen
    int tische_kundenwunsch = kundenbegruessung();//Return: gew�nschte Tischzahl

    if(tische_kundenwunsch > 0){
        // Best�tigung und Machbarkeitspr�fung
        int kaufabschluss = bestellungsverifikation(tische_kundenwunsch);

        if (kaufabschluss == 1){ // Bestellung best�tigt
            return tische_kundenwunsch;
        }else if ( kaufabschluss == 2){ // Bestellmenge zu gro�
            goto begruessung;
        } else{
            return 0;
        }
    }else{ // Null Tische bestellt
        std::cout << "Es wurde kein Tisch bestellt.\n" << std::endl;
        return 0;
    }
};


/* Ausgabe Auftragsbuch */
void Begruessungsfunktionen::bilanzausgabe(int* auftraege){
    for(int i = 0; i<Testkunden; i++){
        std::cout << "Kunde " << i+1 << " hat " << *(auftraege+i)
                  << " Tische gekauft." << std::endl;
    }
}

void Begruessungsfunktionen::gueltigerBereich(int tische){
    // Test
    std::cout << " Bla bla " << std::endl;
    //Abfrage ob Zahl gr��er als 0
    if(tische < 0){
        throw AUSNAHME_ZuKlein;
    }
    // Bestellmenge = 0
    if(tische == 0){
        throw AUSNAHME_Null;
    }
}

