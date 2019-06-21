// Tanja Treffler
//   Projekt f�r C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "begruessungsfunktionen.hpp"
#include "HerstellungVerkauf.hpp"

/* Konstruktoren */
Begruessungsfunktionen::Begruessungsfunktionen(){
    tische = 0;
    tische_machbar = 0;
    bestellbestaetigung = "";
    kaufabschluss = 0;
    i = 0;
    // Testbetrieb mit n Kunden
    auftragsbuch[Testkunden]={};
    //startBetrieb();
}

Begruessungsfunktionen::Begruessungsfunktionen(Lagern _lager){
    myLagern = _lager;
    tische = 0;
    tische_machbar =0;
    bestellbestaetigung = "";
    kaufabschluss = 0;
    i = 0;
    // Testbetrieb mit n Kunden
    auftragsbuch[Testkunden]={};
}

// get set
Lagern Begruessungsfunktionen::getLager(){
    return myLagern;
};
void Begruessungsfunktionen::setLager(Lagern _lager){
    myLagern = _lager;
};
/* Get Tisch */
Tisch Begruessungsfunktionen::getTisch(){
    return tisch;
}

/* Organisierende und kommunizierende FUNKTIONEN */

/* Beginne mit dem Betrieb*/
void Begruessungsfunktionen::startBetrieb(){

    // Lager-Randbedingungen = Ein Lager erzeugen
    #if 1
    Lagern lager1;
    setLager(lager1);
    #endif // 0

    // Lagerbestand initialisieren, Preise festlegen
    // nicht mehr, weil schon im Lager-Konstruktor erledigt
    //getLager().loadLagerstart();


    // Mehrere Kunden d�rfen Bestellen
    for(int i = 0; i<Testkunden; i++){
        std::cout << "Kunde " << i+1 << std::endl;

        // Kunden begr��en, Bestellung aufnehmen
        bestellungsaufnahme();

        // Objekt von HerstellungVerkauf erzeugen, damit Funktionsaufruf machbar
        HerstellungVerkauf verkauf_kunde(tische, &myLagern);


        if (tische > 0){
            // Eine Sekunde Pause: "Bauzeit"
            std::this_thread::sleep_for (std::chrono::seconds(1));

            // Alles da -> dann bau
            verkauf_kunde.tischbau();

            // Eine Sekunde Pause: "Lieferung"
            std::this_thread::sleep_for (std::chrono::seconds(1));

            // Verkauf
            verkauf_kunde.verkauf();

            auftragsbuch[i] = tische;
        }else{
            auftragsbuch[i] = 0;
        }
    }

    bilanzausgabe(&auftragsbuch[0]);

};

/* R�ckgabe: Anzahl gew�nschter Tische */
void Begruessungsfunktionen::kundenbegruessung(){

    try{
        std::cout << "Hallo Kunde. Wie viele Tische willst du kaufen?"
                  << std::endl;
        std::cin >> tische;
        // Test ob Eingabe tats�chlich int
        if(!std::cin){
            throw AUSNAHME_NaN;
        }
    }
    catch(int e){
        tische = ausnahmen.test_bestellungsaufnahme(e, tische);
    }

    std::cin.ignore(10000,'\n');
    std::cin.clear();

    // G�ltigkeitsbereich testen
    try{
        gueltigerBereich();
    }
    catch(int e){
        ausnahmen.test_bestellungsaufnahme(e);
    }
};

/* Bestell�berpr�fung */
int Begruessungsfunktionen::bestellungsverifikation(){

    bestellungverifikation: //Label f�r goto-Anweisung bei Verst�ndnisproblem

    // machbar?
    HerstellungVerkauf hrstlgVrkf1(tische, &myLagern);
    tische_machbar = hrstlgVrkf1.baubaretische();

    // Ja
    if(tische_machbar >= tische){

        #if 0
        std::cout << tisch.getPreis() << " Tischpreis " << std::endl;
        std::cout << tische << " bestellte Tische  " << std::endl;
        std::cout << tische * tisch.getPreis() << " Multiplikation\n"<<std::endl;
        #endif // 0

        std::cout << tische << " Tische also. " << "Das kostet "
                  << tische * tisch.getPreis() <<" Geld. \n";

        # if 0 // Makro PREISBERECHNUNG anpassen oder unn�tig?
        std::cout << tische << " Tische also. " << "Das kostet "
                  << PREISBERECHNUNG(tische) <<" Geld. ";
        #elseif 1 // Tisch als Attribut
        std::cout << tische << " Tische also. " << "Das kostet "
                  << tische * tisch.getPreis() <<" Geld. ";
        #else
        std::cout << tische << " Tische also. " << "Das kostet "
                  << tische*getLager().getPreise()["tisch"] <<" Geld. ";
        #endif // 0

        std::cout << "Wollen Sie diese verbindlich bestellen? \n (Ja/Nein)"
        << std::endl;
        // Antworten: ja, nein, ich versthe dich nicht
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
            tische = 0;
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
void Begruessungsfunktionen::bestellungsaufnahme(){

    begruessung:
    // Bestellung des Kunden annehmen
    kundenbegruessung();

    if(tische > 0){
        // Best�tigung und Machbarkeitspr�fung
        kaufabschluss = bestellungsverifikation();
        // 0: Bestellung wurde nicht best�tigt, beendet
        // 1: Bestellung best�tigt
        // 2: Bestellmenge zu gro�
        if ( kaufabschluss == 2){
            goto begruessung;
        }
    }else{ // Null Tische bestellt
        std::cout << "Es wurde kein Tisch bestellt.\n" << std::endl;
        tische = 0;
    }
};


/* Ausgabe Auftragsbuch */
void Begruessungsfunktionen::bilanzausgabe(int* auftraege){
    for(i = 0; i<Testkunden; i++){
        std::cout << "Kunde " << i+1 << " hat " << *(auftraege+i)
                  << " Tische gekauft." << std::endl;
    }
}

/* G�ltigkeitsbereich der Bestellung pr�fen */
void Begruessungsfunktionen::gueltigerBereich(){
    //Abfrage ob Zahl gr��er als 0
    if(tische < 0){
        throw AUSNAHME_ZuKlein;
    }
    // Bestellmenge = 0
    if(tische == 0){
        throw AUSNAHME_Null;
    }
}

