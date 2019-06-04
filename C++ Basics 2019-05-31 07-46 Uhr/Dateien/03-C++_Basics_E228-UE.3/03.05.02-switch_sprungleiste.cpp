// Gisela Neira
// C++ Basics E228
// * Programm 03.05.02 der C/C++ Programmierung
// * switch-Sprungleiste mit Kaskade

#include <iostream>
#include <string>

using namespace std;

int main(){


    int a=0;
    std::string b;
    int selec=0;

    std::cout << "1, 2, 3, 4, 5 eingeben." << std::endl;
    std::cin >> selec;

    switch(selec)
    {
		#if 0
			case 1: std::cout << '1';
			case 2: std::cout << '2';
			case 3: std::cout << '3';
			case 4: std::cout << '4';
			case 5:	std::cout << '5' /*<< std::endl*/;
			default: std::cout << "Das Programm wurde abgebrochen..." << std::endl;
		#endif
		#if 1
			case 1:
			    std::cout << "Oh!... ";
			case 2:
			    std::cout << "Mit swich-case-Sprungleiste... ";
			case 3:
			    std::cout << "kann man... ";
			case 4:
			    std::cout << "eine Sprungleiste erstellen... ";
			case 5:
			    std::cout << "aber mit Kaskade! " /*<< std::endl*/;
			default:
			    std::cout << "Das Programm wurde abgebrochen..." << std::endl;
		#endif
    }

return 0;
}
