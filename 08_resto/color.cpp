#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int rojo, amarillo, azul;

    printf("Elige un color\n");
    printf("Quieres Rojo?\n");
    scanf(" %i", &rojo);

    printf("Quieres Amarillo?\n");
    scanf(" %i", &amarillo);

    printf("Quieres Azul?\n");
    scanf(" %i", &azul);
    

    if (rojo)
	if (amarillo)
	    if (azul)
		printf("Blanco");
	    else
		printf("Naranja");
	else
	    if (azul)
		printf("Morado");
	    else
		printf("Rojo");
    else
	if (amarillo)
	    if (azul)
		printf("Verde");
	    else
		printf("Amarillo");
	else
	    if (azul)
		printf("Azul");
	    else
		printf("Negro");
    printf("\n");

    return EXIT_SUCCESS;
}
