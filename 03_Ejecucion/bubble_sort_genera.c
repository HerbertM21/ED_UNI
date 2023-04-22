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
    int i;

    srand(time(0));

    // generar 1,000,000 de numeros aleatorios
    for (i = 0; i < TAM; i++) {
        numeros[i] = rand() % 100000;
    }

    // ordenar los numeros utilizando bubble sort
    bubble_sort(numeros, TAM);
    printf("Numeros ordenados\n");

    // imprimir los numeros ordenados
    for (i = 0; i < TAM; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
