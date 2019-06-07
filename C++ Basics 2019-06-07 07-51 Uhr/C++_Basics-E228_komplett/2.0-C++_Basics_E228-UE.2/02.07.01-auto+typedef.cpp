// Gisela Neira
// C++ Basics E228
// * Programm 02.07.01 der C/C++ Programmierung
// * auto -"Datentyp"

#include <iostream>
#include <typeinfo>

int f=10, g=3;
/*const*/ auto y = f + g;

int main()
{
	#if 0
        //int f=10, g=3;
        //int a=10, b=3;
        int a=19;
        float b=3.5;
        auto x = a / b;

        std::cout << "Datentyp von a: " << typeid(a).name() << '\n';
        std::cout << "Datentyp von b: " << typeid(b).name() << '\n';
        std::cout << "Datentyp von x: " << typeid(x).name() << '\n';
        std::cout << "a + b = x; a = " << a << ", b = " << b << ", x = "<< x << std::endl;
    #endif


	#if 0
	    typedef int ganzezahlen;
	    typedef float gleitkommazahlen;

		ganzezahlen e;
		gleitkommazahlen h;
		int hopi;
		std::cout << "Datentyp von e: " << typeid(e).name() << '\n';
		std::cout << "Datentyp von h: " << typeid(h).name() << '\n';
	#endif

return 0;
}
