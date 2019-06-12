// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 03.01.03 der C++ Programmierung
// * char-Wertuebergabe + Standardbibliothek

#include <iostream>
#include <exception> //Bibliothek muss ergaenzt werden

using namespace std;

int main()
{
    int age = 0;
    cout << "Alter eingeben: ";

    cin>>age;

    try
    {
        if(age>150 || age<0)
        {
            throw('a'); //Wert wird vom Benutzer definiert
        }
    }

    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl; // Memberfunktion in der Ausnahmefall-Klasse von C++
        //std::cout << "Hallo" << std::endl;
    }

    return 0;
}
