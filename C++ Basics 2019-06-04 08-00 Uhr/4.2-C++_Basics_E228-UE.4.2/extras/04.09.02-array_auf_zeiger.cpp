// Gisela Neira
// C++ Basics E228
// * Programm 05.09.02 der C/C++ Programmierung
// * Array von Zeiger.

#include <iostream>

int main(int argc, char **argv)
{
    int a=0, e=0, i=0, o=0, u=0;
    int *p_zahlen[5];

    p_zahlen[0]=&a;
    p_zahlen[1]=&e;
    p_zahlen[2]=&i;
    p_zahlen[3]=&o;
    p_zahlen[4]=&u;

    std::cout << p_zahlen[0] << std::endl;
    std::cout << p_zahlen[1] << std::endl;
    std::cout << p_zahlen[2] << std::endl;
    std::cout << p_zahlen[3] << std::endl;
    std::cout << p_zahlen[4] << std::endl;

return 0;
}
