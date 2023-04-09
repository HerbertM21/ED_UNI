// Dado un arreglo ordenado, y un elemento, confeccione un programa que permita
// determinar si el elemento se encuentra en el arreglo y en que posición.

#include <stdio.h>

int main(){

    int A[] = {3, 4, 5, 6, 7, 8};
    int numero = 6;
    size_t tamano = sizeof(A) / sizeof(int);
    int encontrado = 0;
    int posicion = 0;

    for(int i = 0; i < tamano; i++){
        if(A[i] == numero){
            encontrado = 1;
            posicion = i;
        }
    }

    if(encontrado){
        printf("Se ha encontrado %d en la posición %d", numero, posicion);
    } else {
        printf("No se ha encontrado %d", numero);
    }

    return 0;
}