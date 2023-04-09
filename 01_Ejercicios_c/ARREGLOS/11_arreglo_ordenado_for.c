#include <stdio.h>

void ordenamiento(int A[], int B[], int size1, int size2, int ordenado[]) {
    int i = 0, j = 0;
    
    // Se crea un solo bucle para agregar los valores al array ordenado.
    // -> size1+size2 == tamaño total del array ordenado, dado que se concatena.
    for (int k = 0; k < size1+size2; k++) {
        // Si ya se termino de recorrer el array A, se agregan los valores de B consecutivamente.
        if (i >= size1) {
            ordenado[k] = B[j];
            j++;
        // Si ya se termino de recorrer el array B o si el elemento del array A es menor al elemento de B
        // se agrega el valor de A al array ordenado.
        } else if (j >= size2 || A[i] < B[j]) {
            ordenado[k] = A[i];
            i++;
        // En caso contrario, si B ni A se han recorrido por completo y además
        // el elemento de A es mayor al elemento de B, entonces se agrega el elemento de B.
        } else {
            ordenado[k] = B[j];
            j++;
        }
    }
}

// NOTA MENTAL: i >= size1, j >= size2
// Termina de recorrer cuando i y j sea igual tamaño, porque ningun ultimo indice es igual al tamaño
// el ultimo indice siempre es tamaño - 1.

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