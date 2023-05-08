#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    //Escribir un programa que lea dos enteros en las variables X e Y, y a continuación obtenga los valores de: X / Y, y X % Y.
    //Ejecute el programa varias veces con diferentes pares de enteros como entrada.

    int x, y;

    printf ("\nIngrese los valores de x e y: ");
    fflush(stdin);
    scanf("%d %d", &x, &y);

    printf ("\nEl resultado de %d / %d es: %d, y el resultado de %d o/o %d es %d \n\n", x, y, x / y, x, y, x % y);


    system ("pause");
}
