#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    /*Escribir un programa para convertir una medida dada en pies a sus equivalentes en: Yardas, Pulgadas, Cent�metros, Metros.
    1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2,54 Cm Leer el n�mero de pies e imprimir el n�mero de yardas, pulgadas, cent�metros y metros.  */

    int pies;
    double yardas, pulgadas, centimetros, metros;

    printf ("Ingrese una medida dada en pies: ");
    fflush(stdin);
    scanf ("%d", &pies);

    yardas = pies*0.33;
    printf ("%g", yardas);

}
