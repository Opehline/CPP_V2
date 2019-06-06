// Gisela Neira
// C++ Basics E228
// * Programm 06.01.08 der C/C++ Programmierung
// * Übergabe eines Strukts an eine Funktion
// * Pointer

#include <iostream>
#include <ctime>

struct Zeit
{
	int H; // globale Variablen fuer Stunden 
	int M; // globale Variablen fuer Minuten
	int S; // globale Variablen fuer Sekunden

	time_t t;
};

struct Zeit *zeit, zeiten;

void countDown(struct Zeit *zeit);
void ausgabeBildschirm(struct Zeit *zeit);


int main(){

	zeit = &zeiten;
	
	ausgabeBildschirm(zeit);
	countDown(zeit);
}


void ausgabeBildschirm(struct Zeit *zeit)
{
	std::cout << "Stunden eingeben\n";
	std::cin >> zeit->H;
	std::cout << "Minuten eingeben\n";
	std::cin >> zeit->M;
	std::cout << "Sekunden eingeben\n";
	std::cin >> zeit->S;
	std::cout << "Stunden = " << zeit->H << " Minuten = " << zeit->M << " Sekunden = " << zeit->S << std::endl;
}

void countDown(struct Zeit *zeit)
{
	int Minuten;
	int Stunden;
	int Sekunden;

	for(Stunden = zeit->H; Stunden >= 0; Stunden--)
	{
		for(Minuten = zeit->M; Minuten >= 0 ; Minuten--)
		{
			if(Minuten == 0)
			zeit->M = 59;
				for(Sekunden = zeit->S; Sekunden >= 0; Sekunden--)
				{
					if(Sekunden == 0)
						zeit->S = 59;
			
					//Sleep(1000);// Wartet 1000 Millisekunde (1 Sekunde)
		
					//system("cls"); // Reinigt den Inhalt der Konsole bei jedem Schleifen durchflauf.
		
					std::cout << " Stunden = " << Stunden << " Minuten = " << Minuten << " Sekunden = " << Sekunden << std::endl;//Aktualisiert die Countdown dastellung in der Console
					//std::cout << "\n Aktuelle Uhrzeit: "; system("time /T"); std::cout << "\n";
		
					zeit->t = time(NULL);
					struct tm *ts; 
					ts = localtime(&(zeit->t));
		
					std::cout<< "\n Aktuelle Zeit: \n" << asctime(ts) << std::endl;
				}	
		}
   }
}
