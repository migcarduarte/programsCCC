#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char **argv){

    int numero, pensado;

    printf("Numero\n");
    printf("Adivina\n");

    srand(time(NULL));
    pensado = rand() % 10 + 1;
    do{
    printf("Numero : ");
    scanf(" %i", &numero);
    }while (numero != pensado );

    printf("Acertastes\n");

	return EXIT_SUCCESS;
}
