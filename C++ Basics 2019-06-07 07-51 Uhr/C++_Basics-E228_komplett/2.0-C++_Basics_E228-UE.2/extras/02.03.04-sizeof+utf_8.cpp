// Gisela Neira
// C++ Basics E228
// * Programm 02.03.04 der C/C++ Programmierung
// * Variablentypen und ihre groessen in C++ Programmierung.
// * UTF-8 Encoding mit wchar_t und setlocale.
// * wchar_t (http://www.utf8-zeichentabelle.de/)
// * C++11 Standart!!
// * Warum printf und cout zu beherrschen sind.

#include <iostream>
#include <fcntl.h>
#include <stdio.h>
#include <cstdlib>
#include <clocale>
#include <wchar.h>
#include <windows.h> 	// * Fuer SetConsoleOutputCP(1252);
						// * In Windows ist die UTF-8 Ausgabe nicht einfach.
						// * Es muss die Konsole fuer die Ausgabe eingestellt werden
						// * Zum lesen: http://forums.codeguru.com/showthread.php?475748-UTF-8-in-Dev-c
						// * http://stackoverflow.com/questions/379240/is-there-a-windows-command-shell-that-will-display-unicode-characters
						// * Die Ausgaben muessen, es scheint so, mit printf() sein.


using namespace std;

int main(int argc, char **argv)
{

    //SetConsoleOutputCP(1252);
    //_setmode(_fileno(stdout), _O_U8TEXT);
    //SetConsoleOutputCP(CP_UTF8);

    // * Folgende zwei Zeilen aktivieren und deaktivieren

	setlocale(LC_ALL, "");
    //setlocale(LC_ALL, "de_DE.UTF-8");

    bool wf = true;
    char einchar(1);
    wchar_t einwchar(L't');
    char16_t einchar16(L'a');	// * Ab C++11 gueltig
    char16_t nocheinchar16(5453);
    char32_t einchar32(L'k');	// * Ab C++11 gueltig
    char32_t nocheinchar32(5698);

	#if 1
        // * wcout funktioniert auf den meisten aber nicht allen Windowsconsolen
        wcout << L"Gr\u00f6\u00df""e eines char \t" << sizeof(char) << endl;
        wcout << L"Gr\u00f6\u00dfe eines bool \t" << sizeof(wf) << endl;
        wcout << L"Gr\u00f6\u00dfe eines wchar_t \t" << sizeof(wchar_t) << endl;
        wcout << L"Gr\u00f6\u00dfe eines char16_t \t" << sizeof(char16_t) << endl;
        wcout << L"Gr\u00f6\u00dfe eines char32_t \t" << sizeof(char32_t) << endl;
        wcout << L"Viel \u00fcben \u00e4ndert alles!\n" << endl;
        // * Mit cout-Stream ist eine protable Version der Ausgaben der Sonderzeichen schwer erreichbar
        cout << u8"Gr\u00f6\u00df""e eines char \t" << sizeof(char) << endl;
        cout << u8"Gr\u00f6\u00dfe eines bool \t" << sizeof(wf) << endl;
        cout << u8"Gr\u00f6\u00dfe eines wchar_t \t" << sizeof(wchar_t) << endl;
        cout << u8"Gr\u00f6\u00dfe eines char16_t \t" << sizeof(char16_t) << endl;
        cout << u8"Gr\u00f6\u00dfe eines char32_t \t" << sizeof(char32_t) << endl;
        cout << u8"Viel \u00fcben \u00e4ndert alles!" << endl;

        cout << "Gr\xf6\xdf""e eines char " << sizeof(char32_t) << endl;
	#endif
	cout << "\n\n";

	#if 0
        wprintf(L"Besondere Zeichen wie: \u00f6, \u00fc, \u00e4 und \u00df, z\u00e4hlen viel und haben ihre eigene Gr\u00f6\u00df\n");
        wprintf(L"Gr\u00f6\u00df""e eines char \t%i", sizeof(char));
        wprintf(L"\nGr\u00f6\u00df""e eines bool \t%i", sizeof(wf));
        wprintf(L"\nGr\u00f6\u00df""e eines wchar_t \t%i", sizeof(wchar_t));
        wprintf(L"\nGr\u00f6\u00df""e eines char16_t \t%i", sizeof(char16_t));
        wprintf(L"\nGr\u00f6\u00df""e eines char32_t \t%i", sizeof(char32_t));
        // * Mit printf ist eine protable Version der Ausgaben der Sonderzeichen gut erreichbar

        printf("\n\nGr\xf6\xdf""e eines char \t%i", sizeof(char));
        printf("\nGr\xf6\xdf""e eines bool \t%i", sizeof(wf));
        printf("\nGr\xf6\xdf""e eines wchar_t \t%i", sizeof(wchar_t));
        printf("\nGr\xf6\xdf""e eines char16_t \t%i", sizeof(char16_t));
        printf("\nGr\xf6\xdf""e eines char32_t \t%i\n\n", sizeof(char32_t));
    #endif

return 0;
}
