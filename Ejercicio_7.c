#include <stdio.h>
#include <stdlib.h>

int main () {

    //Consigna
    //Construir un programa que al recibir como dato un n�mero de 4 d�gitos, genere una impresi�n del numero uno a uno

    int numero;

    //ingresamos los datos
    printf("\nIngrese un numero de 4 digitos: ");
    fflush(stdin);
    scanf("%d", &numero);

    //generamos las variables donde se almacenaran los digitos del numero
    int num1, num2, num3, num4;

    //realizamos las operaciones para almacenar cada digito en una variable
    //usamos % para que nos devuelva el ultimo digito del numero que ingresamos
    num1 = numero % 10;

    //dividimos por 10 para que mueva la coma un lugar. Al ser un entero, no tomara en cuenta el numero despues de la coma
    //y almacenara el numero anterior a la misma utilizando nuevamente el %
    num2 = (numero / 10) % 10;

    //dividimos por 100 para que mueva otro lugar la coma y repetimos el proceso
    num3 = (numero / 100) % 10;

    //dividimos por 1000, repitiendo el proceso para almacenar el primer digito en la ultima variable
    num4 = (numero / 1000) % 10;


    //por ultimo, imprimimos el resultado en pantalla para completar el ejercicio.
    printf ("\n%d\n", num4);
    printf ("%d\n", num3);
    printf ("%d\n", num2);
    printf ("%d\n\n", num1);

    system ("pause");


}
