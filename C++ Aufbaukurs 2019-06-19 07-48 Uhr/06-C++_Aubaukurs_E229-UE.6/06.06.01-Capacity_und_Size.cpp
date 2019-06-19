// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 06.06.01 der C++ Programmierung
// * Unterscheidung zwischen size() und capacity()

#include <iostream>
#include <iomanip>
#include <vector>

#undef Capacity

int main()
{
    // * Ein Vector mit 6 Plaetzen initialisiert mit allen Werten gleich Null:
    std::vector<int> mein_vector(5,5); 	// * int mein_array[6]={5,5,5,5,5,5};
										// * auch: std::vector<int> mein_vector(6);
										// * garantier mit NULL intitialisert

 	for(int i=0; i<=20; i++)
	{
		//std::cout << mein_vector[i] << std::endl;
		mein_vector.push_back(26);

		std::cout << "mein_vector.size() "
				  << mein_vector.size() << std::endl;
		#ifdef Capacity
		std::cout << "mein_vector.capacity() "
		 		  << mein_vector.capacity() << std::endl;
        #endif // Capacity
	}
return 0;

}
