// Gisela Neira
// C++ Aufbaukurs E229
// * Ausnahmefallbehandlug 03.01.02 der C++ Programmierung
//   char-Wertuebergabe

#include <iostream>

int main()
{
    int age = 0;

    std::cout << "Alter eingeben: ";
    std::cin>>age;

    try
    {
        if(age>150 || age<0)
        {
            throw '*'; //Wert wird vom Benutzer definiert
        }
    }
    catch(char e)
    {
        std::cerr << "Ein Ausnahmefall ist entstanden, Wert: " << e << std::endl;
    }

    return 0;
}
