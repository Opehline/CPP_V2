// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.04.03 C++ Programmierung
// * Datei Umbennen nicht OOP (also, ohne
// * Objekt)

#include <iostream>

int main ()
{
	int eval;
	
	eval = rename("data.txt", "data01.txt");
  
	if(eval==0)
	{
		std::cout << "Erfolgreich umbennant!";
	}
    
	else
	{
		std::cerr << "Feher beim umbennenen!";
	}

  return 0;
}
