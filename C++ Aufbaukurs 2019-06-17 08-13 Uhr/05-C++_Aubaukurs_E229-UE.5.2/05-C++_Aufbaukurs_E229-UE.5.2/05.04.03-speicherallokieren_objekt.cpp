// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.04.04 der C++ Programmierung
// * Speicherallokierung eines Objekts
// * Destruktor zur Speicherdeallokierung

#include <iostream>

using namespace std;

class CPU
{
	public:
		int w;

	   	CPU()
		{
			w=0;
			std::cout << "CPU wurde erstellt..." << std::endl;
		}

		void CPU_idNr(int x)
		{ std::cout << "Es wurde CPU IdNr << " << x << " erstellt!" << std::endl; }

		~CPU(){};
	  // ...
};

class Computer
{
	public:
		Computer(){};
		CPU cpu2;   // * Dieses Objekt liegt auf dem Stack
		CPU* cpu1;  // * Dieses Objekt liegt auf dem Heap

		~Computer()
		{
			std::cout << "CPU wurde verbraucht..." << std::endl;
			delete cpu1;
		}
};

int main()
{
	  Computer comp1;

	  comp1.cpu1 = new CPU;
	  comp1.cpu1->CPU_idNr(5);
	  comp1.cpu2.CPU_idNr(7);

	return 0;
}
