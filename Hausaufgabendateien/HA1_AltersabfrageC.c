// Tanja TTreffler
// Hausaufgabe von Montag
// Altersabfrage

// Schritt 1: Ein Alter abfragen
// Schritt 2: 2 Alterseingaben abfragen
// Schritt 3: Durchschnitt berechnen

#include <stdio.h>

int main(){
    int a1, a2;
    printf("Wie alt ist die erste Person? ");
    scanf("%d", &a1); // Tastatureingabe in der aufploppenden Konsole
    fflush(stdin);
    printf("Wie alt ist die zweite Person? ");
    scanf("%d", &a2);
    fflush(stdin);// löscht den Speicher cin, Entpuffert
    printf("Ihr seid schon %d und %d  Jahre alt? Wow!", a1, a2);
    int suma1a2 = a1 + a2;
    float durchschnitt = suma1a2 / 2.0;
    printf("Der Durchnitt ist dann %.1f.", durchschnitt);
    printf("Super.");


    return 0;

}
