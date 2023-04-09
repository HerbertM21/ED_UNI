#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {4, 2, 7, 1, 8, 3, 9, 6, 5};
    int n = sizeof(arr) / sizeof(int);

    // Iterar sobre cada elemento del arreglo de entrada.
    for (int i = 0; i < n; i++) {
        // Si el elemento es impar, buscar el primer número par en el resto del arreglo.
        if (arr[i] % 2 != 0) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] % 2 == 0) {
                    // Intercambiar el número impar con el número par encontrado.
                    swap(&arr[i], &arr[j]);
                    break;
                }
            }
        }
    }

        printf("Arreglo de entrada:");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");


    //Arreglo de entrada: [0]4 2 7 1 8 3 9 6 5 
    //Arreglo de entrada: [1]4 2 7 1 8 3 9 6 5 
    //Arreglo de entrada: [2]4 2 8 1 7 3 9 6 5 
    //Arreglo de entrada: [3]4 2 8 6 7 3 9 1 5 
    //Arreglo de entrada: [4]4 2 8 6 7 3 9 1 5 
    //Arreglo de entrada: [5]4 2 8 6 7 3 9 1 5 
    //Arreglo de entrada: [6]4 2 8 6 7 3 9 1 5 
    //Arreglo de entrada: [7]4 2 8 6 7 3 9 1 5 
    //Arreglo de entrada: [8]4 2 8 6 7 3 9 1 5 


    // El codigo con while es mas eficiente porque no tiene iteraciones innecesarias
    return 0;
}

