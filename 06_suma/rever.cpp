#include <stdlib.h>
#include <stdio.h>

int main(int argv, char **argc){

    int entrada;

    //1. Entender el enunciado.
    printf("Introduce un numero entre -1 y 999\n");
    //2. Leer del teclado el numero entrada
    scanf(" %i", &entrada);
    //3. Imprimo el ultimo digito de entrada
    printf("%i", entrada % 10);
    //4. Desplaza los digitos
    entrada /= 10;
    //5. Fin de los digitos
    printf("%i\n", entrada % 10);

    entrada /= 10;

    printf("%i", entrada % 10);

    scanf(" %i", &entrada);

    entrada /= 10;


    return EXIT_SUCCESS;

}
