// CREAR UN PALINDROMO

#include <stdio.h>

int main(){

    int numeros[] = {1, 2, 4, 2, 1}; // Array palindromo

    size_t inicio = 0;
    size_t final = (sizeof(numeros) / sizeof(numeros[0])) - 1;

    while(inicio <= final){

        if(numeros[inicio] != numeros[final]){
            printf("No es un palindromo.");
        }

        inicio++;
        final--;
    }

    return 0;
}