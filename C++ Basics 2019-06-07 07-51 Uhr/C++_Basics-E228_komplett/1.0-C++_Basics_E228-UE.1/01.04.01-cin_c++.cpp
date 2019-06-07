// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.04.01 der C/C++ Programmierung
// * Eingabe von Texten mit cin.

#include <iostream>

int main()
{
	int a=102; // * int float char

	std::cout << "Wie alt sind Sie...? : " << std::endl;
	std::cin >> a; // * Tastatureingabe
	std::cin.clear(); // * cin.ignore()
	std::cout << "Sie sind " << a << " Jahre alt? Ohh...!" << std::endl;

return 0;
}
