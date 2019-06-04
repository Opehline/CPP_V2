// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.05.01 der C/C++ Programmierung
// * Eingabe von Texten mit scanf().

#include <stdio.h>

int main()
{
	int a=0;

	printf("Wie alt sind Sie...? : \n");
	scanf("%i", &a);
	//fflush(stdin);
	printf("Sie sind %i Jahre alt? Ohh...!\n", a);

return 0;
}
