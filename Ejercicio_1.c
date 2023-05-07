#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    /*Escribir un programa que convierta un número dado en segundos en su equivalente
      en Horas, Minutos y Segundos. Ejemplo: Segundos=4000, el programa muestra 1H: 6M: 40S. */

    int numero, horas, minutos, segundos;

    printf("\nPor favor ingrese un numero para pasar a horas: ");
    fflush(stdin);
    scanf("%d", &numero);


    horas = numero / 3600;
    minutos = ((numero - horas * 3600)/60);
    segundos = numero % 60;




}
