// Tanja Treffler
// Projekt
//
// Betreibsablauf in der Schreinerei


#include <iostream> // std::cout
#include <stdio.h>  // printf()
#include <cstdlib>
#include <string>   // std::string
#include <typeinfo>
#include <utility>  // std::pair, std::make_pair
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds


#undef Materialnachkauf_V1
#define PreislisteEinbau

/* Weitere Funktionen deklarieren*/
void loadLagerstart();                    // Anfangsbestand für das Lager
int  bestellungsaufnahme();               // Komplette Aufnahme der Kundenbestellung
int kundenbegruessung();                  // Rückgabe: Anzahl gewünschter Tische
int  bestellungsverifikation(int tisch);  // Bestätigung und Prüfung auf Machbarkeit
// 0 = False // 1 = True // 2 = Menge war zu hoch, mach nochmal
void verkauf(int tisch);                  // Verkauf
void materialnachkauf(int tisch);         // Lager aufstocken, um Kundenwunsch zu erfüllen
void tischbau(int tisch);                 // Macht aus Material Tische
int baubaretische();                      // Wie viele Tische können derzeit maximal hergestellt werden?
void startBetrieb();                      // Was noch in der Main übrig war

/* globale Konstanten */
const float nagelpreis =  0.05;
const float brettpreis =  1.00;
const float tischpreis = 62.00;

/* Preisliste */
#ifdef PreislisteEinbau // http://www.cplusplus.com/reference/utility/pair/pair/
// Pair erzeugen: z.B.
// a) std::pair <std::string,float> product2 ("nagel",0.05);
// b) product1 = std::make_pair(std::string("lightbulbs"),0.99);
#if 1
const std::pair <std::string,float> preisliste[3] = {
    std::make_pair(std::string("nagel"),0.05), // 0  Erster Eintrag: .First
    std::make_pair(std::string("brett"),1.00), // 1  Zweiter Eintrag .Second
    std::make_pair(std::string("tisch"),62.00) // 2
};
#endif // 1

#if 0
std::pair <std::string,float> preisn ("nagel",0.05);
std::pair <std::string,float> preisb ("brett",1.00);
std::pair <std::string,float> preist ("tisch",62.00);
const std::pair <std::string,float> preisliste[3] = {preisn,preisb, preist};
#endif // 1
#endif // PreislisteEinbau

#define PREISBERECHNUNG(t) (t)*tischpreis



/* globale Variablen (nicht konstant) */
// Lagerbestand deklarienen
extern int bretter;    // Anzahl Preis:  1.00 Geld
extern float geld;    //
extern int naegel;    // Anzahl Preis:  0.05 Geld
extern int tische;    // Anzahl Preis: 62.00 Geld



