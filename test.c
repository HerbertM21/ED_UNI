#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100000

void bubble_sort(int arr[], int tam);

int main() {
    int numeros[TAM];
    int i, j;
    time_t t_1,t_2;
    t_1=time(NULL);
    
    FILE *archivo = fopen("datos_aleatorios.txt", "r");

    // leer los numeros aleatorios del archivo y almacenarlos en el arreglo
    printf("uno\n");
    for (i = 0; i < TAM; i++) {
        fscanf(archivo, "%d", &numeros[i]);
    }

    fclose(archivo);

    bubble_sort(numeros, TAM);

    // imprimir los numeros ordenados en la consola
    for (i = 0; i < TAM; i++) {
        printf("%d\n", numeros[i]);
    }

    printf("Numeros ordenados\n");
    t_2=time(NULL);
    
    printf("\n\nEstadistica del programa: Iteracion .... ");
    printf("\n\nTiempo 1 = %ld",t_1);
    printf("\n\nTiempo 2 = %ld",t_2);
    printf("\n\nTiempo Total = %lf\n",difftime(t_2,t_1));
    return 0;
}

void bubble_sort(int arr[], int tam) {
    int i, j, temp;
    for (i = 0; i < tam-1; i++) {
        for (j = 0; j < tam-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
