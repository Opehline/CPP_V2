// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.05.02 der C++ Programmierung
// * Wo geheapte Variablen liegen (inklusive der Pointer).

#include <iostream>

class Heap_klasse
{
    public:
        // * Beide Variablen liegen auf dem Heap, auch der Pointer
		double* p_array;
		double stack_var;

   	public:
		Heap_klasse()
		{
		    p_array = new double[10000000];
		    std::cout << &p_array << std::endl;
			std::cout << "Objekt ist aus Speicher angelegt.\n" << std::endl;
		}

		~Heap_klasse()
		{
			std::cout << "Objekt wird dealokiert!" << std::endl;
			delete[] p_array;
 		}
};


int main()
{
    // * Nur p_objekt liegt auf dem Stack.
    Heap_klasse* p_objekt = new Heap_klasse();

    std::cout << &p_objekt << std::endl;
    std::cout << p_objekt << std::endl;
    std::cout << &p_objekt->p_array << std::endl;
    std::cout << &p_objekt->stack_var << std::endl;

return 0;
}
