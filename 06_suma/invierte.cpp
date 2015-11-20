#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char **argv){

    int origin,
	destino = 0;

    printf("Numero: ");
    scanf(" %i", &origin);

    do{
    destino *= 10;
    destino += origin % 10;
    origin /= 10;
    }while ( origin != 0);

    printf("%i\n", destino);

    return EXIT_SUCCESS;

}
