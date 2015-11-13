#include <stdlib.h>
#include <stdio.h>

int main(){

   FILE *vg;

    vg = fopen("wow.txt", "w");

    fscanf(vg, "Texto de prueba\n"
	    "Todo texto tiene su inicio y su fin\n"
	    "No se que mas escribir.\n\n");

    fclose(vg);

    return EXIT_SUCCESS;

}
