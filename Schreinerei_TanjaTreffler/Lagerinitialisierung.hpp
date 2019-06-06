#include <iostream>
#include <map>            // std::map
#include <iterator>
#include <string>

/* globale Variablen*/
extern int NAGELKAUFEINHEIT;
extern int BRETTKAUFEINHEIT;
extern int nagelJeTisch;
extern int brettJeTisch;

/* globale Variablen (nicht konstant) */
// Lagerbestand deklarienen
extern int bretter;
extern float geld;
extern int naegel;
extern int tische;


/* Preisliste */
#define UmbauPreise
#ifndef UmbauPreise
/* globale Konstanten */
const float nagelpreis =  0.05;
const float brettpreis =  1.00;
const float tischpreis = 62.00;
#endif // UmabuPreise
#if 0 // http://www.cplusplus.com/reference/utility/pair/pair/
// Pair erzeugen: z.B.
// a) std::pair <std::string,float> product2 ("nagel",0.05);
// b) product1 = std::make_pair(std::string("lightbulbs"),0.99);
// Array unpraktisch zum einfachen Aufruf, Iteration notwendig, um passenden Wert vorne zu finden
// z.B: wo ist der Wert vorne = Nagel, gib mir von dort den 2. Wert
const std::pair <std::string,float> preisliste[3] = {
    std::make_pair(std::string("nagel"),0.05), // 0  Erster Eintrag: .First
    std::make_pair(std::string("brett"),1.00), // 1  Zweiter Eintrag .Second
    std::make_pair(std::string("tisch"),62.00) // 2
};
#endif // 0

// Besser eine Map nutzen! // const?
extern std::map<std::string, float> preise;


void loadLagerstart();                    // Anfangsbestand für das Lager
