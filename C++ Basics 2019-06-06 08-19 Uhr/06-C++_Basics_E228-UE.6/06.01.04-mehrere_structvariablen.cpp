// Gisela Neira
// C++ Basics E228
// * Programm 06.01.04 der C/C++ Programmierung
// * Erstellung einer Datenstruktur, mehrere
// * mehrere struct-Variablen erstellen

#include <iostream>

struct Kinder
{
    char name[25];
    float groesse;
    int geburtsjahr;
}/*kind1, kind2, kind3*/;

int main(int argc, char **argv)
{
    // * Es werden drei Variablen Struct Kinder erstellt.
    struct Kinder kind1, kind2;
    struct Kinder kind3;

    std::cout << "Geben Sie den Namen ein: > ";
    std::cin >> kind1.name;
    std::cin.clear();;
    std::cout << "Geben Sie die Groesse ein: > ";
    std::cin >> kind1.groesse;
    std::cin.clear();;
    std::cout << "Geben Sie das Geburtsjahr ein: > ";
    std::cin >> kind1.geburtsjahr;
    std::cin.clear();;

    std::cout << "Geben Sie den Namen ein: > ";
    std::cin >> kind2.name;
    std::cin.clear();
    std::cout << "Geben Sie die Groesse ein: > ";
    std::cin >> kind2.groesse;
    std::cin.clear();;
    std::cout << "Geben Sie das Geburtsjahr ein: > ";
    std::cin >> kind2.geburtsjahr;
    std::cin.clear();;

    std::cout << "Geben Sie den Namen ein: > ";
    std::cin >> kind3.name;
    std::cin.clear();;
    std::cout << "Geben Sie die Groesse ein: > ";
    std::cin >> kind3.groesse;
    std::cin.clear();;
    std::cout << "Geben Sie das Geburtsjahr ein: > ";
    std::cin >> kind3.geburtsjahr;
    std::cin.clear();;

	std::cout <<"Name: " << kind1.name << std::endl;
	std::cout <<"Groesse: " << kind1.groesse << std::endl;
	std::cout <<"Geburtsjahr: " << kind1.geburtsjahr << std::endl;

	std::cout <<"Name: " << kind2.name << std::endl;
	std::cout <<"Groesse: " << kind2.groesse << std::endl;
	std::cout <<"Geburtsjahr: " << kind2.geburtsjahr << std::endl;

	std::cout <<"Name: " << kind3.name << std::endl;
	std::cout <<"Groesse: " << kind3.groesse << std::endl;
	std::cout <<"Geburtsjahr: " << kind3.geburtsjahr << std::endl;

return 0;
}
