// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 06.06.02 der C++ Programmierung
// * Unterscheidung zwischen size() und capacity()

#include <iostream>
#include <iomanip>
#include <vector>

#define Capacity
//#define atFunk

int main()
{
    // * Ein Vector mit 6 Plaetzen initialisiert mit allen Werten gleich Null:
    std::vector<int> mein_vector(5,5); 	// * int mein_array[6]={5,5,5,5,5,5};
										// * auch: std::vector<int> mein_vector(6);
										// * garantier mit NULL intitialisert

 	for(int i=0; i<=20; i++)
	{
		mein_vector.push_back(26);
	}

	mein_vector.clear();


    std::cout << "mein_vector.size() "
              << mein_vector.size() << std::endl;

        #ifdef atFunk
        std::cout << "mein_vector.at(0)"
                  << mein_vector.at(0) << std::endl;
        #endif

    #ifdef Capacity
    std::cout << "mein_vector.capacity() "
              << mein_vector.capacity() << std::endl;

    for(int i=0; i<=50; i++)
    {
        std::cout << mein_vector[i] << std::endl;
        std::cout << &mein_vector[i] << std::endl;
    }

    std::cout << "\n";

    for(int i=0; i<=3; i++)
    {
        mein_vector.push_back(2);
        std::cout << mein_vector[i] << std::endl;
        std::cout << &mein_vector[i] << std::endl;

    }
        std::cout << "mein_vector.capacity() "
                  << mein_vector.capacity() << std::endl;
    #endif // Capacity
return 0;

}
