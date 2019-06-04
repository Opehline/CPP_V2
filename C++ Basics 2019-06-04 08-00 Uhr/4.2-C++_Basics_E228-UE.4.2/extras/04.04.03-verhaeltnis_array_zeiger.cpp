// Gisela Neira
// C++ Basics E228
// * Programm 05.04.03 der C/C++ Programmierung
// * Verhaeltniss Array und Zeiger

#include <iostream>


int main(int argc, char **argv)
{
	const int lang=5;
    int a[lang], i=0, *p=0;


    std::cout << "\nMerksatz: a[i] und *(a+i) sind gleichwertig. " << std::endl;
    std::cout << "Nach den Gesetzen der Zeigerarithmetik gilt a+i = &a[i]." << std::endl;
    for(i=0; i<lang; i++)
    {
		std::cout << "Array *(a+i) pos [ " << i << "] " << (*(a+i)=0) << std::endl;
    }

    for(i=0; i<lang; i++)
    {
		std::cout << "Array a[i] pos [" << i << "]: " << (a[i]=0) << std::endl;
    }

    std::cout << "\nMerksatz: Ist a ein Array, so ist a zugleich ein Zeiger auf das " << std::endl;
    std::cout << "erste Element des Arrays:\n" << std::endl;
    for(i=0, *a; i<lang; i++)
    {
		std::cout << "Array *a pos [" << i << "]: " << (*a=0) << std::endl;
    }

return 0;
}
