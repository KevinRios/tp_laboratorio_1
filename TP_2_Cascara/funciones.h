#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{

    char nombre[50];
    int edad;
    int estado;
    int dni;

} Persona;




/**
 * Permite ingresar personas
 * @param Ingresa personas
 * @return NULL
 */
int ingresaPersonas(Persona listaDePersonas[]);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(Persona listaDePersonas[],int cantidadDeElementos,int valor);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(Persona listaDePersonas[], int dni);

void menudeOperaciones();
void limpiarLista();

void initEstructura(Persona listaPersonas[],int cantidad,int valor);
#endif // FUNCIONES_H_INCLUDED
