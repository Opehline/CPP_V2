// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.05.02 der C++ Programmierung
// * Beispiel Ueberladen von einer Funktion in
// * erbender und nicht erbender Klassen


#include <iostream>

class ZweiDimensionalerPunkt
{
    public:
    
		float x;
		int y;
	
		void zeige_Punkt(float x, int y);
};

// * Im folgenden: Erbende Klassen
class DreiDimensionalerPunkt : public ZweiDimensionalerPunkt
{
    public:
	
		double z;   
		void zeige_Punkt(float x, float y, double z);
};

class VierDimensionalerPunkt : public DreiDimensionalerPunkt
{
    public:
		double a;
		double zeige_Punkt(int x, float y, double z, double a);
};

// * Im folgenden eine nicht erbende Klasse
class Baum
{
    public:

		std::string BaumArt;
		void zeige_Punkt(float x, int y);
};


// * Funktionen
void ZweiDimensionalerPunkt::zeige_Punkt(float x, int y)
{
    std::cout << "2-D" << std::endl;
    std::cout << "X-Koordinate: "<< x << "\nY-Koordinate: " << y  << std::endl;
}
void DreiDimensionalerPunkt::zeige_Punkt(float x, float y, double z)
{
    std::cout << "3-D" << std::endl;
    std::cout << "X-Koordinate: "<< x << "\nY-Koordinate: " << y << "\nZ-Koordinate: " << z  << std::endl;
}

double VierDimensionalerPunkt::zeige_Punkt(int x, float y, double z, double a)
{
    std::cout << "4-D" << std::endl;
    std::cout << "X-Koordinate: "<< x << "\nY-Koordinate: " << y << "\nZ-Koordinate: " << z  << "\nA-Koordinate: " << a << std::endl;
    return a;
}

void Baum::zeige_Punkt(float x, int y)
{
    std::cout << "Ich bin die Baumart." << std::endl;
}

int main()
{
    ZweiDimensionalerPunkt p2;
    p2.zeige_Punkt(3, 4);
    
    DreiDimensionalerPunkt p3;
    p3.zeige_Punkt(2, 8, 5.6);
    
    VierDimensionalerPunkt p4;
    p4.zeige_Punkt(8, 9.876, 0.87654, 8.098327);
    
	Baum b1;
	b1.zeige_Punkt(9,7);

return 0;
}
