// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.04.04 der C++ Programmierung
// * Speicherallokierung eines Objekts
// * Destruktor zur Speicherdeallokierung

#include <iostream>

class CPU
{
	private: 	long double daten[10000];
	public:		CPU(){ std::cout << "CPU wurde erstellt..." 
								 << std::endl; getchar(); }	
				
	public:		~CPU(){};
	public:		void ausgabe(short int id)
				{ std::cout << "CPU id > " << id << std::endl;	}
};

class Computer
{

	public:		Computer(){ std::cout << "Ein neuer Computer wird fabriziert..." 
									  << std::endl; getchar(); };
	private:	CPU cpu2;
	private:	CPU *cpu1;

	public:		~Computer()
				{ 	
					std::cout << "CPU wurde verbraucht..." << std::endl; 
					delete cpu1;
					getchar();
				}
				
				void setCPUsAlloc(Computer &p_computer)
				{
					p_computer.cpu1 = new CPU;
					//std::cout << computer << std::endl;
				}
				
				void setCPUs(CPU einCPU)
				{	cpu2=einCPU;	}
				
				CPU getCPUsAlloc()
				{ 	return *cpu1;	}

				CPU getCPUs()
				{	return cpu2;	}
}; 

int main()
{
  	Computer comp1;
	CPU neuerCPU;

	//std::cout << &comp1 << std::endl;

	comp1.setCPUsAlloc(comp1);
	comp1.setCPUs(neuerCPU);

	//comp1.getCPUsAlloc().ausgabe(1);
	//comp1.getCPUs().ausgabe(2);
	
return 1;
}
