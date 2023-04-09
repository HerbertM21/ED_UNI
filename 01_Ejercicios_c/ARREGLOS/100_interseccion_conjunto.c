#include <stdio.h>
#include <stdlib.h>

typedef struct conjunto {
    int *const array;
    size_t size;
} conjunto;

const conjunto getIntersect(const conjunto a, const conjunto b){

    // Si el tamaño de a es menor que el de b, el tamaño del conjunto intersección será el de a
    // ¿Porqué? Porque si el tamaño de a es menor que el de b, el tamaño de la intersección será
    // el tamaño de a, ya que no puede haber elementos en la intersección que no estén en a.
    size_t sizeC = a.size < b.size ? a.size : b.size;
    // Se reserva memoria para el conjunto intersección
    // Se reserva en bytes, por eso se multiplica el tamaño de una estructura * los bytes del tipo de dato.
    // tamaño int * bytes int
    conjunto c = {malloc(sizeC * sizeof(int)), 0}; 
    size_t ci = 0; // El índice del conjunto intersección

    // Por cada elemento del conjunto a
    // recorremos todo el conjunto b para ver si coincide con el elemento[i] de a.
    for(size_t ai = 0; ai < a.size; ai++){
        for(size_t bi = 0; bi < b.size; bi++){
            // Si el elemento de a coincide con el de b, lo añadimos al conjunto intersección
            if(a.array[ai] == b.array[bi]){
                c.array[ci++] = a.array[ai];
                break;
            }
        }

    }

    // Actualizamos el tamaño del conjunto intersección
    // El nuevo tamaño será el índice del conjunto intersección
    // ¿Porqué? Porque el índice del conjunto intersección es el número de elementos que tiene
    c.size = ci;
    return c;
}

int main(){

    int a[] = {1, 6, 3, 4, 5};
    int b[] = {4, 5, 6, 7};

    size_t sizeA = sizeof(a) / sizeof(a[0]);
    size_t sizeB = sizeof(b) / sizeof(b[0]);

    conjunto c = getIntersect((conjunto){a, sizeA}, (conjunto){b, sizeB});

    if(c.array == NULL){
        return 1;
    }

    printf("La interseccion entre los conjuntos es: ");
    for(size_t i = 0; i < c.size; i++){
        printf("%d ", c.array[i]);
    }
    printf("\n");

    free(c.array);

    return 0;
}