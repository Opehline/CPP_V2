// 1.) Fortgeschritten: Ein Programm schreiben das zwei Reihenfolgen von  Zahlen ausgibt.
// Eine Reihenfolge zählt von 0 bis 5, die andere: 2,4,6,8 bis 10.
// Das Programm soll mit zwei for-Schleifen geschrieben werden.
// Eine soll in der anderen liegen.
//
// 2.)
//Schreiben Sie eine „Kaskade“ mit 4 Fällen und einem Default.


#include <iostream>

int main(){
    // 1.)
    // 2 Zahlenfolgen 0:1:5 & 2:2:10 ausgeben
    // Eine Schleife in der anderen
    for (int i=0; i<=5; i++){
        //
        std::cout << "i = " << i << std::endl;
        if(i == 5){
            for (int k = 2; k<=10; k+=2){
                std::cout << "k = " << k << std::endl;
            }
        }
    }

    // 2.)
    // 4er Kaskade (=kein BREAK! nutzen) + default
    fall = 4;
    switch(fall){
    case 1:
        //Anweisung wenn 1
        std::cout << "Fall 1 wurde gewählt." << std:: endl;
    case 2:
        // Ab hier, wenn 2 gewählt wurde
    case 3:
        // Ab hier, wenn 3 gewählt wurde
    case 4:
        // Ab hier, wenn 4 gewählt
    default:
        // Sonstiges: Egal was ausgeführt wurde
    }


}
