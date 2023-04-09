#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {4, 2, 7, 1, 8, 3, 9, 6, 5};
    int n = sizeof(arr) / sizeof(int);
    int inicio = 0, final = n - 1;

    while (inicio < final) {
        // Buscar el primer número impar desde el inicio del arreglo.
        while (inicio < n && arr[inicio] % 2 == 0) {
            inicio++;
        }
        // Buscar el primer número par desde el final del arreglo.
        while (final >= 0 && arr[final] % 2 != 0) {
            final--;
        }
        // Si se encontraron un número par y un número impar, intercambiarlos.
        if (inicio < final) {
            swap(&arr[inicio], &arr[final]);
            inicio++;
            final--;
        }

        
    }

    // Imprimir el resultado.
    printf("Arreglo de entrada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
