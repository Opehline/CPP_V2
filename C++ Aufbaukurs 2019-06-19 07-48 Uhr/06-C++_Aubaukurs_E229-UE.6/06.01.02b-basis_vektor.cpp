// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.01.01 der C++ Programmierung
//   Basisaspekte eines Vektors

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


int main()
{

    // * Zwei leere Vektoren:

 	std::vector<int> mein_vectorleer;
	std::vector<int> mein_vector2leer;
	// * Zuweisung eines Werts durch assign-Funktion
	std::cout << "\nZuweisung eines Werts durch assign-Funktion" << std::endl;
	std::cout << "mein_vectorleer wird gefuellt:" << std::endl;

	mein_vectorleer.assign(10,12); // * 10 int Zahlen mit Wert 12

	std::cout << "mein_vectorleer[0]> " << mein_vectorleer[0] << std::endl;
	std::cout << "mein_vectorleer[1]> " << mein_vectorleer[1] << std::endl;
	std::cout << "mein_vectorleer[2]> " << mein_vectorleer[2] << std::endl;
	std::cout << "mein_vectorleer[3]> " << mein_vectorleer[3] << std::endl;
	std::cout << "mein_vectorleer[4]> " << mein_vectorleer[4] << std::endl;
	std::cout << "mein_vectorleer[5]> " << mein_vectorleer[5] << std::endl;
	std::cout << "mein_vectorleer[6]> " << mein_vectorleer[6] << std::endl;
	std::cout << "mein_vectorleer[7]> " << mein_vectorleer[7] << std::endl;
	std::cout << "mein_vectorleer[8]> " << mein_vectorleer[8] << std::endl;
	std::cout << "mein_vectorleer[9]> " << mein_vectorleer[9] << std::endl;	// * Bis hier hin Werte
	std::cout << "mein_vectorleer[10]> " << mein_vectorleer[10] << std::endl;	// * Hier ausserhalb des Bereiches
	std::cout << "mein_vectorleer[11]> " << mein_vectorleer[11] << std::endl; // *
	std::cout << "mein_vectorleer[12]> " << mein_vectorleer[12] << std::endl;	// * des Vectors => Muell

	// * assign-Funktion gibt die Moeglichkeit mit Iteratoren zu
	// * arbeiten:
	std::vector<int>::iterator it;
  	it=mein_vectorleer.begin()+1;
  	// * Hier werden die 5 mittleren Werte von mein_vectorleer in
	// * mein_vector2leer kopiert:
  	mein_vector2leer.assign(it,mein_vectorleer.end()-4);
	// * Ausgabe des kopierten Werte

	std::cout << "\nmein_vector2leer[0]> "<< mein_vector2leer[0] << std::endl;
    std::cout << "mein_vector2leer[1]> "<< mein_vector2leer[1] << std::endl;
    std::cout << "mein_vector2leer[2]> "<< mein_vector2leer[2] << std::endl;
    std::cout << "mein_vector2leer[3]> "<< mein_vector2leer[3] << std::endl;
    std::cout << "mein_vector2leer[4]> "<< mein_vector2leer[4] << std::endl; 	// * Bis hier hin Werte
    std::cout << "mein_vector2leer[5]> "<< mein_vector2leer[5] << std::endl;	// * Hier ausserhalb des Bereiches
    std::cout << "mein_vector2leer[6]> "<< mein_vector2leer[6] << std::endl;	// * des Vectors => Muell
	std::cout << "\size() des Vectors mein_vector2leer> " << mein_vector2leer.size() << std::endl;
/**/
return 0;
}
