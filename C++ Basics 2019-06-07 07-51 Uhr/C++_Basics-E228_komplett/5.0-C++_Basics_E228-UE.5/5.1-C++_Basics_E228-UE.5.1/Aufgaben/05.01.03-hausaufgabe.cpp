// Gisela Neira
// C++ Basics E228
// * Programm 06.01.03 der C/C++ Programmierung
// * Mehrdimensionalen Array berechnen
// * Es wird der Notendurchschnitt der Faecher
// * ermittelt.

#include <iostream>

// * Teilnehmer
#define Teilnehmer 4
#define Faecher 2
// * Hier wird die erreichte Punktzahl der
// * Pruefungen eingetragen
#define Pruefungen 2


int main(int argc, char **argv)
{
    float punkte[Teilnehmer][Faecher][Pruefungen]={ // 4 2 2
	{ { 80, 75 }, { 95, 98 } }, // 000 001   010 011
	{ { 56, 100}, { 43, 100} }, // 100 101   110 111
	{ { 78, 89 }, { 84, 73 } }, // 200 201   210 211
	{ { 78, 77 }, { 76, 73 } }  // 300 301   310 311
    };

	int a=0, m=0, i=0;
	float sum=0;
  
	for(a=0; a<Teilnehmer; a++)
	{	
		for(m=0; m<Faecher; m++)
		{
			for(i=0; i<Pruefungen; i++)
			{
				std::cout << "Teilnehmer " << a << ", Fach " << m << ": " << punkte[a][m][i];
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

  
	for(a=0; a<Teilnehmer; a++)
	{
		for(m=0; m<Faecher; m++)
		{
			sum=0;
			for(i=0; i<Pruefungen; i++)
			{
				sum += punkte[a][m][i];
				if(!i%2==0)
				{
					std::cout << "Notendurchschnitt Teilnehmer " << a << ", Fach " << m << ": " << sum/2 << " Punkte von 100.\n";
				}
			}
		}
	}
   

return 0;
}
