// Gisela Neira
// C++ Basics E228
// * Programm 06.01.02 der C/C++ Programmierung

#include <stdio.h>
#include <iostream>


int main(int argc, char **argv)
{

    int a=2, b=5;

	if(a>b)
    {
		std::cout << "a> " << a;
    }
    else return printf("b> %i\n",b);
	//else return std::cout << "b> " << b; 	// * ? Geht nicht

return 0;
}
