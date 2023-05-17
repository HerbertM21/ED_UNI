#include <stdio.h>

int encontrarMaximo(int arreglo[], size_t tamano) {
    int maximo = arreglo[0]; // Suponemos que el primer elemento es el máximo inicialmente
    
    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i]; // Actualizamos el máximo si encontramos un valor mayor
        }
    }
    
    return maximo;
}

int encontrarMinimo(int arreglo[], size_t tamano){
    int minimo = arreglo[0];

    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i]; // Actualizamos el máximo si encontramos un valor mayor
        }
    }
    
    return minimo;    
}

int main() {
    int arreglo[] = {5, 8, 3, 1, 10, 7};
    size_t tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    
    int maximo = encontrarMaximo(arreglo, tamano);
    int minimo = encontrarMinimo(arreglo, tamano);
    
    printf("El máximo del arreglo es: %d\n", maximo);
    
    return 0;
}
