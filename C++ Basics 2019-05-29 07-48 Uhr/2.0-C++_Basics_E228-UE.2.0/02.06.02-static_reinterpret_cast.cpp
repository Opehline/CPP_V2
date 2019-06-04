// Gisela Neira
// C++ Basics E228
// * Programm 02.07.02 der C/C++ Programmierung
// * Typenumwandlung static_cast und reinterpret_cast

#include <iostream>
#include <typeinfo>

#define static_cast_fehler
using namespace std;

int main()
{

    #if 0
    float x=0;
    int a=0, b=0;
    #else
    int x=0;
    float a=3.2, b=4.7;
    //x=static_cast<int>(a)/static_cast<int>(b);

    char c = 0;
    int *p = (int*)&c;              // allgemeiner Cast ohne Fehlermeldung
    int *q = static_cast<int*>(&c); // static_cast mit Fehlermeldung

    #endif


    a = 10;
    b = 3;


    #if 0
    x = a/b;
    cout << "***Teilung a/b = x***" << endl;
    cout << "a und b int-Werte, x float-Wert" << endl;

    cout << "\nKeine Typenumwandlung:" << endl;
    cout << "x wird in int-Wert ausgegeben." << endl;
    cout << "a / b = x: > " << x << endl;
    #endif // 0

	#if 0
    // * Umwandlung des Resutlates in Float-Wert
    // * erzwungen durch das vorsetzen von static_cast<float>.
    x = static_cast<float>(a)/b;    // * 1
    //x = static_cast<int>(a)/b;    // * 2
    cout << "\nstatic_cast Typenumwandlung:" << endl;
    cout << "x wird als float-Wert ausgegeben ausgegeben." << endl;
    cout << "a/b=x: > " << x << endl;
    cout << "Umwandlung erfolgreich." << endl;
	#endif

	#if 1
    // * Umwandlung des Resutlates in Float-Wert
    // * erzwungen durch das vorsetzen von reinterpret_cast<float>.
	float d = *reinterpret_cast<float*>(&a);
	float e = *reinterpret_cast<float*>(&b);
    x = d/e; // * Equivalent zu: 					x = *reinterpret_cast<float*>(&a) / *reinterpret_cast<float*>(&b);

		    // * Alternative Schreibform: (Funktioniert in meinem Fall nicht optimal)
		    /*
			    float *d = reinterpret_cast<float*>(a);
				float *e = reinterpret_cast<float*>(b);
				//x = *d / *e;
			*/

			//cout << typeid(a).name() << endl;
	#endif

   	#if 0
   	    cout << "\nreinterpret_cast Typenumwandlung:" << endl;
        cout << "x wird als float-Wert ausgegeben ausgegeben." << endl;
        cout << "a / b = x: > " << x << endl;
        cout << "Umwandlung erfolgreich." << endl;
        // * Umwandlugen durch das vorsetzen von reinterpret_cast<float>.
        x = d/b;
        //x = *reinterpret_cast<float*>(&a)/b;

        cout << "Eins der Werte nicht umgewandelt." << endl;
        cout << "d / a = x: > " << x << endl;
        cout << "Oft nicht moeglich." << endl;
        cout << "\n\n\nreinterpret_cast sollte vermieden werden." << endl;
	#endif

return 0;
}
