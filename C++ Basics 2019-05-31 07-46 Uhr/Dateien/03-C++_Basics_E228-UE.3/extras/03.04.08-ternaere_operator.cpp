// Gisela Neira
// C++ Basics E228
// * Programm 03.04.08 der C/C++ Programmierung
// * for-Schleife + ?-Operation

#include <iostream>

#define SIMPEL

int main(int argc, char **argv)
{
	long int i=0, j=0, sum_a=0, mult_b=1;
	int a[10] = {1, 3, 2, 4, 12, 34, 9, 78, 6, 4}, 
		b[12] = {2, 3, 2, 4, 2, 4, 2, 1, 3, 3, 2, 3};
	
	for (i=0,j=0;i<5 || j<12; i++, j++)
	{
		(i<5)  ?  sum_a += a[i], mult_b *= b[j]  :  mult_b *= b[j];
	}

	std::cout << sum_a << std::endl;
	std::cout << mult_b << std::endl;
	
return 0;
}
