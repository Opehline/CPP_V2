// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.02.03 der C++ Programmierung
// * Deques koenen als Parameters an Funktionen uebergeben werden.
// * Erste Funktion: ein Deque fuellen
// * Zweite Funktion: ein Deque zeigen

#include <iostream>
#include <deque>

// -----------------Funktion 1------------------
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

// ----------------Funktion 2--------------------
void dequePos1loeschen(std::deque<int>& mein_dequeloesch)
{
    mein_dequeloesch.pop_front();
}

// ----------------Funktion 3--------------------
void dequezeigen(const std::deque<int>& mein_dequezeigen) // * const damit Deque nicht ueberschrieben werden kann
{
    int i=0;

    for(i=0; i<mein_dequezeigen.size(); i++)
    {
		std::cout << mein_dequezeigen[i] << std::endl;
    }
std::cout << std::endl;
}

int main()
{
    std::deque<int> mein_deque;

    dequefuellen(mein_deque);   
    dequezeigen(mein_deque);
	dequePos1loeschen(mein_deque);
    dequezeigen(mein_deque);

    return 0;
}
