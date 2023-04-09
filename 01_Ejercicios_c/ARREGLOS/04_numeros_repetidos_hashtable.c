#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void countDuplicates(int arr[], int size) {
    int hash_table[MAX_SIZE] = {0};

    // Contar la frecuencia de aparición de cada valor en el array
    for (int i = 0; i < size; i++) {
        hash_table[arr[i]]++;
    }

    // Imprimir los valores repetidos sin repetirlos varias veces
    printf("Valores repetidos: ");
    for (int i = 0; i < size; i++) {
        if (hash_table[arr[i]] > 1) {
            printf("%d ", arr[i]);
            hash_table[arr[i]] = 0; // Marcar como ya impreso
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    countDuplicates(arr, size);

    return 0;
}
