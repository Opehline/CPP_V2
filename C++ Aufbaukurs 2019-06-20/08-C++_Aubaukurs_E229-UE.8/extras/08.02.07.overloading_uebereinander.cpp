// C++ Aufbaukurs
// Gisela Neira
// * Progamm 09.02.07 der C++ Programmierung
// * klassisches Beispiel

#include <iostream>

using namespace std;

struct Punkt
{
    int x, y;    
};

Punkt operator+(Punkt p1, Punkt p2)
{
    Punkt ergebnis;

    ergebnis.x = p1.x + p2.x;
    ergebnis.y = p1.y + p2.y;
    return ergebnis;
}

Punkt operator*(int skalar, Punkt _p)
{
    Punkt ergebnis;

    ergebnis.x = skalar * _p.x;
    ergebnis.y = skalar * _p.y;
    return ergebnis;
}

void zeige(Punkt p)
{
	
    cout << "Punkt: " << p.x << " " << p.y << endl;    
}
int main()
{
    Punkt p1 = {1, 2};
    Punkt p2 = {3, 4};

    Punkt summe;

    summe = p1+p2;
   	zeige(2*summe+p1);

return 0;
}
