// Gisela Neira
// C++ Basics E228
// * Programm 05.06.02 der C/C++ Programmierung
// * mehrdimensionalen Array mit Werten füllen

#include <iostream>
#undef FUNC
#undef SIMP

int main(int argc, char **argv)
{
    int daten[3][4][2]={0};
    int a=0, m=0, i=0;

    for(a=0; a<3; a++)
    {
		for(m=0; m<4; m++)
		{
			for(i=0; i<2; i++)
			{
				daten[a][m][i] = a + m + i;
				std::cout << daten[a][m][i];
			}std::cout << "\n";
		}
	std::cout << "\n";
    }

return 0;
}
