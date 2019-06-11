// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.03.05 der C++ Programmierung
// * Vererbung: public, protected und private

#include <iostream>

class Vater
{
    private:
		int private_Vater;				// * Nicht vererbt

   	protected:
		int protected_Vater;

   	public:
		int public_Vater;

		Vater()
		{
			private_Vater=0;
			protected_Vater=0;
			public_Vater=0;
		}
};

//class Tochter : public Vater
//class Tochter : protected Vater
class Tochter : private Vater
{
    private:
		int private_Tochter;			// * Nicht vererbt

   	protected:
		int protected_Tochter;

    public:
		int public_Tochter;

		Tochter()
		{
			private_Tochter=0;
			protected_Tochter=0;
			public_Tochter=0;

			protected_Vater=10;
			public_Vater=4;
			std::cout << "protected_Vater > " << protected_Vater << std::endl;
			std::cout << "public_Vater > " << public_Vater << std::endl;
		}

};

class Enkel : public Tochter
//class Enkel : protected Tochter
//class Enkel : private Tochter
{
    private:
		int private_Enkel;				// * Nicht vererbt

   	protected:
		int protected_Enkel;

    public:
		int public_Enkel;

		Enkel()
		{
			private_Enkel=0;
			protected_Enkel=0;
			public_Enkel=0;

			protected_Vater=10;
			public_Vater=4;
			std::cout << "protected_Vater > " << protected_Vater << std::endl;
			std::cout << "public_Vater > " << public_Vater << std::endl;

			protected_Tochter=54;
			public_Tochter=89;
			std::cout << "protected_Tochter > " << protected_Tochter << std::endl;
			std::cout << "public_Tochter > " << public_Tochter << std::endl;
		}
};

int main(int argc, char **argv){

    //Tochter momi;
    //momi.protected_Vater=18; 	// * Von aussen nicht zugreifbar
    //momi.public_Vater=18;		// * Wenn "class Tochter : protected Vater",
								// * nicht zugreifbar da public zu protected
								// * IN Tochter wird.

    #if 1
	Enkel gogo;
	gogo.public_Vater=37;
    #endif
return 0;
}
