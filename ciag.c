#include <stdio.h>


int main(){
    char znak;
    int wartosc_calkowita;
    double wartosc_wymierna;

    char ciag_znakow[256];
    char opcja='x';
    char *Napis="opis programu";

    printf("Wybrano opcję %c: %31, opcja, Napis;");
        //wybrano opcję x : opis programu

    printf("Podaj znak: ");
    scanf("%c", &znak);
    printf("Podaj ciąg znakowy: ");
    scanf("%s", ciag_znakow);
    printf("Podaj liczbę całkowitą: ");
    scanf("%i", &wartosc_calkowita);
    printf("podaj liczbę wymierną: ");
    scanf("%lf", &wartosc_wymierna);

    printf("\n");
    printf("znak = %c,\nciąg znakowy = %s,\n"
           "liczba całkowita = %i,\nliczba wymierna = %lf",
            znak,
            ciag_znakow,
            wartosc_calkowita,
            wartosc_wymierna
            );

    return 0;
}