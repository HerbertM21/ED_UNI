#include <stdio.h>
#include <stdlib.h>

#define HASH_TABLE_SIZE 1000000

int count_duplicates(int arr[], int size) {
    int count = 0;
    int i;
    int *hash_table = (int*) calloc(HASH_TABLE_SIZE, sizeof(int)); // Inicializamos la tabla hash a ceros

    // Iteramos a través del array y agregamos cada elemento a la tabla hash
    for (i = 0; i < size; i++) {
        // La hash_table tendrá espacios para almacenar datos de cada espacio en memoria
        // cada espacio en memoria representa los numeros enteros hasta 1000000
        // Ejemplo: [1, 2, 6, 8]
        // Hash_table: [0, 1, 2, 3, 4, 5, 6, 7, 8] < - Numeros enteros
        //              ^  ^  ^  ^  ^  ^  ^  ^  ^
        //              0  1  1  0  0  0  1  0  1 < - Cantidad de numeros contados
        hash_table[arr[i]]++;
    }

    // Iteramos a través de la tabla hash y contamos el número de duplicados
    for (i = 0; i < HASH_TABLE_SIZE; i++) {
        if (hash_table[i] > 1) {
            count += hash_table[i] - 1;
        }
    }

    free(hash_table); // Liberamos la memoria asignada a la tabla hash
    return count;
}

int main() {
    int arr[] = {3, 5, 6, 7, 7, 2, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num_duplicates = count_duplicates(arr, size);
    printf("Hay %d numeros duplicados en el array.\n", num_duplicates);
    return 0;
}
