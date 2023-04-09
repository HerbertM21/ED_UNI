#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int generarNumeroAleatorio(int limiteInferior, int limiteSuperior) {
    return (rand() % (limiteSuperior - limiteInferior + 1)) + limiteInferior;
}

int adivinarNumero(int limiteInferior, int limiteSuperior) {
    int numeroAleatorio = generarNumeroAleatorio(limiteInferior, limiteSuperior);
    int intentos = 0;
    int numeroIngresado;

    printf("-------------------------------------------------------------\n");
    printf("Adivina el numero entre %d y %d\n", limiteInferior, limiteSuperior);
    printf("-------------------------------------------------------------\n");

    while (1) {
        printf("Introduce un numero o pulsa FIN para salir: ");
        char entrada[10];
        scanf("%s", entrada);

        // Comprueba si el usuario quiere salir
        if (strcmp(entrada, "FIN") == 0 || strcmp(entrada, "fin") == 0) {
            printf("Adios!\n");
            return 0;
        }

        // Comprueba si la entrada es un número válido
        char *p = entrada;
        while (*p) {
            if (!isdigit(*p)) {
                printf("Entrada invalida. Intentalo de nuevo\n");
                break;
            }
            p++;
        }

        if (!*p) {
            numeroIngresado = atoi(entrada);
            if (numeroIngresado < limiteInferior || numeroIngresado > limiteSuperior) {
                printf("Fuera de rango. Intentalo de nuevo\n");
                continue;
            }
        } else {
            continue;
        }

        intentos++;

        if (numeroIngresado == numeroAleatorio) {
            printf("HAS ACERTADO!!! Despues de %d intentos\n", intentos);
            return 0;
        } else if (numeroIngresado < numeroAleatorio) {
            printf("El numero buscado es mayor\n");
        } else {
            printf("El numero buscado es menor\n");
        }
    }
}

int main() {
    int limiteInferior, limiteSuperior;

    printf("Ingrese el limite inferior: ");
    scanf("%d", &limiteInferior);

    printf("Ingrese el limite superior: ");
    scanf("%d", &limiteSuperior);

    srand(time(NULL));

    int resultado = 1;

    do {
        resultado = adivinarNumero(limiteInferior, limiteSuperior);
    } while (resultado);

    return 0;
}
