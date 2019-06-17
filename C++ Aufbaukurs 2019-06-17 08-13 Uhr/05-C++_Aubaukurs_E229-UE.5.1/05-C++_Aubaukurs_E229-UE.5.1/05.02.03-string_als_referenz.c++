// Gisela Neira
// C++ Basics E228
// * Programm 05.02.03 der C/C++ Programmierung
// * String als Refrenz

#include <iostream>

std::string/*&*/ erraten(std::string/*&*/  b) 
{ 				
	std::cout << &b << "\n";
	return b;
}


int main(void)
{

	std::string m=("Hallo");
	//std::string& k = erraten(m);

	erraten(m);

	std::cout << &m << "\n";

	//std::cout << k << "\n";

return 0;
}
