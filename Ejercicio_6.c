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

    //asignamos el ultimo digito de la variable num1 a res1
    //para esto usamos el %, que tomará el ultimo digito y lo almacenara en la variable. Multiplicamos el ultimo digito por num1
    res1 = (num1 % 10) * num1;

    //asignamos el anteultimo digito de la variable
    //dividimos num1 x 10, para que mueva la coma. Como es un numero entero, el programa no tendra en cuenta el numero despues de la coma
    //por ultimo, multiplicamos el digito x num1
    res2 = (num1 / 10) % 10 * num1;

    //nos aseguramos de que funcione correctamente
    printf("%d", res2);



    system ("pause");
}
