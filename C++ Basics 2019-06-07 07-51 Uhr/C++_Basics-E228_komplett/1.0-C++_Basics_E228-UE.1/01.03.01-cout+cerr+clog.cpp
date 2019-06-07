// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.03.01 der C/C++ Programmierung
// * Ausgabe von Texten mit cout, cerr und clog.
// * Umleitung der Ausgabe durch:
// * -Codeierung 1 fuer Std. Ausgabe: 			"prog.exe 1> stdout.txt"
// * -Codeierung 2 fuer Std. error Ausgabe:   	"prog.exe 2> stderr.txt"

#include <iostream>

int main()
{
	std::cout << "Standard Ausgabe (cout)!\n";
	std::cerr << "Standard Error Ausgabe (cerr)!\n";
	std::clog << "Standard Error Ausgabe (clog)! \n";

return 0;
}
