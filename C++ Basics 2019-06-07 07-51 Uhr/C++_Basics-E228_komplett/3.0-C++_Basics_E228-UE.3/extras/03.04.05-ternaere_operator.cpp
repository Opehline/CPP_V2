// Gisela Neira
// C++ Basics E228
// * Programm 03.04.05 der C/C++ Programmierung
// * ternaere-Operator: std::string Funktion
// * zur Rueckgabe eines Textes


#include <iostream>
#include <string>

#define FUNK
#define SIMP

#ifdef FUNK

std::string funktion(const int x, const int y)
{
    return (x>y?"A > B" : "B > A");
}
#endif

int main(){

    int a=5, b=3;

    #ifdef FUNK
    std::cout << funktion(a, b) << std::endl;
    #endif
    #ifdef SIMP
    std::cout <<  (a>b?"A > B" : "B > A") << std::endl;
    #endif


return 0;
}
