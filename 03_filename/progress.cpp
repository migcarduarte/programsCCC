#include <stdlib.h>
#include <stdio.h>

int main(){

    for(int vez=0; vez<80; vez++){
    printf("\r");

    for (int i=0; i<10; i++)
    printf("=");
    printf(">");
    sleep(1);

    }

    return EXIT_SUCCESS;

}
