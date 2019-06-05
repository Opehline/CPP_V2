// Gisela Neira
// C++ Basics E228
// * Programm 05.06.03 der C/C++ Programmierung
// * Mehrdimensionalen Array initialisieren und fuellen

// Programm so anpassen, dass durchnittliche Punktzahl je Kurs je Teilnehmer ausgegeben wird

#include <iostream>
#include<stdio.h>

// * Teilnehmerzahl aendern kann.
#define Teilnehmer 4
#define Faecher 2
// * Hier wird die erreichte Punktzahl der
// * Pruefungen eingetragen
#define Pruefungen 2

float schnitt(int a, int b);


// * Schnittstelle mit Arrayuebergabe
void farrayAusgabe(int (*array)[Faecher][Pruefungen])
//void farrayAusgabe(int array[Teilnehmer][Faecher][Pruefungen])
//void farrayAusgabe(int array[][Faecher][Pruefungen])
{
	int a=0, m=0, i=0;

	for(a=0; a<4; a++)
	{
		for(m=0; m<2; m++)
		{
		    printf(" Durchschnitt Teilnehmer %d, Fach %d: %.1f Punkte von 100.\n", a, m, schnitt(array[a][m][0],array[a][m][1]));
			/*for(i=0; i<2; i++)
			{
				//std::cout << array[a][m][i] << std::endl;
				std::cout << "Teilnehmer" << a << ", Fach " << m << ", Note " << array[a][m][i] << std::endl;
			}*/
		}
	}std::cout << "\n";
}


int main(int argc, char **argv)
{

    int punkte[Teilnehmer][Faecher][Pruefungen]= // 4 2 2
	{
		{ { 80, 75 }, { 95, 98 } }, // 000 001   010 011
		{ { 56, 100}, { 43, 100} }, // 100 101   110 111
		{ { 78, 89 }, { 84, 73 } }, // 200 201   210 211
		{ { 78, 77 }, { 76, 73 } }  // 300 301   310 311
    };

	farrayAusgabe(punkte);

return 0;
}


float schnitt(int a, int b){
    return (a+b)/2.0;
};
