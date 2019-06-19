// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.01.03 der C++ Programmierung
// * Vektoren koenen als Parameters an Funktionen uebergeben werden.
// * Funktion: wie ein Vector mit Hilfe einer Funktion gefuellt werden kann.
// * Kein Resultat ist auf dem Bildschirm zu erkennen.

#include <iostream>
#include <vector>

// ----------------- Funktion ------------------
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

int main()
{
    std::vector<int> mein_vector;
    vectorfuellen(mein_vector);   

    return 0;
}
