// Gisela Neira
// C++ Basics E228
// * if-Kontrollstruktur 03.01.04 der C/C++ Programmierung
// * continue-Anweisung

#include <iostream>

int main(void)
{
	int i=0;

	for(i=0; i<=20; i++)
	{
		if(i%3==0) 	  	// * Sucht alle durch 3 teilbaren Zahlen auf
		{
			std::cout << "Dieser Text steht vor continue, und wird gedruckt." << std::endl;

			continue; 	// * continue sorgt dafür, dass zunaechst die weiter-Anweisung der for-Schleife
					  	// * ausgefuehrt wird, also der Zaehler erhoet und anschließend die Bedingung
					  	// * geprueft wird.
			std::cout << "Dieser Text steht nach continue, und wird nicht ausgegeben." << std::endl;
		}
		if(i%2==0)
		{	continue;}

		std::cout << "Nicht durch drei und zwei Teilbar: " << i <<  std::endl; 	// * Es werden die Zahlen fehlen die in der if-Bedingung
																		// * defniert wurde. In diesem Fall werden alle durch 2
																		// * und 3 teilbaren Zahlen fehlen.
	}

return 0;
}
