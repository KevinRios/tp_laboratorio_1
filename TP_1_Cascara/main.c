#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int flagX=0;
int flagY=0;

int main()
{
    char seguir='s';
    int opcion=0;
    int x;
    int y;


    int resultado=0;



    do
    {
        if(flagX==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        if(flagX==1)
        {
            printf("1- Ingresar 1er operando (A=%i)\n", x);
        }

        if(flagY==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        if(flagY==1)
        {
            printf("2- Ingresar 2do operando (B=%i)\n", y);
        }

        menudeOperaciones();

        scanf("%d",&opcion);

        switch(opcion)
        {

            case 1:

                printf("1- Ingresar 1er operando (B=y)\n");
                scanf("%i", &x);
                flagX=1;
                limpiarLista();
                break;


            case 2:
                printf("2- Ingresar 2do operando (B=y)\n");
                scanf("%i", &y);
                flagY=1;
                limpiarLista();
                break;


            case 3: // suma
                if((flagX=1) && (flagY==1))
                {
                    printf(" %i + %i = %i\n",x, y, suma(x,y));
                    limpiarLista();
                }
                else
                {
                  error();
                  limpiarLista();
                }
                break;


            case 4: // resta
                if((flagX=1) && (flagY==1))
                {
                    printf(" %i - %i = %i\n",x, y, resta(x,y));
                    limpiarLista();
                }
                else
                {
                  error();
                  limpiarLista();
                }
                break;


            case 5: // division
                if((flagX=1) && (flagY==1))
                {
                    if(y==0)
                    {
                        printf("no se puede dividir por cero, ingresar otro valor para el segundo operando:" );
                        scanf("%i", &y);
                        flagY=1;
                        limpiarLista();
                    }
                    else
                    {
                        printf(" %i / %i = %.2f\n",x, y, division(x,y));
                        limpiarLista();
                    }

                }
                else
                {
                  error();
                  limpiarLista();
                }
                break;


            case 6: // mumltiplicacion
                if((flagX=1) && (flagY==1))
                {
                    printf(" %i * %i = %i\n",x, y, multiplicacion(x,y));
                    limpiarLista();
                }
                else
                {
                    error();
                    limpiarLista();
                }
                break;


            case 7: // factorial
                if((flagX=1) && (flagY==1))
                {
                    if(x<0)
                    {
                        printf("no se puede calcular el factorial de un numero negativo, ingresar valor mayor a cero para el primer operando:" );
                        scanf("%i", &x);
                        flagX=1;
                        limpiarLista();
                    }
                    if(y<0)
                    {
                        printf("no se puede calcular el factorial de un numero negativo, ingresar valor mayor a cero para el segundo operando:" );
                        scanf("%i", &y);
                        flagX=1;
                        limpiarLista();
                    }
                    printf(" El factorial de %i es =  %llu\n",x, factorialX(x));
                    printf(" El factorial de %i es =  %llu\n",y, factorialY(y));
                    limpiarLista();
                }
                else
                {
                    error();
                    limpiarLista();
                }
                break;


            case 8: // todas las operaciones
                if((flagX=1) && (flagY==1))
                {
                    //SUMA
                    printf(" %i + %i = %i\n",x, y, suma(x,y));

                    //RESTA
                    printf(" %i - %i = %i\n",x, y, resta(x,y));

                    //MULTIPLICACION
                    printf(" %i * %i = %i\n",x, y, multiplicacion(x,y));

                    //FACTORIAL
                    if(x<0)
                    {
                        printf("no se puede calcular el factorial de un numero negativo, ingresar valor mayor a cero para el primer operando:" );
                        scanf("%i", &x);
                        flagX=1;
                        limpiarLista();
                    }
                    if(y<0)
                    {
                        printf("no se puede calcular el factorial de un numero negativo, ingresar valor mayor a cero para el segundo operando:" );
                        scanf("%i", &y);
                        flagX=1;
                        limpiarLista();
                    }
                    printf(" El factorial de %i es =  %llu\n",x, factorialX(x));
                    printf(" El factorial de %i es =  %llu\n",y, factorialY(y));

                    //DIVISION
                    if(y==0)
                    {
                        printf("no se puede dividir por cero, ingresar otro valor para el segundo operando:" );
                        scanf("%i", &y);
                        printf(" %i / %i = %.2f\n",x, y, division(x,y));
                        limpiarLista();
                    }
                    else
                    {
                        printf(" %i / %i = %.2f\n",x, y, division(x,y));
                        limpiarLista();
                    }

                    limpiarLista();

                }
                else
                {
                  error();
                  limpiarLista();
                }
                break;


            case 9:
                seguir = 'n';
                break;


            default:
                printf("\n Introducir una opcion valida... \n");
                scanf("%d",&opcion);
                limpiarLista();
        }

    }
    while(seguir=='s');

    return 0;

}
