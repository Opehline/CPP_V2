// Hausaufgabe Foliensatz 4

// 2D-Array initialisieren
// Array Ausgeben
// Ausgabe duch eine Funktion, an die Array von main-Funktion als Parameter übergeben wird

# include <iostream>


void feldausgabe(int array[][2]);

int main(){

int Feld2D[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // Klammern bedeuden Zeilen
// std::cout << Feld2D << std::endl; // -> so nur seltsamer Zeichencode
feldausgabe(Feld2D);

return 0;

}

void feldausgabe(int feld[3][2]){
    // feld ausgeben
    for(int i = 0; i<3; i++){
        for(int k = 0; k<2; k++){
            std::cout<< feld[i][k] << " " ;// << std::endl;
        }
        std::cout <<"\n" ;
    }

}


