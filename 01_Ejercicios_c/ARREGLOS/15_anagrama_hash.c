#include <stdio.h>
#include <string.h>

#define TAM_TABLA_HASH 256

int sonAnagramas(char *palabra1, char *palabra2) {
    int tablaHash[TAM_TABLA_HASH] = {0};
    int i;

    // se incrementa la frecuencia de cada letra en la primera palabra
    for (i = 0; palabra1[i] != '\0'; i++) {
        tablaHash[palabra1[i]]++;
    }

    // se decrementa la frecuencia de cada letra en la segunda palabra
    for (i = 0; palabra2[i] != '\0'; i++) {
        tablaHash[palabra2[i]]--;
    }

    // se verifica si todas las frecuencias son cero
    // Si algun indice es = 1, entonces es por dos cosas:
    //  - No es la misma longitud de palabras.
    //  - Hay alguna letra que no la tiene la otra palabra.
    for (i = 0; i < TAM_TABLA_HASH; i++) {
        if (tablaHash[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char palabra1[] = "roma";
    char palabra2[] = "amor";

    if (sonAnagramas(palabra1, palabra2)) {
        printf("Las palabras son anagramas\n");
    } else {
        printf("Las palabras no son anagramas\n");
    }

    return 0;
}
