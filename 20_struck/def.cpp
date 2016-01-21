#include <stdio.h>
#include <stdlib.h>

struct TCurriculo {

    int programacion;
    int bases;
    int fol;
};
void muestra(const char *nombre, struct TCurriculo notas){

    printf("Las notas de %s\n", nombre);
    printf("\n");
    printf("Programacion: %i\n");
    printf("Bases: %i\n");
    printf("FOL: %i\n");
}

int main(int argc, const char **argv){

    struct TCurriculo angel = { 4, 7, 9};
    struct TCrurriculo victor = angel;

    muestra("angel", angel);
    muestra("victor", victor);

    return EXIT_SUCCESS;
}
