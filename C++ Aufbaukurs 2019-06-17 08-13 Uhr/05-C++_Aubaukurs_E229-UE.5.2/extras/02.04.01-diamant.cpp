// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.04.01 der C++ Programmierung
// * Vererbung einer Variable bei Mehrfachvererbung
// * (Das Diamantenproblem)

#include <iostream>

class KlasseA
{
    public:
		void multiplikation();
};
void KlasseA::multiplikation()
{
    std::cout << "Hallo, hier bin ich " << this << std::endl;
}

class KlasseB : virtual public KlasseA
{
    public:
};

class KlasseC : public virtual KlasseA
{
    public:
};

class KlasseD : public KlasseB, public KlasseC
{
    public:
};


int main(int argc, char **argv)
{
    KlasseA objA, *p_objA=NULL;
    KlasseB objB, *p_objB=NULL;
    KlasseC objC, *p_objC=NULL;
    KlasseD objD, *p_objD=NULL;

    p_objA=&objA;
    p_objB=&objB;
    p_objC=&objC;
    p_objD=&objD;

    printf("Member Funktion > %#p ", &KlasseA::multiplikation);
    printf("Pointer p_objA > %#p\n", p_objA);
	printf("Member Funktion > %#p ", &KlasseB::multiplikation);
	printf("Pointer p_objB > %#p\n", p_objB);
	printf("Member Funktion > %#p ", &KlasseC::multiplikation);
	printf("Pointer p_objC > %#p\n", p_objC);
	printf("Member Funktion > %#p ", &KlasseD::multiplikation);
	printf("Pointer p_objD > %#p\n", p_objD);

	objA.multiplikation();
	objB.multiplikation();
	objC.multiplikation();
	objD.multiplikation();

return 0;
}
