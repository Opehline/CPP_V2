// Gisela Neira
// C++ Basics E228
// * Datenstrukturen 06.01.09 der C/C++ Programmierung
// * Rueckgabe eines Strukts aus einer Funktion
// * als return-Wert

#include <iostream>

using namespace std;

struct Zahlen
{
	float a, b;
};

void eingabeEval(char a);
struct Zahlen zahlenEingabe();
int zahlenBerechnen(struct Zahlen *wahl, char m);
char anfangBildschirm(char auswahl);
int auswahlEval(char m);


int main(void)
{
	struct Zahlen *zahlen, zahlenVar;
	zahlen = &zahlenVar;
	char auswahl;

	setlocale(LC_ALL, "");

	auswahl = anfangBildschirm(auswahl);
	eingabeEval(auswahl);
	*zahlen = zahlenEingabe();
	zahlenBerechnen(zahlen, auswahl);

	return 0;
}

char anfangBildschirm(char auswahl)
{
	std::cout << "| ------------------------------------------- |"<<std::endl;
	std::cout << "| Hier ist dein Menue für Taschenrechner:      |\n"
	     << "| \tWählen Sie: '+' für Addition.             |\n"
	     << "| \tWählen Sie: '-' für Subktration.          |\n"
	     << "| \tWählen Sie: '*' für Multiplication.       |\n"
	     << "| \tWählen Sie: '/' für Division.             |\n"
	     << "| \tWählen Sie: 'q' für Quadrieren.           |\n"
	     << "| \tWählen Sie: 'a' für Abbruch.              |" << std::endl;
	std::cout << "| -------------------------------------------"<<std::endl;
	std::cout << "Deine Auswahl ist: ";
	std::cin>> auswahl;
	auswahlEval(auswahl);
	return auswahl;
}

int auswahlEval(char m)
{
	switch (m) 
	{
		
		case '+':
			std::cout<< "Deine Auswahl ist Addition. \n";
			break;
		case '-':
			std::cout<< "Deine Auswahl ist Subktration. \n";
			break;
		case '*':
			std::cout<< "Deine Auswahl ist Multiplikation. \n";
			break;
		case '/':
			std::cout<< "Deine Auswahl ist Division. \n";
		break;
		case 'q':
			std::cout<< "Deine Auswahl ist Potenz. \n";
			break;
		case 'a': return 0;
		default:
			std::cout<< "Ungültige Auswahl. \n";
			break;
	}
}

void eingabeEval(char a)
{
	if(	a!='+'&&
		a!='-'&&
		a!='*'&&
		a!='/'&&
		a!='q'&&
		a!='a'
	  )
	{
		std::cerr << "Sie haben eine ungueltige Eingabe eingegeben." << std::endl;
		std::cerr << "Das Programm bricht ab..." << std::endl;
		exit(0);
	}
}

struct Zahlen zahlenEingabe()
{
	struct Zahlen *zahlen, zahlenVar;
	zahlen = &zahlenVar;
	std::cout << "Zahl 1: > ";
	std::cin >> zahlen->a;
	std::cout << "Zahl 2: > ";
	std::cin >> zahlen->b;
	return *zahlen;
}

int zahlenBerechnen(struct Zahlen *wahl, char m)
{
	switch (m) {
		
		case '+':
			std::cout<< "Ergebnis der Addition ist: ";
			std::cout << wahl->a + wahl->b;
			std::cout << std::endl<<"-------------------------------------------"<<std::endl;
			break;
			
		case '-':
			std::cout<< "Ergebnis der Subktration ist: ";
			std::cout << wahl->a - wahl->b;
			std::cout << std::endl<<"--------------------------------------------"<<std::endl;
			break;
		
		case '*':
			std::cout<< "Ergebnis der Multiplikation ist: ";
			std::cout << wahl->a * wahl->b;
			std::cout << std::endl<< "---------------------------------------------"<<std::endl;
			break;
	
		case '/':
			std::cout<< "Ergebnis der Division ist: ";
			std::cout << wahl->a / wahl->b;
			std::cout << std::endl<<"-------------------------------------------------"<<std::endl;
			break;
					
		case 'q':
			std::cout<< "Ergebnis der Potenz ist: ";
			std::cout << wahl->a * wahl->a;
			std::cout << std::endl<<"--------------------------------------------------"<<std::endl;
			break;
		case 'a': return 0;
			
		default:
			std::cout<< "Ungültige Auswahl. \n";
			break;
	}
}
