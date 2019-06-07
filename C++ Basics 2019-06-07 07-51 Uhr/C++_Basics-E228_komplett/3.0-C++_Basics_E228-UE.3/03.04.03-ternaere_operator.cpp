// Gisela Neira
// C++ Basics E228
// * Programm 03.04.03 der C/C++ Programmierung
// * ternaere-Operator: verhindern von Teilung durch 0
//   mit Fehlermeldung

#include <iostream>

int fehlermeldung(const int w)
{
    std::cout << "Teilung durch 0 ist nicht erlaubt!" << std::endl;
    return 0;
}


int division(const int x, const int y)
{
    return (y!=0?x/y:fehlermeldung(y));
}

int main(){

    int a=4, b=2, c=0;

    std::cout << "Division: " << division(a, b) << std::endl;
    std::cout << "Division durch Null ist: " << division(a, c) << std::endl;

return 0;
}
