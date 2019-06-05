// Gisela Neira
// C++ Basics E228
// * Programm 06.02.06 der C/C++ Programmierung
// * Funktionen return Funktionen ohne Parameter

#include <iostream>


int funktion1();
int funktion2();

typedef int (*pointerFunktion)();
pointerFunktion f(char wahl);

int main() 
{
	char wahl=0;
	std::cout << "1 oder 2 eingeben" << std::endl;
	std::cin >> wahl;
    pointerFunktion fp = f(wahl);
    std::cout << fp() << std::endl;
}


int funktion1() 
{
	std::cout << "Ihre wahl: ";
    return 1;
}

int funktion2() 
{
	std::cout << "Ihre Eingabe: ";
    return 2;
}

//typedef int (*pointerFunktion)();
pointerFunktion f(char wahl)
{
    if (wahl=='1') 
	{
        return funktion1;
    }
    else 
	{
        return funktion2;
    }
}
