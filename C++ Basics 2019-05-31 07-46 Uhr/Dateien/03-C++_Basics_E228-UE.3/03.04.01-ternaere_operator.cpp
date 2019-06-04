// Gisela Neira
// C++ Basics E228
// * Programm 03.04.01 der C/C++ Programmierung
// * ?-Operator

#include <iostream>




int main(){

    int a=1, b=2, c=3;

    std::cout << (a>b?a:b) << std::endl; // Ausgabe 3
    std::cout << (c>b?c:b) << std::endl; // Ausgabe 2
    std::cout << (c<a?c:a) << std::endl; // Ausgabe 1

return 0;
}
