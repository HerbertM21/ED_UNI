#include <stdio.h>

// Dado un arreglo de números enteros, mostrar la cantidad de veces que se repite cada valor en un arreglo.

int main(){

    int arreglo[] = {2, 3, 4, 4};
    size_t tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    for(int i = 0; i < tamano; i++){
        int contador = 0;
        for(int j = 0; j < tamano; j++){
            if(arreglo[i] == arreglo[j]){
                contador++;
            }
        }
        printf("Numero %d tiene una cantidad de repetidos de: %d\n ", arreglo[i], contador);
    }

    return 0;
}