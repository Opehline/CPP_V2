// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.01.01 der C++ Programmierung
//   Basisaspekte eines Vektors

#include <iostream>
#include <iomanip>
#include <vector>

int main()
{

    // * Ein Vector mit 6 Plaetzen initialisiert mit allen Werten gleich Fuenf:
    std::vector<int> kleinaberfein(6,5); // *	int mein_array[6]={5,5,5,5,5,5};  auch: std::vector<int> kleinaberfein(6); garantier mit Fuenf intitialisert

    #if 0
    std::cout << "\nAlle Werte der 6 Plaetze wurden mit Fuenf initialisiert:" << std::endl;
    std::cout << "kleinaberfein[0] > " << kleinaberfein[0] << std::endl;
    std::cout << "kleinaberfein[1] > " << kleinaberfein[1] << std::endl;
    std::cout << "kleinaberfein[2] > " << kleinaberfein[2] << std::endl;
    std::cout << "kleinaberfein[3] > " << kleinaberfein[3] << std::endl;
    std::cout << "kleinaberfein[4] > " << kleinaberfein[4] << std::endl;
    std::cout << "kleinaberfein[5] > " << kleinaberfein[5] << std::endl;

    // * Es wird nun das erste Element geaendert:
    // * Zuweisung eines Werts durch =-Operator
    std::cout << "\nErtes Element wurde geaendert. Neuer Wert:" << std::endl;
    kleinaberfein.at(0) = 12;
    std::cout << "kleinaberfein.at(0) > " << kleinaberfein.at(0) << std::endl;
    #endif



    #if 0
    // Neuer Wert wird in kleinaberfein ergaenzt:
    std::cout << "\nNeuer Wert wird angehangen:" << std::endl;
    kleinaberfein.push_back(1);

    std::cout << "kleinaberfein[0] > " << kleinaberfein.at(0) << " " << &kleinaberfein.at(0) << std::endl;
    std::cout << "kleinaberfein[1] > " << kleinaberfein.at(1) << " " << &kleinaberfein.at(1) << std::endl;
    std::cout << "kleinaberfein[2] > " << kleinaberfein.at(2) << " " << &kleinaberfein.at(2) << std::endl;
    std::cout << "kleinaberfein[3] > " << kleinaberfein.at(3) << " " << &kleinaberfein.at(3) << std::endl;
    std::cout << "kleinaberfein[4] > " << kleinaberfein.at(4) << " " << &kleinaberfein.at(4) << std::endl;
    std::cout << "kleinaberfein[5] > " << kleinaberfein.at(5) << " " << &kleinaberfein.at(5) << std::endl;
    std::cout << "kleinaberfein[6] > " << kleinaberfein.at(6) << " " << &kleinaberfein.at(6) << std::endl;

    // * Groesse des Vecters wird bestimmt
    std::cout << "\nDie aktuelle Groessoe des Vectors ist:" << std::endl;
    std::cout << kleinaberfein.size() << std::endl;

    // * Fuegt den Wert 9 auf die 4. Position.
    kleinaberfein.insert(kleinaberfein.begin()+0,9);

    std::cout <<"Vector mit neuen eingegeben Werten." << std::endl;
    for(int i=0; i<kleinaberfein.size(); i++)
    {
        std::cout << kleinaberfein.at(i) << " " << &kleinaberfein.at(i) << std::endl;
    }
    std::cout << std::endl;

    kleinaberfein.erase(kleinaberfein.begin()+ 2);
    #endif

    #if 0
    for(int i=0; i<kleinaberfein.size(); i++)	// * for(int i=0; i<kleinaberfein.capacity(); i++)
    {
        std::cout << kleinaberfein.at(i) << std::endl;
    }
    std::cout << std::endl;
    #endif // 0
    #if 0
    // * Ausgabe mittels Iterators:
    std::cout << "Ausgabe mittels Iterators:" << std::endl;
    for(std::vector<int>::iterator it=kleinaberfein.begin(); it!=kleinaberfein.end(); ++it)
    {
        if(*it==5)
        std::cout << *it << std::endl;
    }
    #endif



    #if 1
    // * Ein zwei Dimensionaler Vector
    std::vector< std::vector<int> > Vector2(10, std::vector<int> (10)); // * 		Vector[10][10]
    std::vector< std::vector<int> >::iterator row;
    std::vector<int>::iterator col;



#define ITERATOR

    #ifndef ITERATOR
    // * Vector wird gefuellt
    for(int y=0;y<10;y++)
    {
        for(int x=0;x<10;x++)
        {
            Vector2.at(y).at(x)=(x+y); // *		Vector2[y][x]
        }
    }
    #else
    int a=0, i=0;
    for(row=Vector2.begin(), a=0; row!=Vector2.end(); row++, a++)
    {
        for(col=row->begin(), i=0; col!=row->end(); col++, i++)
        {
            *col=i+a;
        }
    }
    #endif // ITERATOR

    #ifdef ITERATOR
    // * Vector wird ausgegeben
    for(row=Vector2.begin(); row!=Vector2.end(); row++)
    {
        for(col=row->begin(); col!=row->end(); col++)
        {
            std::cout<< std::setw(3) << *col;
        }std::cout<<std::endl;
    }
    #else
    for(int i = 0; i < 10; i++)
    {
        for ( int j = 0; j < 10; j++ )
        {std::cout << std::setw(3) << Vector2.at(i).at(j) <<' ';}
        std::cout<<std::endl;
    }
    #endif // ITERATOR
    #endif
}
