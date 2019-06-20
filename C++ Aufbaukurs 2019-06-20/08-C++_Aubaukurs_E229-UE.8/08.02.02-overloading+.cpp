// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.02.02 der C++ Programmierung
// * Ueberschreiben von Operatoren
// * Einfuehrungsbeispiel


#include <iostream>

using namespace std;

struct Summe
{
    double a, b;
};

Summe operator+(const Summe& p1, const Summe& p2)
{
    Summe erg;
	erg.a = p1.a + p2.a*2;		// *  Beliebig erweiterbar. ZB: erg.a = 2*p1.a + p2.a;
	erg.b = p1.b + p2.b;		// *  Beliebig erweiterbar
    return erg;
}

int main()
{
    Summe summe1, summe2, summe3;
	summe1.a=1;
	summe1.b=75;
    Summe summe2;
	summe2.a=150;
	summe2.b=175;
    Summe summe1und2 = summe1 + summe2;

    //int a = 5+1;

    cout << "summe1und2 " << "a: " << summe1und2.a << ", b: " << summe1und2.b << endl;
    //cout << a << endl;

    return 0;
}
