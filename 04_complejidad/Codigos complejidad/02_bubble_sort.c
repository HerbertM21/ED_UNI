#include <stdio.h>

// Función para ordenar el arreglo usando Bubble Sort

void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        // Últimos i elementos ya están en su lugar
        for (j = 0; j < n - i - 1; j++) {
            // Pasar el elemento actual al siguiente si está en el orden incorrecto
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
            }
        }
    }
}

// Función para imprimir el arreglo
void printArray(int arr[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Función principal
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo original:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Arreglo ordenado:\n");
    printArray(arr, n);

    return 0;
}