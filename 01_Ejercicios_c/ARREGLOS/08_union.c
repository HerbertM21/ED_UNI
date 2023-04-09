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

    // Copiar los elementos de A a result
    for (int i = 0; i < sizeA; i++) {
        result[count] = A[i];
        count++;
    }

    // Agregar los elementos de B que no están en A a result
    for (int i = 0; i < sizeB; i++) {
        bool encontrado = false;
        // Se compara cada elemento de B por todos los elementos de result
        for (int j = 0; j < count; j++) {
            if (B[i] == result[j]) {
                encontrado = true;
            }
        }

        // Si encontrado == false...
        if (!encontrado) {
            result[count] = B[i];
            count++;
        }
    }

    // Imprimir el resultado
    printf("La unión de A y B es: ");
    for(int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
