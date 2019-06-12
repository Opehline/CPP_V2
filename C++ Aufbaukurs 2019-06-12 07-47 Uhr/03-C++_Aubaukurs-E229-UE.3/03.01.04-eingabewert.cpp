// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 03.01.04 der C++ Programmierung
// * Eingabewert

#include <iostream>
#include <exception> //Bibliothek muss ergaenzt werden

int main()
{
	 try
	 {
		std::cout << "Alter eingeben: ";
		int age = 0;
		std::cin>>age;
		if(age>150 || age<0)
		{
			throw age; //Wert wird vom Benutzer definiert
		}
	 }
	 catch(int eingabe)
	 {
	 	std::cerr << "Es ist ein Wert außerhalb des Bereiches "
                  << "eingegeben worden > " << eingabe << std::endl; // Memberfunktion in der Ausnahmefall-Klasse von C++
	 }


    return 0;
}
