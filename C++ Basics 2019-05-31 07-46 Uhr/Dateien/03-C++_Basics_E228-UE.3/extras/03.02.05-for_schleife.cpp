// Gisela Neira
// C++ Basics E228
// * Programm 03.02.05 der C/C++ Programmierung
// * for-Schleife: Summe von array-Werten

#include <iostream>
#include <stdlib.h>


int main(int argc, char **argv)
{

	char text[4] = {1,3,5};
	int num[4];
	// * Ein und auskommentieren:
	int sum, i=0; // * falsch, warum?
	//int sum=0, i=0; // * richtig

	for(i=0; i<4; i++)
	{
		//std::cout << sum << std::endl;
		num[i] = static_cast<int>(text[i]);
		//num[i] = (int)text[i];
		std::cout << num[i] << std::endl;
		sum += num[i];
	}

	std::cout << "Summe: " << sum << std::endl;


return 0;
}
