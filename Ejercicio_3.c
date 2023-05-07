#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna.
    /* Escribir un programa en lenguaje C que lea una temperatura en grados Celsius como valor decimal y
       obtenga la temperatura Fahrenheit equivalente */

    float GC;

    printf ("\nIngrese una temperatura en grados celcius: ");
    fflush(stdin);
    scanf("%f", &GC);

    printf("\n\nLa temperatura ingresada en grados celcius es de: %g lo que es igual a %g grados fahrenheit\n\n", GC, (1.8)*GC+32);



}
