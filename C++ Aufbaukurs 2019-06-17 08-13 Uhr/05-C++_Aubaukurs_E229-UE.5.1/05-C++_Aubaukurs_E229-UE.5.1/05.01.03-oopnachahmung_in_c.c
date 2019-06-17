// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.01.03 der C++ Programmierung
// * Kleines Beispiel this-Operator

#include <stdio.h>

struct Haus
{
	int Fenster;
	int Tueren;
	int Stockwerke;
	int Material;
};

void funkHaus(struct Haus* this, int _Fenster, int _Tueren, int _Stockwerke, int _Material)
{
	this->Fenster = _Fenster;
	this->Tueren = _Tueren;
	this->Stockwerke = _Stockwerke;
	this->Material = _Material;

	printf("Fenster> %i\n"
           "Tueren> %i\n"
           "Stockwerke> %i\n"
           "Material>%i\n",
           this->Fenster, this->Tueren, this->Stockwerke, this->Material);
}

int main()
{
	struct Haus meinhaus;
	funkHaus(&meinhaus, 16,10,3,1);
}
