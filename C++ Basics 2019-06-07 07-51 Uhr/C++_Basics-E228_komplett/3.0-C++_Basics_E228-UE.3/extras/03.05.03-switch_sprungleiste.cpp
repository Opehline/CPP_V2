// Gisela Neira
// C++ Basics E228
// * Programm 03.05.03 der C/C++ Programmierung
// * switch-Sprungleiste mit break

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
		case 1:
			std::cout << '1' << std::endl;
			//funk();
			break;
		case 2:
			std::cout << '2';
			break;
		case 3:
			std::cout << '3';
			//break;
		case 4:
			std::cout << '4';
			break;
		case 5:
			std::cout << '5';
			break;
		default: std::cout << "Das Programm wurde abgebrochen..." << std::endl;
	#endif
	#if 1
		case 1:
			std::cout << "Oh!... ";
			break;
		case 2:
			std::cout << "Mit SC-Sprungliste... ";
			break;
		case  3:
			std::cout << "kann man... ";
			/*break;*/
		case 4:
			std::cout << "eine Sprungleiste erstellen... ";
			break;
		case 5:
			std::cout << "aber mit Kaskade! " << std::endl;
			break;
		default:
			std::cout << "Das Programm wurde abgebrochen..." << std::endl;
			break;
	#endif
    }

//getchar();
return 0;
}
