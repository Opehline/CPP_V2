// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.02.08 der C++ Programmierung
// * Eine Katastophe! So niemals!

#include <fstream>
#include <iostream>

using namespace std;



class Variablen {
public:
    double a, b;
};

Variablen operator +(const Variablen &p1,const Variablen &p2)
{
	cout << "Hallo";

	ofstream mein_dataFile;
    mein_dataFile.open("data.txt");
    mein_dataFile << "Oh! Upssss!" << endl;
	mein_dataFile.close();
}

int main()
{
    Variablen Variablen1;
	Variablen1.a=13;
	Variablen1.b=24;
    Variablen Variablen2;
	Variablen2.a=37;
	Variablen2.b=43;
    Variablen Variablen1und2 = Variablen1 + Variablen2;

   return 0;
}
