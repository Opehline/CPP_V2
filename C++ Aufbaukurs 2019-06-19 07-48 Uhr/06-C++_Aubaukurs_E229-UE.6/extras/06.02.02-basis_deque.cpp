// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.02.02 der C++ Programmierung
//   Basisaspekte eines Deques II

#include <iostream>
#include <deque>

using namespace std;


int main()
{

    // Ein Deque mit 6 Plaetzen initialisiert mit allen Werten gleich 3:
    std::deque<int> mein_deque(6,3);

    std::cout << "\nAlle Werte der 6 Plaetze wurden mit drei initialisiert:" << std::endl;
    std::cout << mein_deque[0] << std::endl;
    std::cout << mein_deque[1] << std::endl;
    std::cout << mein_deque[2] << std::endl;
    std::cout << mein_deque[3] << std::endl;
    std::cout << mein_deque[4] << std::endl;
    std::cout << mein_deque[5] << std::endl;

    // Es wird nun das erste Element geaendert:
    std::cout << "\nEsrtes Element wurde geaendert. Neuer Wert:" << std::endl;
    //mein_deque[0] = 12;
    mein_deque.at(0) = 12;
    std::cout << mein_deque[0] << std::endl;
   
    // Neuer Wert wird ergaenzt:
    std::cout << "\nNeuer Wert wird vorne eingefuegt:" << std::endl;
    mein_deque.push_front(26); 

    std::cout << mein_deque[0] << std::endl;
    std::cout << mein_deque[1] << std::endl;
    std::cout << mein_deque[2] << std::endl;
    std::cout << mein_deque[3] << std::endl;
    std::cout << mein_deque[4] << std::endl;
    std::cout << mein_deque[5] << std::endl;
    std::cout << mein_deque[6] << std::endl;

    // Groesse des Deques wird bestimmt
    std::cout << "\nDie aktuelle Groesse des Deques ist:" << std::endl;
    std::cout << mein_deque.size() << std::endl;

    // Deque wird geleert:
    std::cout << "\nDeque wird geleert: " << std::endl;
    mein_deque.clear();
    std::cout << "\nDie aktuelle Groesse des Deques ist:" << std::endl;
    std::cout << mein_deque.size() << std::endl; 
/**/
}
