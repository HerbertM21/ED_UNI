// Dise˜na un programa que lea cinco n´umeros enteros por teclado y determine cu´al de los
// cuatro ´ultimos n´umeros es m´as cercano al primero.
// (Por ejemplo, si el usuario introduce los n´umeros 2, 6, 4, 1 y 10, el programa responder´a
// que el n´umero m´as cercano al 2 es el 1.)

#include <stdio.h>
#define SIZE 5

int main(){

    int num;
    int array[SIZE];
    int cercano;
    int distancia_minima = SIZE;

    for(int i = 0; i < SIZE; i++){
        printf("Ingresa la %d entrada: ", i);
        scanf("%d", &num);
        array[i] = num;
    }

    for(int i = 1; i < SIZE; i++){ // Iterar por los últimos cuatro elementos del arreglo
        int distancia = array[i] - array[0];
        if(distancia < 0) distancia = -distancia;
        if(distancia < distancia_minima){
            cercano = array[i]; // Actualizar número más cercano
            distancia_minima = distancia; // Actualizar distancia mínima
        }
    }

    printf("El numero mas cercano al primer elemento (%d) es %d\n", array[0], cercano);

    return 0;
}