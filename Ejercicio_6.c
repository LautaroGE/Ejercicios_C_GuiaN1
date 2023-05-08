#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    //Escribir un programa que lea dos enteros de tres dígitos e imprima su producto con el siguiente formato:
    /* 325
       X426
       1950
       650
      1300_
      138450
    */

    int num1, num2;

    printf("\nIngrese dos numeros de tres digitos: ");
    fflush(stdin);
    scanf("%d %d", &num1, &num2);

    int res1, res2, res3, total;

    //asignamos el ultimo digito de la variable num2 a res1
    //para esto usamos el %, que tomará el ultimo digito y lo almacenara en la variable. Multiplicamos el ultimo digito por num1
    res1 = num2 % 10 * num1;

    //asignamos el anteultimo digito de la variable num2 a res2
    //dividimos num1 x 10, para que mueva la coma. Como es un numero entero, el programa no tendra en cuenta el numero despues de la coma
    //por ultimo, multiplicamos el digito x num1
    res2 = (num2 / 10) % 10 * num1;

    //asignamos el primer digito de la variable num2 a res3
    //divido por 100 para mover la coma otra lugar. Como es un numero entero, el programa no tendra en cuenta el numero despues de la coma
    //por ultimo, multiplicamos el digito x num1
    res3 = (num2 / 100) * num1;

    //realizamos la operacion para asignar el valor total
    total = num1 * num2;

    printf ("    \n       %d", num1);
    printf ("\n  X    %d\n", num2);
    printf (" ----------\n");
    printf ("      %d\n", res1);
    printf ("     %d\n", res2);
    printf ("    %d\n", res3);
    printf (" ----------\n");
    printf ("    %d\n", total);


    system ("pause");
}
