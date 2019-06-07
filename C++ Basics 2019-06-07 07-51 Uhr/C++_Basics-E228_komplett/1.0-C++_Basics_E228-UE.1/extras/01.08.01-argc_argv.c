// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.08.01 der C/C++ Programmierung
// * Eingabe durch command line C Programmierung.
// * Wie argv[0] benutzen, also mit der *.exe agieren.
// * Funktionirt auf Limux, nicht auf Windows!

#include<stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    // * Deklaration der Variablen.
    // * Hinweis: char *argv[] ist schon als Übergabewert deklariert.
    int i=0, j=0;
    char name[7];
    char name2[5];
    
    // * <argv> werden als String in <name> kopiert.
    strcpy(name, *argv);

    // * <name> wird auf dem Bildschirm ausgegeben.
    for(i=0; i<6; i++)
	{
		printf("Pos %i > %c \n", i, name[i]);
		// Falsch:
		//printf("Pos %i > %c > %c \n", i, name[i], argv[i]);
    }
    
    // * <name> ohne . und / wird auf <name2> kopiert.
    for(i=2, j=0; i<=5; i++, j++)
	{
		name2[j] = name[i];
		printf("Name2, pos[%i]: > %c \n", j, name2[j]);
    }

    // * <name2> wird wieder in <name> kopiert.
    strcpy(name, name2);

    // * Die Datei prog wird geloescht.
    remove(name);

return 0;
}
