// Gisela Neira
// C++ Basics E228
// * Programm 03.04.02 der C/C++ Programmierung
// * ternäre-Operator: verhindern von Teilung durch 0

#include <iostream>
/*
100 / 100 = 1
100 / 50 = 2
100 / 10 = 10
100 / 5 = 20
100 / 2 = 50
100 / 1 = 100
100 / 0.5 = 200
100 / 0.0000000587  = rieeeeeeeeeeeg
100 / 0 = Unstd::endlich = Error
*/


int division(const int x, const int y)
{
    // * Ein- und auskommentieren
    // * zum erkennen wozu const-Variable
    //x = 7, y = 5;
    (y!=0?x/y:"Error"); // * ?-Operator kann nicht verschiedene Datentypen mischen.
    //-> Fehlermeldung (x/y) und "Error" müssten von selbem Typ sein. int vs. string geht nicht
    return 1;
}

int main(){

    int a=4, b=2, c=0;

    std::cout << "Division 4/2: " << division(a, b) << std::endl;
	std::cout << "Division 4/0: " << division(a, c) << std::endl;

return 0;
}
