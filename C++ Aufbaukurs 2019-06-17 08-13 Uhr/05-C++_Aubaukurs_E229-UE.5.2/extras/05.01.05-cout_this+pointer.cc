// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.01.03 der C++ Programmierung
// * Kleines Beispiel this-Operator

#include <iostream>

struct Haus
{
	int Fenster;
	int Tueren;
	int Stockwerke;
	int Material;
	
	void funkHaus(struct Haus* _p, int _Fenster, int _Tueren, int _Stockwerke, int _Material);
};

void Haus::funkHaus(struct Haus* _p, int _Fenster, int _Tueren, int _Stockwerke, int _Material)
{
	_p->Fenster = _Fenster;
	_p->Tueren = _Tueren;
	_p->Stockwerke = _Stockwerke;
	_p->Material = _Material;

	//printf("%i, %i, %i, %i", _p->Fenster, _p->Tueren, _p->Stockwerke, _p->Material);
	std::cout << this << " " << _p << std::endl;
}


int main()
{
	struct Haus meinhaus;
	struct Haus* p = &meinhaus;
	meinhaus.funkHaus(p, 16,10,3,1);
}
