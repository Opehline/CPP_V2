// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.04.05 der C++ Programmierung
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
	private:	CPU *p_cpu;

	public:		~Computer()
				{ 	
					std::cout << "CPU wurde verbraucht..." << std::endl; 
					if( this->p_cpu == 0 ) 
					{
           				delete this;
        			}

					getchar();
				}
				
				void setCPUsAlloc(Computer &p_computer)
				{
					p_computer.p_cpu = new CPU;
				}
}; 

int main()
{
  	Computer comp1;
	comp1.setCPUsAlloc(comp1);

	
return 1;
}
