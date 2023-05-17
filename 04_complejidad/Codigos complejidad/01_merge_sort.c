#include <stdio.h>
#include <stdlib.h>

// Función para combinar dos subarreglos ordenados en uno solo
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Crear arreglos temporales
    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));

    // Copiar los datos a los arreglos temporales L[] y R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Combinar los arreglos temporales en uno solo
    i = 0; // Índice inicial del primer subarreglo
    j = 0; // Índice inicial del segundo subarreglo
    k = left; // Índice inicial del subarreglo combinado

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[], si hay alguno
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[], si hay alguno
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

// Función principal para ordenar el arreglo usando Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Encontrar el punto medio del arreglo
        int middle = left + (right - left) / 2;

        // Ordenar recursivamente las dos mitades
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Combinar las dos mitades ordenadas
        merge(arr, left, middle, right);
    }
}

// Función auxiliar para imprimir el arreglo
void printArray(const int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Ejemplo de uso
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo original:\n");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("Arreglo ordenado:\n");
    printArray(arr, size);

    return 0;
}
