// Gisela Neira
// C++ Basics E228
// * Programm 02.03.01 der C/C++ Programmierung
// * wchar_t

#include <stdio.h>
#include <locale.h>
#include <wchar.h>

#define LONG 3

int main()
{
    wchar_t text1;
    char text2;

    wprintf(L"Eingabe: \n");
    wscanf(L"%c", &text1);
    wprintf(L"Ausgabe: %c\n", text1);

    printf("Eingabe: \n");
    scanf("%c", &text1);
    printf("Ausgabe: %c\n", text1);

    printf("Eingabe: \n");
    scanf("%c", &text2);
    printf("Ausgabe: %c\n", text2);


return 0;
}
