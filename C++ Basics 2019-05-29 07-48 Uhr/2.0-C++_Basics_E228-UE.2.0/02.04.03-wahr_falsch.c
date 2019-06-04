// Gisela Neira
// C++ Basics E228
// * Programm 02.04.03 in der C/C++ Programmierung
// * Logik: alles was ungleich Null ist, gilt als WAHR

#include <stdio.h>


int main(int argc, char **argv)
{
    float a1 = 4.09851;
    char a2 = 'f';
    char a3 = '\0';     // Richtige Null. Auch NULL: 0x00
    char a4 = '0';      // Zeichen

    short int b = 0;    // Richtige Null
    short int z=NULL;   // Richtige Null
    short int w=0x00;   // Richtige Null - Hexadezimaldarstellung

    int c = a1||b;      // Oder
    int d = a2||a3;     // Oder
    int e = a3||b;      // Oder
    int f = a4||b;      // Oder

    int g = a1&&z;      // Und
    int h = a2&&b;      // Und
    int i = a3&&a4;     // Und
    int j = a4&&b;      // Und
    int k = a4&&a1;     // Und

    printf("C: %i\n", c); 	//1	, weil a1 keine "richtige" Null ist																														// 1
    printf("D: %i\n", d); 	//1	nur 0 oder 1, weil es in C kein boolean gibt																																// 1
    printf("E: %i\n", e); 	//0																																// 0
    printf("F: %i\n", f); 	//1																																	// 1

    printf("G: %i\n", g); 	//0																																// 0
    printf("H: %i\n", h); 	//0																																// 0
    printf("I: %i\n", i); 	//0																																// 0
    printf("J: %i\n", j); 	//0																																// 0
    printf("K: %i\n", k);   //1	                                                                                                                               // 1

return 0;
}

