// Gisela Neira
// C++ Basics E228
// * Programm 05.02.05 der C/C++ Programmierung
// * Loesungsvorschlag (malloc)

#include <stdio.h>	
#include <stdlib.h>
#include <string.h>
	
int i=0;
int w=1;

void fehlerSpeicher(char *reacEq);
void Meldung();
void Alloquieren(char *reacEq);
void AlloquierenErweitern(char *reacEq);
void AusgabeArray(char *reacEq);
void AusgabeFalscheEingabe();
void AusgabeRichtigeEingabe();

int main (int argc, char **argv)
{
	
	char *reacEq=(char*)malloc(w); 

	fehlerSpeicher(reacEq);
	Meldung();
	Alloquieren(reacEq);
	free(reacEq);

return 0;
}

void fehlerSpeicher(char *reacEq)
{
	if(reacEq==NULL)
	{
		fprintf(stderr, "\nFehler beim alloquieren von Speicher!");
		exit(1);
	}
}


void Meldung()
{
	printf("\nPlease note that this calculator only operates with the elements C, H, O, and N!\n\n");
	printf("Enter your reaction: > ");

}

void Alloquieren(char *reacEq)
{
	
	fgets(reacEq, w, stdin);
	AlloquierenErweitern(reacEq);
}


void AlloquierenErweitern(char *reacEq)
{
	while(reacEq[strlen(reacEq)-1]!='\n')
	{
	    w*=2;
	    reacEq=(char *)realloc(reacEq, w);
	    fgets(reacEq+w/2-1 /*Zeigerarithmetic*/, w/2+1, stdin);
	}
	AusgabeArray(reacEq);

}


void AusgabeArray(char *reacEq)
{
	printf("Sie haben %s eingegeben.\n", reacEq);
	
	for(i=0; i<w; i++) 
	{
	    if(reacEq[i]!=0)
	    {
		printf("Position [%i] > %c\n", i, reacEq[i]);	
		if (
		    (reacEq[i]!='C')&&
		    (reacEq[i]!='c')&&
		    (reacEq[i]!='H')&&
		    (reacEq[i]!='h')&&
		    (reacEq[i]!='O')&&
		    (reacEq[i]!='o')&&
		    (reacEq[i]!='N')&&
		    (reacEq[i]!='n')&&
		    (reacEq[i]!='+')&&
		    (reacEq[i]!=' ')&&
		    (reacEq[i]!='=')&&
		    (reacEq[i]!='<')&&
		    (reacEq[i]!='>')
	       )
		AusgabeFalscheEingabe();
	    }
	}
	AusgabeRichtigeEingabe();
}

void AusgabeFalscheEingabe()
{   
	printf("---------------");
    printf("\n!!Die von Ihnen eingegebene Formel enthaelt ungueltige Zeichen!!!");
    printf("\nErlaubte Zeichen sind C, H, O, N, +, ==, => und <=.\t\t\t!!\n");
    printf("---------------\n\n");
    exit(0); 
}

void AusgabeRichtigeEingabe()
{   
	printf("Alle eingegebene Zeichen sind erlaubt!\n");
}
