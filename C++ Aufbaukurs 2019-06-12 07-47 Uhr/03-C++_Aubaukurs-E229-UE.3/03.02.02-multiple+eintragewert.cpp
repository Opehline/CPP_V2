// Gisela Neira
// C++ Aufbaukurs E229
// * Ausnahmefallbehandlug 03.02.02 der C++ Programmierung
//   Mehrfachue catch-Anweisungen

#include <iostream>
#include <exception>


int main()
{
    int age = 0;
    std::cout << "Alter eingeben: ";
    std::cin>>age;

    try
    {
        if(age>120 || age<0)
        {
            throw(587.4587); 	//Wert wird vom Benutzer definiert und muss geändert werden per Hand
                            // 'a', 587.4587 oder Zahl eintragen (Programm nicht wirklich funktionsfähig.)
        }
    }

    catch(int e)
    {
        std::cerr << "Ein Ausnahmefall int ist entstanden, Wert Nr.: " << e << std::endl;
    }

    catch(char e)
    {
        std::cerr << "Ein Ausnahmefall char ist entstanden, Wert Nr.: " << e << std::endl;
    }

    catch(...) // * Nicht definierter catch (default)
    {
        std::cerr << "Ein nicht definierter Ausnahmefall ist entstanden." << std::endl; // Kein Argument wird übergeben
    }

return 0;
}
