// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.03.01 der C++ Programmierung
// * Template fuer Funktion die einen Pointer
// * uebergeben erhalten


#include <iostream>

template<typename type> 
type rechnen(type* pointer)
{
    type result;

    result = *pointer+8;
    return result;
}


int main()
{
    int a = 4, r;
    int* pa= &a;

    r = rechnen(pa);

    std::cout << r << std::endl;
 
    return 0;
}
