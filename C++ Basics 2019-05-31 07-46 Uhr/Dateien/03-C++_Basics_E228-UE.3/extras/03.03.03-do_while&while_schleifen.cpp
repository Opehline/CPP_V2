// Gisela Neira
// C++ Basics E228
// * Programm 03.03.03 der C/C++ Programmierung
// * while-Schleife und do-while-Schleife verglichen

#include <iostream>




int main(){

    int sum=0;
    int a=1;

    #if 0
		// * Hier wird mindestens einmal, trotz der Bedingung, gerechnet
		do{
			sum +=a;
			a++;
			std::cout << "Summe: > " << sum << std::endl;

		}while(sum<0);
    #endif

    #if 0
		// * Hier wird nicht gerechnet, keine Ausgabe ist vorhanden
		while(sum<0){
			sum +=a;
			a++;
			std::cout << "Summe: > " << sum << std::endl;

		}
		// * Um Ausgabe sehen zu koennen:
		//std::cout << "Summe: > " << sum << std::endl;
    #endif


//getchar(<< std::endl;
return 0;
}
