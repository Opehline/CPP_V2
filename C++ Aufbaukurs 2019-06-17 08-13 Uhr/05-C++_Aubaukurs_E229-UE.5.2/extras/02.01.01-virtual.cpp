// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.01.01 der C++ Programmierung
// * Vergleich Ablauf Programm ohne und mit virtual

#include <iostream>

// * BASISKLASSE
class Hund
{
    public:

		virtual void vorstellen()
		{
			std::cout << "Ich bin ein Hund! " << this << " " << &Hund::vorstellen << std::endl;
		}

        /*virtual*/ void public_vorstellen()
		{
			vorstellen();
		}
};

class Strassenkoeter : public Hund
{
    public:
        #if 1
		void vorstellen()
		{
			std::cout << "Hallo du fremder Mensch! " << this << " " << &Strassenkoeter::vorstellen << std::endl;
		}
		#endif // 0
};

int main(void)
{
    Hund Dopp, *p_Dopp=NULL;
    Strassenkoeter Lupi, *p_Lupi=NULL;

    #if 0
    typedef void (Hund::*POINT)();
    POINT p_funk = &Hund::vorstellen;
    printf("p_funk > %#p ", p_funk);
    #endif // 0

    p_Dopp=&Dopp;
    p_Lupi=&Lupi;

    printf("Member Funktion Hund::vorstellen > %#p\n", &Hund::vorstellen);
    //printf("Pointer> %#p\n", p_Dopp);
	printf("Member Funktion Strassenkoeter::vorstellen > %#p ", &Strassenkoeter::vorstellen);
	//printf("Pointer> %#p\n", p_Lupi);

	//Dopp.public_vorstellen();
	//Lupi.public_vorstellen();
	//Lupi.vorstellen();

return 0;
}
