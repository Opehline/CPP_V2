// Gisela Neira
// C++ Aufbaukurs E229
// * Ausnahmefallbehandlug 03.01.01 der C++ Programmierung
// * int-Wertuebergabe

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
            throw 9; //Wert wird vom Benutzer definiert
        }
    }
    catch(int e)
    {
        std::cerr << "Ein Ausnahmefall ist entstanden, Error Nr.: " << e << std::endl;
    }

return 0;
}
