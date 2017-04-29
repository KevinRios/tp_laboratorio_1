#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define VECTOR 4


int indice;
int indiceJ;
int auxInt;
int auxDNI;
int mayor;
int contadorMenor18=0;
int contador19a35=0;
int contadorMayor35=0;
int flagEncontro;
int flagGrafico=0;
char seguir='s', respuesta;


Persona listaPersonas[VECTOR];
Persona auxPersona;
//auxiliares
char auxChar[30];

int main()
{
    char seguir='s';
    int opcion=0;

    initEstructura(listaPersonas,VECTOR, -1);



    while(seguir=='s')
    {
        menuDeOpciones();
        scanf("%d",&opcion);


        switch(opcion)
        {

        case 1:


            for(indice=0; indice<VECTOR; indice++)
            {
                printf("Ingresar Nombre Persona: ");
                fflush(stdin);
                gets(listaPersonas[indice].nombre);

                printf("Ingresar Edad: ");
                scanf("%i", &listaPersonas[indice].edad);
                while(listaPersonas[indice].edad<=0 || listaPersonas[indice].edad>100)
                {
                    printf("Edad incorrecta, ingresar un valor entre 1 y 100: ");
                    scanf("%i", &listaPersonas[indice].edad);
                }






                printf("Ingresar DNI: ");
                scanf("%i", &listaPersonas[indice].dni);

            }

            // estructura ordenada


            for(indice=0; indice<VECTOR; indice++)
            {
                if(listaPersonas[indice].estado != -1)
                {
                    printf("%s\t%d\t%d\n", listaPersonas[indice].nombre, listaPersonas[indice].edad, listaPersonas[indice].dni);
                }
            }

            limpiarLista();
            break;


        case 2:
            flagEncontro = 0;


            printf("Nombre\DNI\tEdad\n");
            for(indice=0; indice<VECTOR; indice++)
            {
                if(listaPersonas[indice].dni!=-1)
                {
                    printf("%s\t%i\t%i\n", listaPersonas[indice].nombre, listaPersonas[indice].dni, listaPersonas[indice].edad);
                }
            }

            printf("Ingrese un dni a buscar: ");
            scanf("%i", &auxDNI);

            for(indice=0; indice<VECTOR; indice++)
            {
                if(auxDNI==listaPersonas[indice].dni)
                {
                    printf("%s\t%i\t%i\n", listaPersonas[indice].nombre, listaPersonas[indice].edad, listaPersonas[indice].dni);

                    printf("Esta seguro de eliminar a este usuario?: ");
                    respuesta = getche();
                    if(respuesta=='s')
                    {
                        listaPersonas[indice].estado=-1;
                    }
                    else
                    {
                        printf("Accion cancelada por el usuario!!!");
                    }
                    flagEncontro = 1;
                    break;
                }

            }


            limpiarLista();
            break;


        case 3:
            if(listaPersonas[indice].estado !=-1)
            {
                for(indice=0; indice<VECTOR-1; indice++)
                {

                    for(indiceJ=indice+1; indiceJ<VECTOR; indiceJ++)
                    {

                        if(strcmp(listaPersonas[indice].nombre, listaPersonas[indiceJ].nombre)>0)
                        {
                            auxPersona = listaPersonas[indiceJ];
                            listaPersonas[indiceJ] = listaPersonas[indice];
                            listaPersonas[indice] = auxPersona;
                        }
                    }
                }


                for(indice=0; indice<VECTOR; indice++)
                {
                    printf("%s\t%d\t%d\n", listaPersonas[indice].nombre, listaPersonas[indice].edad, listaPersonas[indice].dni);
                }

            }


            break;


        case 4:

            for(indice=0; indice<VECTOR; indice++)
            {


                if(listaPersonas[indice].edad<=18 || listaPersonas[indice].edad>=35)
                {
                    contador19a35++;
                }
                else
                {
                    if(listaPersonas[indice].edad<=18)
                    {
                        contadorMenor18++;
                    }
                    else
                    {
                        contadorMayor35++;
                    }

                }


                if(contadorMenor18 >= contador19a35 && contadorMenor18>= contadorMayor35)
                {
                    mayor = contadorMenor18;
                }
                else
                {
                    if(contador19a35 >= contadorMenor18 && contador19a35 >= contadorMayor35)
                    {
                        mayor = contador19a35;
                    }
                    else
                    {
                        mayor = contadorMayor35;
                    }
                }

            }
            printf("\n\n\n\n");
            for(indice=mayor; indice>0; indice--)
            {
                printf("%02d|",indice);

                if(indice<= contadorMenor18)
                {
                    printf("*");
                }
                if(indice<= contador19a35)
                {
                    flagGrafico=1;
                    printf("\t*");
                }
                if(indice<= contadorMayor35)
                {
                    if(flagGrafico==0)
                    {
                        printf("\t\t*");
                    }
                    if(flagGrafico==1)
                    {
                        printf("\t*");
                    }
                }

                printf("\n");
            }
            printf("--+-----------------");
            printf("\n  |<18\t19-35\t>35");
            printf("\n   %d\t%d\t%d", contadorMenor18, contador19a35,contadorMayor35);

            limpiarLista();


            break;
        case 5:
            seguir = 'n';

            limpiarLista();
            break;
        }
    }

    return 0;
}
