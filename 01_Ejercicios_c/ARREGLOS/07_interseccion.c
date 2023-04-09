#include <stdio.h>
#include <stdbool.h>

int main() {
    int A[] = { 1, 2, 3, 4, 5 };
    int B[] = { 3, 4, 6, 7 };

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    // Se crea un arreglo con un tamaño temporal para evitar errores, se garantiza suficiente espacio para evitar problemas de memoria
    int result[sizeA + sizeB]; 
    // La variable count es para indicar el final del array con el fin de recorrer su array y de imprimirlo
    // en el caso que no se necesite hacer estos casos, el array puede tener un tamaño suficientemente grande para evitar errores de memoria.
    int count = 0;

    // Se recorre el arreglo A
    for (int i = 0; i < sizeA; i++) {
        bool encontrado = false;
        // Se compara cada elemento de A por todos los elementos de B
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                encontrado = true;
            }
        }

        // Si encontrado == True...
        if (encontrado) {
            result[count] = A[i];
            count++;
        }
    }

    // Imprimir el resultado
    printf("La intersección de A y B es: ");
    for(int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
