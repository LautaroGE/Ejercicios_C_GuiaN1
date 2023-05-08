#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    //Modificar el programa anterior de modo que lea una palabra de 5 letras y se imprima en el centro del rectángulo

    char palabra[5];

    printf ("\nIngrese una palabra de cinco letras: ");
    fflush(stdin);
    scanf("%s", &palabra);


    /* *********************
       *                   *
       *                   *
       *                   *
       ********************* */


       printf ("\n  ********************\n  *                  *\n  *      %s       *\n  *                  *\n  ********************", palabra);




}

