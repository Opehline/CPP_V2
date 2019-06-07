// Gisela Neira
// C++ Basics E228
// * Programm 02.02.02 der C/C++ Programmierung
// * define-Makro.

#include <iostream>

// Falsch (weshalb?):
//#define DIVISION(g, c) g/c  // * 24 + 8 / 8
// Richtig:
#define DIVISION(g, c) ((g)/c) // * ((24 + 8) / 8)

int main(int argc, char **argv)
{
    float a = 24;
    float b = 8;

    std::cout << DIVISION(a+b, b) << std::endl;

return 0;
}
