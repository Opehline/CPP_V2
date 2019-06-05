// Gisela Neira
// C++ Basics E228
// * Funktionen 05.02.01 der C/C++ Programmierung
// * Loesungsvorschlag

#include <iostream>




float summe(float a, float b, float ergebni);
float multiplikation(float a, float b, float ergebni);
float division(float a, float b, float ergebni);
void initProgram();

int main(int argc, char **argv)
{
	initProgram();
	//.....
	//..

return 0;
}


float summe(float a, float b, float ergebnis)
{
    ergebnis=a+b;
    return ergebnis;
}

float multiplikation(float a, float b, float ergebnis)
{
    ergebnis=a*b;
    return ergebnis;
}

float division(float a, float b, float ergebnis)
{
    ergebnis=a/b;
    return ergebnis;
}

void initProgram()
{
	float x=25, y=5;
    float ergebnis=0;
    
	ergebnis=summe(x, y, ergebnis);
    std::cout << "Summe von x und y: " << ergebnis << std::endl;
    
    ergebnis=multiplikation(x, y, ergebnis);
    std::cout << "Multiplikation von x und y: " << ergebnis << std::endl;
    
    ergebnis=division(x, y, ergebnis);
    std::cout << "Division von x und y: " << ergebnis << std::endl;
}
