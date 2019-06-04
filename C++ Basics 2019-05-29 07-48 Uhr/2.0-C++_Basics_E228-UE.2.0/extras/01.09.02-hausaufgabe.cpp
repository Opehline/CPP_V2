// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.09.02 der C/C++ Programmierung
// * Hausaufgabe in C++ Programmierung.

#include <iostream>
#include <iomanip>      // std::setprecision

int main(int argc, char **argv)
{
    
    float alter1=0, alter2=0, durchschnitt=0;

    std::cout << "(1) Koennen Sie mir Ihr Alter verraten?: > ";
    std::cin >> alter1;
	std::cin.clear();
    std::cout << "\n(2) Koennen Sie mir Ihr Alter verraten?: > ";
    std::cin >> alter2;
	std::cin.clear();

    durchschnitt = ((alter1+alter2)/2);
    std::cout << "\nDer Durchschnitt ist: >"<< std::setprecision(5) << durchschnitt << std::endl;

getchar();

return 0;
}
