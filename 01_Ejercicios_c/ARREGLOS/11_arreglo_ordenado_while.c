#include <stdio.h>

void ordenamiento(int A[], int B[], int size1, int size2, int ordenado[]) {
    int i = 0, j = 0, k = 0;

    // Se agregan los numeros más pequeños de ambos arreglos y no se para hasta que uno de los dos haya
    // recorrido su array completo. Si faltan mas numeros por agregar debido a esto, se crearan los
    // dos bucles que están abajo.
    while (i < size1 && j < size2) {
        if (A[i] < B[j]) {
            ordenado[k] = A[i];
            i++;
        } else {
            ordenado[k] = B[j];
            j++;
        }
        k++;
    }

    // En el caso de que falte agregar numeros, entonces se agregan.
    // Se agregan los valores de A al arreglo ordenado en el caso de que hayan faltado agregarse
    // en el primer bucle, dado que el primer bucle si o si se para si uno de los dos bucles ya termina de recorrer.
    while (i < size1) {
        ordenado[k] = A[i];
        i++;
        k++;
    }

    // En el caso de que falte agregar numeros, entonces se agregan.
    while (j < size2) {
        ordenado[k] = B[j];
        j++;
        k++;
    }
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(A)/sizeof(A[0]);
    int size2 = sizeof(B)/sizeof(B[0]);
    int ordenado[size1+size2];
    ordenamiento(A, B, size1, size2, ordenado);
    printf("Arreglo fusionado: ");
    for (int i = 0; i < size1+size2; i++) {
        printf("%d ", ordenado[i]);
    }
    return 0;
}
