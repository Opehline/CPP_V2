// Gisela Neira
// C++ Aufbaukurs E229
// * new-delete 05.04.01 der C++ Programmierung
// * new und delete-Operatoren

#include <iostream>

int main()
{
    int* p = new int(20);
    std::cout << "Adresse: " << p << std::endl;
    std::cout << "Wert: " << *p << std::endl;
    *p = 10;
    std::cout << "Adresse: " << p << std::endl;
    std::cout << "Wert: " << *p << std::endl;
    delete p;
    std::cout << "Wert: " << p << std::endl;
    std::cout << "Wert: " << *p << std::endl;
}
