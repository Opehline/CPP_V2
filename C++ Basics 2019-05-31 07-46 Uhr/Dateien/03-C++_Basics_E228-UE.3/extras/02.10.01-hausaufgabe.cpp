// Gisela Neira
// C++ Basics E228
// * Hausaufgabe 02.10.01 der C/C++ Programmierung


#include <iostream>
#include <typeinfo>

using namespace std;


typedef const int gleitkommazahl;

void ausgabe(/*auto*/ int x, gleitkommazahl a, gleitkommazahl b); // * Nur moeglich ab C++14


int main(int argc, char **argv)
{
    gleitkommazahl a=8, b=6;   
    auto x = a*b;
	// a = 3; // * Warum nicht moeglich?
	cout << "Programm Hausaufgabe 2." << endl;
    ausgabe(x, a, b);

//getchar();

return 0;
}


void ausgabe(/*auto*/ int ergebnis, gleitkommazahl x, gleitkommazahl y) // * Nur moeglich ab C++14
{
    #if 1
    	cout << "Datentyp: " << typeid(x).name() << endl;
    #endif
    
	cout << "Rechnung " << x << "*" << y << " = " << ergebnis << endl;
}
