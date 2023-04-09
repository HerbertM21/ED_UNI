#include <stdio.h>

int main(){

    // Se crea el arreglo
    int arreglo[] = {1, 4, 5, 6, 7, 8, 4};

    // Se calcula el tamaño del arreglo
    size_t tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    // Se crea un arreglo que almacenará los numeros repetidos
    int repetidos[tamano];
    int num_repetidos = 0;

    // El primer bucle compara cada elemento con cada uno de los elementos del array array[i] == array[j...]
    for(int i = 0; i < tamano; i++){
        int contador = 0;

        // Recorre todo el array para compararlo con un elemento y ver si hay repetidos
        for(int j = 0; j < tamano; j++){
            if(arreglo[i] == arreglo[j]){
                contador++;
            }
        }

        // Si el contador == 1, entonces es un numero unico, si hay más de uno, significa que es repetido.
        if(contador > 1){ 
            // Se hace un procedimiento para imprimir solo el numero que está repetido y no todos sus repetidos como tal:
            // por ejemplo: 4 4 4 4
            // solo imprime: El elemento 4 está repetido.

            // Se crea un contador para saber si el numero ya está en el arreglo de repetidos
            int contador_repetidos = 0;

            // Se recorre el arreglo de repetidos para ver si el numero ya está en el arreglo
            for(int k = 0; k < num_repetidos; k++){
                if(arreglo[i] == repetidos[k]){
                    contador_repetidos++;
                }
            }

            // Si el contador_repetidos == 0, entonces el numero no está en el arreglo de repetidos
            if(contador_repetidos == 0){
                repetidos[num_repetidos] = arreglo[i];
                num_repetidos++;
                printf("El elemento %d está repetido.", arreglo[i]);
            }
        }
    }
    return 0;
}
