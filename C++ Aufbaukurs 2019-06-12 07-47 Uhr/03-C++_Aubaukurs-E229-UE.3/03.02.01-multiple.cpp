// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 03.02.01 der C++ Programmierung
//   Mehrfachue catch-Anweisungen

#include <iostream>
#include <exception>

using namespace std;

int main()
{
	 try
	 {
		cout << "Alter eingeben: ";
		int age = 0;
		cin>>age;
		if(age>150 || age<0)
		{
			throw "hoho!"; 	// * Wert wird vom Benutzer definiert und muss geändert werden per Hand
							// 'a', 123, 125.89, "hoho!" oder Zahl eintragen (Probleme bein kasten.)
		}
	 }

	 catch(exception e) //Objekt
	 {
		cerr << e.what() << endl; // Memberfunktion in der Ausnahmefall-Klasse von C++
	 }

	 catch(int e)
	 {
		cerr << "Ein Ausnahmefall int ist entstanden, Error Nr.: " << e << endl;
	 }

	 catch(double e) // * float nicht eindeutig (Windows), bricht bei float zusammen
	 {
		cerr << "Ein Ausnahmefall double ist entstanden, Error Nr.: " << e << endl;
	 }

	 catch(char e)
	 {
		cerr << "Ein Ausnahmefall char ist entstanden, Wert Nr.: " << e << endl;
	 }


return 0;
}
