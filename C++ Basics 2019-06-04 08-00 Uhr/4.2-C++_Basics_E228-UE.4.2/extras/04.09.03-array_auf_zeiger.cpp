// Gisela Neira
// C++ Basics E228
// * Programm 05.09.03 der C/C++ Programmierung
// * Array von Zeiger.

#include <iostream>

int main(int argc, char **argv)
{
    int var1=1, var2=2;
    int *p_var=&var1;
    int **p_p_var=&p_var;

    std::cout << &var1 << std::endl;
    std::cout << p_p_var[0] << std::endl;

    p_var = &var2;

    std::cout << &var2 << std::endl;
    std::cout << p_p_var+1 << std::endl;

return 0;
}
