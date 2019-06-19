// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 06.01.06 der C++ Programmierung
// * swap

#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> _v1 (3,100);
    std::vector<int> _v2 (5,200);

    _v1.swap(_v2);

    std::cout << "_v1 contains:";
    for (unsigned i=0; i<_v1.size(); i++)
    {
        std::cout << ' ' << _v1[i];
    }
    std::cout << '\n';

    std::cout << "_v2 contains:";
    for(unsigned i=0; i<_v2.size(); i++)
    {
        std::cout << ' ' << _v2[i];
    }
    std::cout << '\n';

  return 0;
}
