// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.02.01 der C++ Programmierung
// * Ueberschreiben von Operatoren
// * Einfuehrungsbeispiel
// * Fehler!

#include<iostream>

using namespace std;

class Summe
{
	private:
		double a, b;
	public:

		// * Alternative Form der Initialisierung der private-Variablen
		Summe(const double _a, const double _b) : a(_a), b(_b)
		{}

		double getA()
		{
			return a;
		}

		double getB()
		{
			return b;
		}
};

int main()
{
    Summe summe1(50, 75);
    Summe summe2(150, 175);
    cout << summe1.getA()+summe2.getA() << endl;
	cout << summe1.getB()+summe2.getB() << endl;

    return 0;
}
