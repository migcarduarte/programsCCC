#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **agrv){

    int resultado = 0;
    int entrada;
    FILE *sd;

    sd = fopen("suma.in", "r");
    while(!feof(sd)){
    fscanf(sd, "%i", &entrada);
    resultado += entrada;
    }
    fclose(sd);

    printf("%i\n", resulatado);

    return EXIT_SUCCESS;

}
