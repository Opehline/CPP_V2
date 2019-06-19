// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.02.02 der C++ Programmierung
// * Funktion: wie ein Deque mit Hilfe einer 
// * Funktion gefuellt werden kann.
// * Kein Resultat ist auf dem Bildschirm zu erkennen.

#include <iostream>
#include <deque>


// ----------------- Funktion ------------------
// * Wir uebergen an die Funktion die den Deque
// * fuellen wird, den ganzen Deque als parameter
// * ueber.
// * Der Deque wird als Referenz an die Funktion
// * gegeben.
// * Grund: wuerde der Deque an die
// * Funktion als Wert uebergeben werden, wuerde
// * bei jedem aublauf der Funktion eine Kopie
// * des Deques erstellen werden. Das ist bei 
// * Deques besonder problematisch, da sie sehr
// * groß sein koennen.
void dequefuellen(std::deque<int>& mein_dequefuell)
{
    mein_dequefuell.push_back(5);
    mein_dequefuell.push_back(49);
    mein_dequefuell.push_back(7);
    mein_dequefuell.push_back(1);
    mein_dequefuell.push_back(879);

    mein_dequefuell.push_front(51);
    mein_dequefuell.push_front(79);
    mein_dequefuell.push_front(633);
    mein_dequefuell.push_front(7439);
    mein_dequefuell.push_front(23);
}

int main()
{
    std::deque<int> mein_deque;
    dequefuellen(mein_deque);   

    return 0;
}
