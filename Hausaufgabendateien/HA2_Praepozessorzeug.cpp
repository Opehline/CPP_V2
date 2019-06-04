// Tanja TTreffler
// Hausaufgabe von Dienstag

// Aufgaben aus ppt

/*
+ Ein Programm schreiben das typedef, const, Schalter und auto enthält.
+ Es soll zwei float Zahlen multiplizieren: x=a*b;
+ Die Faktoren sollen mit „gleitkommazahl“ deklariert werden: gleitkommazahl a, b;
+ Das Resultat soll durch auto bestimmt sein: auto x;
~ Es soll der Datentyp von x auf dem Bildschirm ausgegeben werden.
+ Es soll die Lösung auf dem Bildschirm ausgegeben werden.
+ Alle Ausgaben in einer Funktion verlegen.
+ Fortgeschritten: Es soll möglich sein die Ausgabe des Datentyps auszuschalten mit einem Schalter: #if ... #endif */
// #if // Fallunterschiedung aufgrund eines koonstanten Ausdrucks (0 oder nicht 0)

#include <iostream>
#include <cstdlib>
#include <typeinfo>


#define schalten  4 // #define: Setzt einen Schlater // #undef Setzt schalter zurück
// wenn !0 Datentypausgabe

void ausgaben(auto x){

    #if schalten // Bei 0 keine Ausgabe, sonst schon
    // Datentypausgabe
    std::cout << "Der Datentyp des Produkts ist " << typeid(x).name() << std::endl;
    #endif // 0

    std::cout << "Das Produkt von der Multiplikation ist " << x  << "." << std::endl;

}

int main(int argc, char **argv){

    typedef float gleitkommazahl;

    gleitkommazahl  b;
    const gleitkommazahl a = 3.5;
    b = 234.5;

    // Multiplikation
    auto x = a * b;

    ausgaben(x);

    return 0;
}
