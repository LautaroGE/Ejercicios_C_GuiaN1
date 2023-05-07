#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    /*Escribir un programa para convertir una medida dada en pies a sus equivalentes en: Yardas, Pulgadas, Centímetros, Metros.
    1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2,54 Cm Leer el número de pies e imprimir el número de yardas, pulgadas, centímetros y metros.  */

    int pies;
    double yardas, pulgadas, centimetros, metros;

    printf ("Ingrese una medida dada en pies: ");
    fflush(stdin);
    scanf ("%d", &pies);

    yardas = pies*0.33;
    printf ("%g", yardas);

}
