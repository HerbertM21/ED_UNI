#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void shuffle(char arr[], int n) {
    srand(time(NULL));
    for (int i = n - 1; i > 0; i--) {
        // Indice random
        int j = rand() % (i + 1);
        // Algoritmo swap normal
        // Intercambia arr[i] y arr[j(indice random)]
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    char respuestas[] = {'A', 'B', 'C', 'D', 'E'};

    // Obtener la longitud del array
    int longitud = sizeof(respuestas) / sizeof(respuestas[0]);

    // Cambiar aleatoriamente el orden de las respuestas
    shuffle(respuestas, longitud);

    // Imprimir las respuestas en su nuevo orden
    for (int i = 0; i < longitud; i++) {
        printf("%c ", respuestas[i]);
    }

    return 0;
}
