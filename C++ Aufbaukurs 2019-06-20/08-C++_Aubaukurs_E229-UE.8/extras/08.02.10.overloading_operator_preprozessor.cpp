// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.02.10 der C++ Programmierung
// * Ersetzbarer Operator durch Preprozessor macro

#include <iostream>

using namespace std;

class Num
{
public:
    double a, b;


    #define SET_OP(op)                                                 \
    Num operator op(const Num &p)                                      \
    {                                                                  \
        Num erg;                                                       \
        erg.a = a op p.a;                                              \
        erg.b = b op p.b;                                              \
        return erg;                                                    \
    }

    SET_OP(+);
    SET_OP(-);
    SET_OP(*);
    SET_OP(/);
};

int main()
{
    Num num1;
	num1.a=1;
	num1.b=75;

    Num num2;
	num2.a=150;
	num2.b=175;

    Num num1und2 = num1 + num2 * num1;

cout << "num1 " << "a: " << num1.a << ", b: " << num1.b << endl;
cout << "num2 " << "a: " << num2.a << ", b: " << num2.b << endl;
cout << "num1und2 " << "a: " << num1und2.a << ", b: " << num1und2.b << endl;
    return 0;
}
