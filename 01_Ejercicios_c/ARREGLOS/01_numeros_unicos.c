#include <stdio.h>

int main(){

    int arreglo[] = {1, 4, 5, 6, 7, 8, 4};

    size_t tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    for(int i = 0; i < tamano; i++){
        int contador = 0;

        for(int j = 0; j < tamano; j++){
            if(arreglo[i] == arreglo[j]){
                contador++;
            }
        }

        if(contador == 1){
            printf("El elemento %d solo aparece una vez.\n", arreglo[i]);
        }

    }

    return 0;
}