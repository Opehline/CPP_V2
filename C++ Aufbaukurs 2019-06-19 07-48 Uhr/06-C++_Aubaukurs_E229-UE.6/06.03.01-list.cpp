// Gisela Neira
// C++ Aufbaukurs E229
// * Listen 07.03.01 der C++ Programmierung

#include <iostream>
#include <list>

int main()
{

    // Ein List mit 6 Plaetzen initialisiert mit allen Werten gleich 5:
    std::list<int> mein_list(6,5);

	#if 0
	 	// * Diese Ausgabe nicht moeglich, da List kein Array!!
	 	// * Listen erlauben keinen Wahlfreien zugriff.
		std::cout << "\nAlle Werte der 6 Plaetze wurden mit 5 initialisiert:" << std::endl;
		std::cout << mein_list.at(0) << std::endl;
		//std::cout << mein_list[1] << std::endl;
		std::cout << mein_list[2] << std::endl;
		//std::cout << mein_list[3] << std::endl;
		//std::cout << mein_list[4] << std::endl;
		std::cout << mein_list.at(5) << std::endl;
	#endif

    // Ausgabe mittels Iterators:
	std::list<int>::iterator i;

	for(i=mein_list.begin(); i!= mein_list.end(); ++i)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	mein_list.push_back(94);
	mein_list.push_back(3);
	mein_list.push_back(50);
	mein_list.push_back(1);

	for(i=mein_list.begin(); i!= mein_list.end(); ++i)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	mein_list.push_front(67);
	mein_list.push_front(23);
	mein_list.push_front(2);
	mein_list.push_front(54);

	for(i=mein_list.begin(); i!= mein_list.end(); ++i)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	// Ausgabe durch reverse-Iterator:
	std::cout << "Ausgabe durch reverse-Iterator." << std::endl;
	std::list<int>::reverse_iterator a;
	//for(a=mein_list.end(); a!= mein_list.begin(); --a)
	for(a=mein_list.rbegin(); a!= mein_list.rend(); ++a)
	{
		std::cout << *a << " ";
	}
	std::cout << std::endl;
/**/
}
