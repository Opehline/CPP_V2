// Gisela Neira
// C++ Basics E228
// * Programm 02.02.02 der C/C++ Programmierung
// * Variablentypen und ihre groesseen.
// * UTF-8 Encoding mit wchar_t und setlocale.
// * wchar_t (http://www.utf8-zeichentabelle.de/)

#include <stdio.h>
#include <wchar.h>
#include <locale.h>


int main(int argc, char **argv)
{
	// * Ein uns auskommenieren
    setlocale(LC_ALL, "");
	//setlocale(LC_ALL, "de_DE.UTF-8");
 	//setlocale(LC_NUMERIC, "de_DE.UTF-8");

	// * sizeof() misst die Groesse der Variablentypen
	// * unabhaengig davon ob die Variable intialisiert
	// * oder nicht, wurde.
    int i_int = 1298564; 		// * Beispiel initialisierte Variable
    short int sh_int;			// * Beispiel nicht initialisierte Variable
    unsigned short ush_int;
    long int l_int;
    char u_char;
    signed char s_char = 'c';
    float f_float;
    double d_double;
    long double l_double = 15.78569631485697;

    // * Wie ermittelt sich die Groesse der Arrays von Float?
    float a_float1[10]; //|............||............||............|
    float a_float2[1];
    float a_float3[5];

	float a = 5;
    float b = 2;
    float divi = a/b;

    // * Groesse erraten:
    signed char a_char1[10];
    signed char a_char2[2];
    signed char a_char3[6];

    typedef int auchInt;
    auchInt nun;

	printf("\nSpeichergr\xf6\xdfen in Bytes!\n");
    printf("\nChararten:\n");
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <char>  \t\t\t%i\n", sizeof(char));
	printf("Speichergr\xf6\xdf""en auf diesem Rechner <wchar_t>  \t\t\t%i\n", sizeof(wchar_t));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <signed char>  \t\t%i\n", sizeof(s_char));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <unsigned char>  \t\t%i\n", sizeof(unsigned char));

    printf("\nIntarten:\n");
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <int>  \t\t\t%i\n", sizeof(i_int));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <int>  \t\t\t%i\n", sizeof(int));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <auchInt>  \t\t\t%i\n", sizeof(auchInt));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <short int>  \t\t\t%i\n", sizeof(sh_int));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <short int>  \t\t\t%i\n", sizeof(short int));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <unsigned short int>  \t%i\n", sizeof(ush_int));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <unsigned short int>  \t%i\n", sizeof(unsigned short int));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <long int>  \t\t\t%i\n", sizeof(l_int));

    printf("\nGleitkommazahlenarten:\n");
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <float>  \t\t\t%i\n", sizeof(f_float));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <double>  \t\t\t%i\n", sizeof(d_double));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <long double>  \t\t%i\n", sizeof(l_double));

	printf("\nArrays (Beispiele):\n");
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <array von float>  \t\t%i\n", sizeof(a_float1));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <array von float>  \t\t%i\n", sizeof(a_float2));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <array von float>  \t\t%i\n", sizeof(a_float3));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <array von char>  \t\t%i\n", sizeof(a_char1));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <array von char>  \t\t%i\n", sizeof(a_char2));
    printf("Speichergr\xf6\xdf""en auf diesem Rechner <array von char>  \t\t%i\n", sizeof(a_char3));

	printf("\nGleitkommazahlenarten in deutscher Art: 1.000,00\n");
	printf("Division von 5 durch 2: %.2f\n", divi); // * Funktioniert nicht mit numeric allein

return 0;
}
