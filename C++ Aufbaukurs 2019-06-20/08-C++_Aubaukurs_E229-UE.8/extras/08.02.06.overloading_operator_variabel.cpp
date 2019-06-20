// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.02.05 der C++ Programmierung
// * Ueberschreiben von Operatoren
// * Ersetzbarer Operator

#define OPERATOR *

#include <iostream>

using namespace std;

class Operation 
{
	public:
	    double a, b;
		Operation()
		{
			a=0;
			b=0;
		}
};

 
Operation operator OPERATOR (const Operation &p1,const Operation &p2)
{
    Operation erg;
	erg.a = p1.a OPERATOR p2.a;		
	erg.b = p1.b OPERATOR p2.b;		
    return erg;
}

int main()
{
    Operation operator1;
	operator1.a=6;
	operator1.b=5;
    Operation operator2;
	operator2.a=3;
	operator2.b=6;
    Operation operator1und2 = operator1 OPERATOR operator2;

    cout << "operator1 " << "a: " << operator1.a << ", b: " << operator1.b << endl;
    cout << "operator2 " << "a: " << operator2.a << ", b: " << operator2.b << endl;
    cout << "operator1und2 " << "a: " << operator1und2.a << ", b: " << operator1und2.b << endl;

    return 0;
}
