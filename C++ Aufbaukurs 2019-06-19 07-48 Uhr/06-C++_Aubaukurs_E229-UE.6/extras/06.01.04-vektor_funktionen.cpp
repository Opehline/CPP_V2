// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.01.04 der C++ Programmierung
//   Erste Funktion: wie ein Vector mit hilfe einer Funktion 
//	 gefuellt werden kann.
//   Zweite Funktion: es wird der Vector auf dem Bildschir ausgegeben.

#include <iostream>
#include <vector>

using namespace std;


// -----------------Funktion 1------------------
// * Wir uebergen an die Funktion die den Vector
// * fuellen wird, den ganzen Vector als parameter
// * ueber.
// * Der Vector wird als Referenz an die Funktion
// * gegeben.
// * Grund: wuerde der Vector an die
// * Funktion als Wert uebergeben werden, wuerde
// * bei jedem aublauf der Funktion eine Kopie
// * des Vectors erstellen werden. Das ist bei 
// * Vectors besonder problematisch, da sie sehr
// * groß sein koennen.
void vectorfuellen(std::vector<int>& mein_vectorfuell)
{
    mein_vectorfuell.push_back(5);
    mein_vectorfuell.push_back(49);
    mein_vectorfuell.push_back(7);
    mein_vectorfuell.push_back(31);
    mein_vectorfuell.push_back(6);
    mein_vectorfuell.push_back(14);

}

// ----------------Funktion 2--------------------
// * Wie uebergen an die Funktion die den Vector
// * zeigen wird, den ganzen Vector als parameter
// * ueber.
// * Der Vector wird als Referenz an die Funktion
// * gegeben.
// * Der Vector wird als konstant dieser Funktion
// * gegeben.
// * Grund: in der vectorfuellen-Funktion, ging
// * es darum, den Vector zu modifizieren. Im
// * jetzigen Fall wollen wir den Vector konstant
// * haben, da keine Aenderung durchgefuert werden.
// * Es ist keine Notwendigkeit den Vector als
// * konstantes Parametar an die Funktion zu
// * uebergeben, aber es dient zur Sicherheit.
void vectorzeigen(const std::vector<int>& mein_vectorzeigen)
{
    int i=0;

    for(i=0; i<mein_vectorzeigen.size(); i++)
    {
		std::cout << mein_vectorzeigen.at(i)<< std::endl;
    }
}


int main()
{
    std::vector<int> mein_vector;
    vectorfuellen(mein_vector);   
    vectorzeigen(mein_vector);

    return 0;
}
