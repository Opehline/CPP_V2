// Gisela Neira
// C++ Basics E228
// * Programm 03.04.06 der C/C++ Programmierung
// * ternäre-Operator: Ausgabe ohne return-Anweisung

#include <iostream>

void func(const int x)
{
  	(x == 2) ? std::cout << "Hallo\n" : std::cout << "Welt\n";
}

int main(int argc, char **argv)
{
	int i = 1;
	#if 0
		func(i);
	#endif

   	#if 1
		(i == 1) ? std::cout << "Hallo\n" : std::cout << "Welt\n"; 
	#endif

return 0;
}
