#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>


void menudeOperaciones()
{

    printf("3- Calcular la suma (A+B)\n");
    printf("4- Calcular la resta (A-B)\n");
    printf("5- Calcular la division (A/B)\n");
    printf("6- Calcular la multiplicacion (A*B)\n");
    printf("7- Calcular el factorial (A!)\n");
    printf("8- Calcular todas las operaciones\n");
    printf("9- Salir\n");

    printf("Seleccionar una de las opciones\n");
}



void error()
{
    printf("Faltan Ingresar Numeros!\n");
}

void limpiarLista()
{
    system("pause");
    system("cls");
}

int agregarOperando1 ()
{
    int numero1;

    printf("1- Ingresar 1er operando (A=x)\n");
    scanf("%i", &numero1);
    return( printf("agregaste %i \n", numero1));
}

int suma(int numero1, int numero2)
{


    return(numero1+numero2);
}

int resta(int numero1, int numero2)
{
    return(numero1-numero2);
}

float division(int numero1, int numero2)
{
    return((float)numero1/numero2);
}


int multiplicacion(int numero1, int numero2)
{

    return(numero1*numero2);
}

unsigned long long int factorialX ( int numero1)
{
    int factorial=1;
    int i;
    for (i = numero1; i > 1; i--)
    {
        factorial = factorial * i;
    }

    return(factorial);
}

unsigned long long int factorialY ( int numero2)
{
    int factorial=1;
    int i;
    for (i = numero2; i > 1; i--)
    {
        factorial = factorial * i;
    }

    return(factorial);
}



