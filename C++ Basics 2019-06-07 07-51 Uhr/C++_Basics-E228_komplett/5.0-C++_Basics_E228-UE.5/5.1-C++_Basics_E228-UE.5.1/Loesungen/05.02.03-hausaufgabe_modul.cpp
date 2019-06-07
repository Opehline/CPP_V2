// Gisela Neira
// C++ Basics E228
// * Programm 05.02.03 der C/C++ Programmierung
// * Mehrdimensionalen Array berechnen
// * Es wird der Notendurchschnitt der Faecher
// * ermittelt.
// * Loesungsvorschlag

#include <iostream>

#define Teilnehmer 4
#define Faecher 2
#define Pruefungen 2

void fTrennen(int x)
{
	if(!x%2==0)
	{ std::cout << "\n"; }
}

void fAusgabeNotenPruefung(float (*array)[Faecher][Pruefungen], int i, int a, int m)
{
	for(i=0; i<Pruefungen; i++)
	{
		std::cout << "Teilnehmer " << a << ", Fach " << m << ": " << array[a][m][i] << "\t";
		fTrennen(i);
	}
}

void farrayAusgabeNotedurchschnitt(float (*array)[Faecher][Pruefungen], int i, int a, int m)
{
	float sum=0;
	for(i=0; i<Pruefungen; i++)
	{
		sum += array[a][m][i];
		if(!i%2==0)
		{ std::cout << "Notendurchschnitt Teilnehmer " << a << ", Fach " << m << ": " << sum/2 << " Punkte von 100.\n"; }
	}
	fTrennen(m);
}

void farrayAusgabe(float (*array)[Faecher][Pruefungen])
{
	int a=0, m=0, i=0;
  
	for(a=0; a<Teilnehmer; a++)
	{	
		for(m=0; m<Faecher; m++)
		{
			fAusgabeNotenPruefung(array, i,a,m);
			farrayAusgabeNotedurchschnitt(array, i,a,m);
		}
	}std::cout << "\n";
}


int main(int argc, char **argv)
{

    float punkte[Teilnehmer][Faecher][Pruefungen]={ // 4 2 2
	{ { 80, 75 }, { 95, 98 } }, // 000 001   010 011
	{ { 56, 100}, { 43, 100} }, // 100 101   110 111
	{ { 78, 89 }, { 84, 73 } }, // 200 201   210 211
	{ { 78, 77 }, { 76, 73 } }  // 300 301   310 311
    };

	farrayAusgabe(punkte);

return 0;
}
