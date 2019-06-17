// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.07.01 der C Programmierung
// * const-Funktionen: koennen in C Programmierung 
// * auch nicht const-Funktionen aufrufen

#include <stdio.h>

#define MAX 10

char Geschlecht; 		// * m=maenlich, w=weiblich, u=undefiniert
int Alter;
char Name;


const int funktion_sprachenvater() 
{
	printf("Ich kann englisch.");
	printf("Ich kann deutsch.");
	printf("Ich kann italienisch.");
}
const int funktion_Geschlecht(char Geschlecht) 
{
	printf("Geschlecht: %c", Geschlecht);
}
const int funktion_Name(char Name) 
{
	printf("Name: %c", Name);
}
/*const*/ int funktion_Alter(int Alter) 
{
	printf("Alter: %i", Alter);
	return Alter;
}	

const int funktion_DatenAusgeben(char _geschlecht, int _alter, char _name)
{
	funktion_sprachenvater();
	funktion_Geschlecht(_geschlecht);
	funktion_Name(_name);
	funktion_Alter(_alter);
	printf("Ich werde in drei Jahren %i Jahre alt sein.", Alter+3);
}

int main(int argc, char **argv)
{
    funktion_DatenAusgeben('m', 56, 'H');

return 0;
}
