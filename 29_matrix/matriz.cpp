#include <stdio.h>
#include <stdlib.h>

/*Declaramos las variables C y I, C como columna, y I como Fila*/
#define C 5
#define I 3

int main(int argc, char **argv){

    /*Introducimos los numeros*/
    double Cij[I][C] = {
	{1, 1, 1, 1, 8},
	{1, 2, 4, 8, 8},
	{1, 4, 8, 8, 8},
    
    };

    double mad[I][C];

    for(int fila=1; fila<I; fila++)
	for (int col=1; col<C; col++)

	    mad[fila][col] = ( Cij[fila][col-1] + Cij[fila-1][col] + Cij[fila][col+1] + Cij[fila+1][col]);

    /*Creamos otra vez el bucle for*/
    for (int fila=0; fila<I; fila++){
    	for (int col=0; col<C; col++)

    	    printf(" %2.1lf", mad[fila][col]);
    	printf("\n");
        }

        return EXIT_SUCCESS;

}
