// Gisela Neira
// C++ Basics E228
// * Programm Loesung (Vorschlag) 05.02.04 der C/C++ Programmierung
// * String als return-Wert einer Funktion


#include <iostream>
#include <string>


std::string AusgabeEinesTextes(std::string satz);
std::string AusgabeVielerTexte(std::string satz);

int main(void)
{
	std::string text={"\n***Ich bin ein String der mehrmals ausgegeben werden soll***\n\n"};
	std::cout << text;
	std::cout << AusgabeEinesTextes(text);
	//std::cout << text;
	std::cout << AusgabeVielerTexte(text);
}


std::string AusgabeEinesTextes(std::string satz)
{
	std::cout<<"Was fuer ein Satz bist du?: ";
	//satz="Wird main geaendert?";
    return(satz);   
}

std::string AusgabeVielerTexte(std::string satz)
{
	std::cout<<"Man kann einen String an eine Funktion" << std::endl;
	std::cout<<"uebergeben." << std::endl;
	std::cout<<"Und so wird der Text wieder benutzt" << std::endl;
	std::cout<<"ohne nochmal gettipt zu werden:" << std::endl;
    return(satz);	
}
