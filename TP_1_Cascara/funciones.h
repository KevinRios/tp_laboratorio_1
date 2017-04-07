#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

// esta funcion despliega las operaciones del menu de la calculadora
void menudeOperaciones();

// funcion que muestra un msj de error en caso de no ingresar los dos operandos
void error();

// funcion que limpia la lista de opciones
void limpiarLista();


int agregarOperando1 ();

//funcion que hace la suma entre dos operandos
int suma(int numero1, int numero2);

//funcion que hace la resta entre dos operandos
int resta(int numero1, int numero2);

//funcion que hace la multiplicacion entre dos operandos
float division(int numero1, int numero2);

//funcion que hace la multiplicacion entre dos operandos
int multiplicacion(int numero1, int numero2);

// funcion que calcula por separado el factorial de X y el de Y
unsigned long long int factorialX(int numero1);
unsigned long long int factorialY(int numero2);



#endif // FUNCIONES_H_INCLUDED
