// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.01.01 der C++ Programmierung
//   Struct (Wiederholung zur Einfuerung in OOP)

#include <iostream>

struct Farbe
{
	int farbe; // * 1=rot, 2=gelb ...
};

struct Kreis
{
	float radio;
	int koordX, koordY;
	struct Farbe farbeKreis;

}kreis4, kreis5;

int main(int argc, char **argv){

	Kreis kreis1;
	Kreis kreis2;
	Kreis kreis3 = {8, 10, 30};

	kreis1.radio = 5;
	kreis2.radio = 13;
	kreis4.koordX = 16;
	kreis4.koordY = 3;

	std::cout << "Kreis 1 Radio: > " << kreis1.radio << std::endl;
	std::cout << "Kreis 2 Radio: > " << kreis2.radio << std::endl;
	std::cout << "Kreis 3 Radio: > " << kreis3.radio << " und Mittelpunkt: > " << "X :" << kreis3.koordX <<  ", Y :" << kreis3.koordY << std::endl;
	std::cout << "Kreis 4 Mittelpunkt: > " << "X :" << kreis4.koordX << ", Y :" << kreis4.koordY << std::endl;

	struct Kreis kreise[5];
	int i=0;
	for(i=0; i<3; i++)
	{
		kreise[i].radio = (i+3.3)*2.18;
		std::cout << "Kreise Nr. " << i << " "<< kreise[i].radio << std::endl;
	}
return 0;
}
