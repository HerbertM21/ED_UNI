#include <stdio.h>

int main() {

    int A[] = {1, 5, 7, 4, 8}; // 4 1 8 5 7
    size_t tamano = sizeof(A) / sizeof(A[0]); // Se declara el tamaño
    int result[tamano]; // Se crea un array vacio 

    int indicePar = 0;
    int indiceImpar = 1;

    for (int i = 0; i < tamano; i++) {
        if (A[i] % 2 == 0) { // Si es par, agregarlo en una posición par
            if (indicePar < tamano) { // Verificar si el índice par está dentro del tamaño del arreglo
                result[indicePar] = A[i];
                indicePar += 2;
            } else { // Si no, agregarlo en la siguiente posición impar
                result[indiceImpar] = A[i];
                indiceImpar += 2;
            }
        } else { // Si es impar, agregarlo en una posición impar
            if (indiceImpar < tamano) { // Verificar si el índice impar está dentro del tamaño del arreglo
                result[indiceImpar] = A[i];
                indiceImpar += 2;
            } else { // Si no, agregarlo en la siguiente posición par
                result[indicePar] = A[i];
                indicePar += 2;
            }
        }
    }

    // Imprimir el resultado
    for (int i = 0; i < tamano; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
