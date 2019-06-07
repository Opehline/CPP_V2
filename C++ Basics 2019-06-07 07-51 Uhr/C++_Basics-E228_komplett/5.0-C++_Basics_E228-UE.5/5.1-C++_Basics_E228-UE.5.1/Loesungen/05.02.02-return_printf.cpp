// Gisela Neira
// C++ Basics E228
// * Funktionen 05.02.02 der C/C++ Programmierung
// * Loesungsvorschlag

#include <iostream>

int max(int a, int b);

int main(int argc, char **argv)
{
    int x=25, y=50;
    max(x, y);
    //std::cout << max(x, y) << "\n";

return 0;
}


int max(int a, int b)
{
    if(a>b)
    {
    	return printf("a> %i\n",a);
		//return a;
    }
    else return printf("b> %i\n",b);
    //else return b;
}
