// Thomas Kienzler
// C++ Basics E228 C/C++ Programmierung
// Rate den Wert einer Zahhl im Bereich.

#include <stdio.h>
#include <string.h>
#include <iostream>

#define DLEVEL 6

int main(int argc, char **argv)
{
    #if DLEVEL == 0
        #define STACK 0
        std::cout << "Hallo";
    #elif DLEVEL == 1
        #define STACK 100
        std::cout << "Huch";
    #elif DLEVEL > 5
        display( debugptr );
    #else
        #define STACK 200
    #endif

}
