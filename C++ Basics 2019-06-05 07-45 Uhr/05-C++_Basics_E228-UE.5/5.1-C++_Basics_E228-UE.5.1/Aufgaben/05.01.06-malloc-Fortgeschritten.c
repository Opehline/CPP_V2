// Gisela Neira
// C++ Basics E228
// * Programm 06.01.04 der C/C++ Programmierung

#include <stdio.h>	
#include <stdlib.h>
#include <string.h>	

int main (int argc, char **argv){
	
		
	int i=0;
	int w=1;
	char *reacEq=(char*)malloc(w);

	if(reacEq==NULL)
	{
	    fprintf(stderr, "\nError allocating memory for string");
	    exit(1);
	}

	printf("\nPlease note that this calculator only operates with the elements C, H, O, and N!\n\n");
	printf("Enter your reaction: > ");
	
	fgets(reacEq, w, stdin);

	while(reacEq[strlen(reacEq)-1]!='\n')
	{
	    w*=2;
	    reacEq=(char *)realloc(reacEq, w);
	    fgets(reacEq+w/2-1 /*Zeigerarithmetic*/, w/2+1, stdin);
	    //reacEq[i]+1='\0';
	}
	
	int countArray=0;
	while(reacEq[countArray]!='\0')
	{ countArray++; }

	printf("Sie haben %s eingegeben.\n", reacEq);
	
	for(i=0; i<countArray; i++)
	{
	    if(reacEq[i]!='\n')
	    {
			printf("Position [%i] > %c\n", i, reacEq[i]);
		
			if (
			    (!((int)reacEq[i]==48))&&  // * 0
				(!((int)reacEq[i]==67))&&  // * C
			    (!((int)reacEq[i]==99))&&  // * c
			    (!((int)reacEq[i]==72))&&  // * H
			    (!((int)reacEq[i]==104))&& // * h
			    (!((int)reacEq[i]==79))&&  // * O
			    (!((int)reacEq[i]==111))&& // * o
			    (!((int)reacEq[i]==78))&&  // * N
			    (!((int)reacEq[i]==110))&& // * n
			    (!((int)reacEq[i]==43))&&  // * +
				(!((int)reacEq[i]==32))&&  // * ' '
			    (!((int)reacEq[i]==61))&&  // * =
			    (!((int)reacEq[i]==60))&&  // * <
			    (!((int)reacEq[i]==62))    // * >
	       	   )
			{   printf("\n!!Die von Ihnen eingegebene Formel enthaelt ungueltige(s) Zeichen!!!\n");
				printf("Erste ungueltige Eingabe > %c", reacEq[i]);
			    printf("\nErlaubte Zeichen sind C, H, O, N, +, ==, => und <=.\t\t\t!!\n");
			    exit(0); 
			}
			else printf("Zeichen ist erlaubt!\n");
		}
		else printf("Alle eingegebene Zeichen sind erlaubt!\n");
	}
	
	free(reacEq);

return 0;
}

