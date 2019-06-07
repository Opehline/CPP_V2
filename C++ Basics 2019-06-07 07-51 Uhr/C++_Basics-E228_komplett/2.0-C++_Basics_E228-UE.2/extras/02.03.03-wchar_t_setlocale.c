// Gisela Neira
// C++ Basics E228
// * Programm 02.03.03 der C/C++ Programmierung
// * wchar_t / setlocale

#include <stdio.h>
#include <locale.h>
#include <wchar.h>

#define LONG 3

int main()
{
	setlocale(LC_ALL, "");

    wchar_t einaeausgeben=L'\xe4';
    wchar_t einoeausgeben=L'\xfc';
    wchar_t einueausgeben=L'\xf6';
    wchar_t einszausgeben=L'\xdf';

 	printf("Buchstabe ae wird ausgegeben: %lc\n", einaeausgeben);
    printf("Buchstabe ue wird ausgegeben: %lc\n", einueausgeben);
    printf("Buchstabe oe wird ausgegeben: %lc\n", einoeausgeben);
    printf("Buchstabe sz wird ausgegeben: %lc\n\n", einszausgeben);

return 0;
}
