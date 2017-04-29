
#include <string.h>
#include "funciones.h"
#include <stdio.h>

void menuDeOpciones()
{

    printf("1- Agregar persona\n");
    printf("2- Borrar persona\n");
    printf("3- Imprimir lista ordenada por  nombre\n");
    printf("4- Imprimir grafico de edades\n\n");
    printf("5- Salir\n\n");
    printf("Ingresar una opcion... \n");
}


void initEstructura(Persona listaPersonas[],int cantidad,int valor)
{
    int indice;
    for(indice=0; indice<cantidad; indice++)
    {
        listaPersonas[indice].estado = valor; //Inicializa todos los valores de estado a -1 por lo que no hay nada cargado
    }
}


void limpiarLista()
{
    system("pause");
    system("cls");
}

