// Gisela Neira
// C++ Basics E228
// * Programm 04.04.04 der C/C++ Programmierung
// * Wann ein Pointer sich lohnt!

#include <iostream>

struct SehrGross
{
    double daten[400];
    int wert;
    char was[1000];
    long double eins, zwei, drei;
    long double wo[30000];

};

int schnell_und_flink(struct SehrGross* duenn)
{
    //......
    std::cout << "Groesse der Zeigervariable: \t"
              << sizeof(duenn)
              << " Bytes" << std::endl;
    std::cout << "Gespart wurden: \t\t" << (sizeof(SehrGross)-sizeof(duenn))/1000.0
              << " Kilobytes" << std::endl;
}



int main(int argc, char **argv)
{
    struct SehrGross etwasDick;

    std::cout << "Groesse der Structvariable: \t"
              << sizeof(etwasDick)
              << " Bytes" << std::endl;

    schnell_und_flink(&etwasDick);

return 0;
}
