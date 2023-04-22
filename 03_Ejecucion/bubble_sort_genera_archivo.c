#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 1000000

void bubble_sort(int arr[], int tam) {
    int i, j, temp;
    for (i = 0; i < tam-1; i++) {
        for (j = 0; j < tam-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int numeros[TAM];
    int i, j;

    // abrir el archivo para lectura y escritura
    FILE *archivo = fopen("datos.txt", "r+");

    // leer los numeros aleatorios del archivo y almacenarlos en el arreglo
    for (i = 0; i < TAM; i++) {
        fscanf(archivo, "%d", &numeros[i]);
    }

    // ordenar los numeros utilizando bubble sort
    bubble_sort(numeros, TAM);

    // imprimir los numeros ordenados en la consola
    for (i = 0; i < TAM; i++) {
        printf("%d\n", numeros[i]);
    }

    // cerrar el archivo
    fclose(archivo);

    return 0;
}
