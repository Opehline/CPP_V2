// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.05.01 der C++ Programmierung
// * Iteratoren

#include <iostream>
#include <vector>
#include <deque>
#include <list>

#undef INDEX

#ifdef INDEX
template<typename Container>
void printContainer(Container& meinContainer)
{
	for(int i=0; i<meinContainer.size(); i++)
	{	
		std::cout<< meinContainer.at(i) << std::endl;
	}
}
#endif

#ifndef INDEX
// * Auch wenn mit Iteratoren gearbeitet wird, wird ein
// * Template benoetigt, da jeder Container seinen eigenen
// * Iterator hat.
template<typename Iterator>
void printContainer(Iterator begin, Iterator end)
{
	//while(begin < end) 	// * Gilt für radom access Iteratoren (in Vectoren und Deques)
							
	while(begin != end)		// * Listen verfügen nur über bi-direktionale Iteratoren
	{						// * Diese funktionieren nur mit !=
		std::cout<< *begin << std::endl;
		begin++;
	}
}
#endif

int main()
{
	std::vector<int> vec;
	vec.push_back(12);
	vec.push_back(33);
	vec.push_back(44);

	std::deque<int> dq;
	dq.push_front(40);
	dq.push_front(35);
	dq.push_front(5);

	std::list<int> lst;
	lst.push_front(22);
	lst.push_front(15);
	lst.push_front(8);

#ifdef INDEX
	printContainer(vec);
	std::cout << "\n";
	printContainer(dq);
	std::cout << "\n";
	printContainer(lst); // * Da nicht Array nicht moeglich mit Index.
#endif

#ifndef INDEX
	printContainer(vec.begin(), vec.end());
	std::cout << "\n";
	printContainer(dq.begin(), dq.end());
	std::cout << "\n";
	printContainer(lst.begin(), lst.end());  // * Da nicht Array nicht moeglich mit Index.
#endif
    return 0;
}
