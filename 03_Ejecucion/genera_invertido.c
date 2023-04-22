#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int numero;
    srand(time(0));
    numero = 1000000;
    printf("%d\n",numero);

    for (int i = numero; i > 0; i--)
        printf("%d\n",i);

    return 0;
}