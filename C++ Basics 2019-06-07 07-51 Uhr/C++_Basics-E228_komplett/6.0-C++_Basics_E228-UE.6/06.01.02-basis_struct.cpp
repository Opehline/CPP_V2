// Gisela Neira
// C++ Basics E228
// * Programm 06.01.02 der C/C++ Programmierung
// * Erstellung einer Datenstrukrut + Deklaration
// * Lokale Datenstruktur + Eingabe durch Tastatur

#include <iostream>

struct Kinder
{
    char name[25];
    int alter;
    float groesse;
    int geburtsjahr;
    char geburtsmonat[10];
    int geburtstag;
}kind1={"Aurora", 2, 0.90, 2015, "Oktober", 5}; // * Es wird eine Variable Struct Kinder erstellt.
struct Kinder kind2;

int main(int argc, char **argv)
{
    // * Auch so wird eine Variable Struct Kinder erstellt.
    //struct Kinder kind3;

   std::cout << "Geben Sie den Namen ein: > ";
    std::cin >> kind1.name;
    std::cin.clear();
   std::cout << "Geben Sie den Alter ein: > ";
    std::cin >> kind1.alter;
    std::cin.clear();
   std::cout << "Geben Sie die Groesse ein: > ";
    std::cin >> kind1.groesse;
    std::cin.clear();
   std::cout << "Geben Sie das Geburtsjahr ein: > ";
    std::cin >> kind1.geburtsjahr;
    std::cin.clear();
   std::cout << "Geben Sie den Geburtsmonat ein: > ";
    std::cin >> kind1.geburtsmonat;
    std::cin.clear();
   std::cout << "Geben Sie den Geburtstag ein: > ";
    std::cin >> kind1.geburtstag;
    std::cin.clear();

   std::cout << "Name: " << kind1.name;
   std::cout << "Alter: " << kind1.alter;
   std::cout << "Groesse: " << kind1.groesse;
   std::cout << "Geburtsjahr: " << kind1.geburtsjahr;
   std::cout << "Geburtsmonat: " << kind1.geburtsmonat;
   std::cout << "Geburtstag: " << kind1.geburtstag;

return 0;
}
