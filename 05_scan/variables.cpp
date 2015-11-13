#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **agrv){

    int resultado = 0;
    int entrada;
    FILE *vg;

    vg = fopen("texto.txt", "r");
    fscanf(vg, " %i", &entrada);
    resultado += entrada;
    fscanf(vg, " %i", &entrada);
    resultado += entrada;
    fclose(vg);

    printf("%i\n", resultado);

    return EXIT_SUCCESS;

}
