// Gisela Neira
// C++ Basics E228
// * Programm 03.02.08 der C/C++ Programmierung
// * Inkrement ++i und i++ in Bedingung sind das selbe

#include <stdio.h>
#include <iostream>

int probe(int a)
{
	 	printf("%d \n",a);
}

int main(int argc, char **argv)
{

    int i=1;

	// * Was fuer Resultate?:
	for(i; i<10; i++)	//	i++
	//for(i; i<10; ++i)		// 	++i
   	{
	  	//++i;
   	   	//i++;

		// * printf()
   		//printf("printf i   > %d \n", i);
		// * Hier erkennt man den Unterschied vom Inkrement ++i und i++
		//printf("printf i++ > %d \n", i++);
		//printf("printf ++i > %d \n", ++i);

		// * cout <<
		//std::cout << "cout > " << i << "\n";
		// * Hier erkennt man den Unterschied vom Inkrement ++i und i++
   		//std::cout << "cout i++ > " << i++ << "\n";
		//std::cout << "cout ++i > " << ++i << "\n";
		std::cout << "cout i > " << i << "\n";
	   	//probe(++i++);
	}

return 0;
}
