// Gisela Neira
// C++ Basics E228
// * Hausaufgabe Loesung (Vorschlag)  05.06.04 der C/C++ Programmierung
// * Mehrdimensionalen Array berechnen
// * Es wird der Notendurchschnitt der Faecher
// * ermittelt.

#include <iostream>

// * Teilnehmer ist eine Varieble, weil sich die
// * Teilnehmerzahl aendern kann.
#define Teilnehmer 4
#define Faecher 2
// * Hier wird die erreichte Punktzahl der
// * Pruefungen eingetragen
#define Pruefungen 2


// * Schnittstelle mit Arrayuebergabe
//void farrayAusgabe(float (*array)[Faecher][Pruefungen])
void farrayAusgabe(float array[Teilnehmer][Faecher][Pruefungen])
//void farrayAusgabe(float array[][Faecher][Pruefungen])
{
	int a=0, m=0, i=0;
  
	for(a=0; a<Teilnehmer; a++)
	{	
		for(m=0; m<Faecher; m++)
		{
			for(i=0; i<Pruefungen; i++)
			{
				std::cout << "Teilnehmer " << a << ", Fach " << m << ": " << array[a][m][i] << "\t";
				if(!i%2==0)
				{
					std::cout << "\n";
				}
			}
			if(!m%2==0)
			{
				std::cout << "\n";
			}
		}
	}std::cout << "\n";
}

//void farrayNote(float (*array)[Faecher][Pruefungen])
void farrayNote(float array[Teilnehmer][Faecher][Pruefungen])
//void farrayNote(float array[][Faecher][Pruefungen])
{
	int a=0, m=0, i=0;
	float sum=0;
  
	for(a=0; a<Teilnehmer; a++)
	{
		for(m=0; m<Faecher; m++)
		{
			sum=0;
			for(i=0; i<Pruefungen; i++)
			{
				sum += array[a][m][i];
				//std::cout << array[a][m][i];
				if(!i%2==0)
				{
					std::cout << "Notendurchschnitt Teilnehmer " << a << ", Fach " << m << ": " << sum/2 << " Punkte von 100.\n";
				}
			}
		}// std::cout << "\n";//std::cout << "\n";
	}
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
	farrayNote(punkte);

return 0;
}
