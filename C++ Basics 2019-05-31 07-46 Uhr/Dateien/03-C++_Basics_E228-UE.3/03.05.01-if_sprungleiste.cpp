// Gisela Neira
// C++ Basics E228
// * Programm 03.05.01 der C/C++ Programmierung
// * if-Sprungleiste

#include <iostream>

int main(){

    int a=0;
    std::string b;
    int selec=0;

    std::cout << "1, 2, 3, 4, 5 eingeben." << std::endl;
    std::cin >> selec;

    if(selec==1)
    {
		std::cout << "Oh!..." << std::endl;
    }
    else if(selec==2/*&&....*/)
    {
		std::cout << "Mit if-Verzweigung... " << std::endl;
    }
    else if(selec==3)
    {
		std::cout << "kann man... " << std::endl;
    }
    else if(selec==4)
    {
		std::cout << "eine Sprungleiste erstellen... " << std::endl;
    }
    else if(selec==5)
    {
		std::cout << "aber leider ohne Kaskade.. " << std::endl;
    }
    else
    {
		std::cout << "Das Programm wurde abgebrochen..." << std::endl;
    }

//getchar();
return 0;
}
