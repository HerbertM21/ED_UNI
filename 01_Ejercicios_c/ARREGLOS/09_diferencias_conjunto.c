#include <stdio.h>

int main() {
    // Definir los arreglos A y B
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 4, 6, 7};

    // Definir el tamaño de los arreglos
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    // Crear un conjunto vacío para almacenar los elementos de A que no se encuentran en B
    int result[sizeA]; // Suponemos que el resultado no será mayor al tamaño de A
    int count = 0;
    // Iterar sobre cada elemento de A
    for (int i = 0; i < sizeA; i++) {
        int found = 0;
        
        // Verificar si el elemento de A se encuentra en B
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        
        // Si el elemento de A no se encuentra en B, agregarlo al conjunto
        if (!found) {
            result[count] = A[i];
            count++;
        }
    }

    // Imprimir el tercer arreglo resultante
    printf("A - B = { ");
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("}\n");

    return 0;
}
