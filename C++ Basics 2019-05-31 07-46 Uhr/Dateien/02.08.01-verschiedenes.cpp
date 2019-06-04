// Gisela Neira
// C++ Basics E228
// * Programm 02.09.01 der C/C++ Programmierung
// * Extras (verschiedenes)

#include <iostream>
#define MAMEMO 6


int main()
{
    #if 0
		std::cout << "Wurde nichts explizit definiert nimmt der" << std::endl;
		std::cout << "Compiler int-Werte implizit in einer Division mit int-Werten an." << std::endl;
		std::cout << "Beispiel LEK: Division von 55/7: " << 55/7 << std::endl;
		// * Wie sieht es aus wenn eine Zahl eine float-Zahl ist?
        //std::cout << "Beispiel: Division von 15.98/7: " << 15.98/7 << std::endl;
    #endif
    std::cout << "\n";

    // * Nicht initialisierte Variablen und Arrays

    #if 0
        int sum, b;
        b=6;
        sum+=b;
        //printf("%i\n",a);
        std::cout << "a ist eine deklarierte aber nicht initialisierte int-Variable: > " << sum << std::endl;
    #endif

    #if 0
        char b;
        std::cout << "b ist eine deklarierte aber nicht initialisierte char-Variable:  > " << b << std::endl;
        std::cout << "\nNicht initialisierte Variablen koennen Muell enthalten!" << std::endl;
    #endif

    #if 1
        char c[MAMEMO]; // |...........||...........||...........||...........||...........||...........|
        std::cout << "\nEs wird ein nicht initialisierter Array ausgegeben: " << std::endl;
        for(int i=0; i<MAMEMO; i++)
        {
            std::cout << "Array Pos " << i << " " << c[i] << std::endl;
        }
        std::cout << "\nNicht initialisierte Arrays koennen auch Muell enthalten!" << std::endl;
    #endif

return 0;
}
