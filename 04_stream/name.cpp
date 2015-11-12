#include <stdlib.h>
#include <stdio.h>

int main(){

    char mi_nombre[20];
    char commando[10]; 

    system("toilet --gay -f pagga 'Nombre' ");

    printf("Nombre: ");
    scanf(" %s", mi_nombre);

    sprintf(commando, "toilet --gay -f pagga %s", mi_nombre);

    system(commando);

    return EXIT_SUCCESS;

}
