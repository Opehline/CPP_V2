// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.02.03 der C++ Programmierung
// * Ueberschreiben von Operatoren


#include <iostream>

using namespace std;

class Operanden {	
public:
    double a, b;
};

Operanden operator*(const Operanden &p1, const Operanden &p2)
{
    Operanden erg;
	erg.a = p1.a * p2.a;		// *  Beliebig erweiterbar. ZB: erg.a = 2*p1.a * p2.a;
	erg.b = p1.b * p2.b;		// *  Beliebig erweiterbar 
    return erg;
}

int main()
{
    Operanden obA; 
	obA.a=91;
	obA.b=75;
    Operanden obB;
	obB.a=150;
	obB.b=175;
    Operanden produkt = obA * obB;
    
    //produkt.a = obA.a * obB.a;		// *  Beliebig erweiterbar. ZB: erg.a = 2*p1.a * p2.a;
	//produkt.b = obA.b * obB.b;

    //int a=5*6;
    //cout << 1*4 << endl;

    cout << "obA " << "a: " << obA.a << ", b: " << obA.b << endl;
    cout << "obB " << "a: " << obB.a << ", b: " << obB.b << endl;
    cout << "produkt " << "a: " << produkt.a << ", b: " << produkt.b << endl;

    return 0;
}
