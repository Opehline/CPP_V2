// Gisela Neira
// C++ Basics E228
// * Programm 05.07.02 der C/C++ Programmierung
// * Arrays koennen nie als Kopie ("Call by Value")
// * an eine Funktion uebergeben werden.

// * Grund: Es wuerde zu viel Platzverlust bedeuten.
// * Arrays enthalten viele Daten. Jede Kopie
// * verdoppelt die Menge an Daten und verlangsamt
// * das Programm wesentlich.

#include <iostream>

#define MAX 10

 
//void umdrehen(int pa[]/*, int eineVar*/) // * Neuer Pointer wird erstellt
void umdrehen(int *pa)	// * Neuer Pointer wird erstellt
//void umdrehen(int &pa)
{
    int i=0;

	pa[3]=5;
	//pa[3]=eineVar;

	std::cout << "(funktion)&pa[0]:" << &pa[0] << std::endl;
//	std::cout << "(funktion)pa: " << pa << std::endl;
	std::cout << "(funktion)&pa: " << &pa << std::endl; // * Adresse des neuen Pointers
//	std::cout << "(funktion)*pa: " << *pa << std::endl;
//	
//	std::cout << "(funktion)&eineVar: " << &eineVar << std::endl;
	std::cout << "\n";    
}


int main(int argc, char **argv)
{
    int a[MAX] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	//int var=5;
    umdrehen(&a[0]/*, var*/);	// * Uebergabe des ganzen Arrays
    //umdrehen(a[0]);  	// * Uebergibt nur das erste Element des Arrays
    //umdrehen(a);		// * Uebergabe des ganzen Arrays
    //umdrehen(*a);		// * Nicht moeglich da Arrayname pointer ist

//	std::cout << "(main)*a:" << *a << std::endl;
	std::cout << "(main)&a[0]:" << &a[0] << std::endl;
//	std::cout << "(main)a: " << a << std::endl;
//	std::cout << "(main)&a: " << &a << std::endl;
//	std::cout << "(main)&var: " << &var << std::endl;

//	std::cout << "(main)a[3]:" << a[3] << std::endl;

return 0;
}
