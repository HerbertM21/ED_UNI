#include <stdio.h>
#include <stdlib.h>  
#include <time.h>       
#include <ctype.h>     

// == Esta función genera un número aleatorio dentro de un rango determinado == //
int generarNumeroAleatorio(int limiteInferior, int limiteSuperior) {
    return (rand() % (limiteSuperior - limiteInferior + 1)) + limiteInferior;
}

// == Esta función se encarga de solicitar al usuario que adivine un número aleatorio generado y proporciona retroalimentación en caso de que el usuario ingrese un número incorrecto == //
void adivinarNumero(int limiteInferior, int limiteSuperior) {
    int numeroAleatorio = generarNumeroAleatorio(limiteInferior, limiteSuperior); 
    int intentos = 0;   
    int numeroIngresado; 

    // == Inicia un bucle infinito que sólo se rompe cuando el usuario adivina el número aleatorio == //
    while (1) {
        printf("Ingrese un numero entre %d y %d: ", limiteInferior, limiteSuperior);
        
        // Verifica si el numero ingresado es valido.
        if (scanf("%d", &numeroIngresado) != 1) { 
            printf("Ingreso una entrada invalida. Intente nuevamente.\n");  // Imprime un mensaje de error si la entrada no es un número
            while (getchar() != '\n');  // Limpia el buffer del teclado
            continue;   // Siguiente iteración de while(1)
        }

        // Verifica si el número ingresado está dentro del rango permitido
        if (numeroIngresado < limiteInferior || numeroIngresado > limiteSuperior) {
            printf("El numero ingresado no esta dentro del rango permitido. Intente nuevamente.\n");   
            continue;   // Siguiente iteración de while(1)
        }

        intentos++; // Incrementa el contador de intentos

        // Verifica si el número ingresado es igual al número aleatorio generado
        if (numeroIngresado == numeroAleatorio) {
            printf("Felicitaciones, ha adivinado el numero en %d intentos!\n", intentos);
            return; // Retorna a la función principal

        // Verifica si el número ingresado es menor o mayor que el número aleatorio generado
        } else if (numeroIngresado < numeroAleatorio) {  
            printf("El numero ingresado es menor que el numero a adivinar. Intente nuevamente.\n"); 
        } else {  
            printf("El numero ingresado es mayor que el numero a adivinar. Intente nuevamente.\n");
        }
    }
}

int main() {
    int limiteInferior, limiteSuperior;
    char entrada[10];

    printf("Ingrese el limite inferior: ");
    scanf("%d", &limiteInferior);

    printf("Ingrese el limite superior: ");
    scanf("%d", &limiteSuperior);

    srand(time(NULL));

    while (1) {
        adivinarNumero(limiteInferior, limiteSuperior);

        printf("Ingrese FIN para salir, o cualquier otra tecla para continuar: ");
        scanf("%s", entrada);

        for (int i = 0; entrada[i] != '\0'; i++) {
            entrada[i] = tolower(entrada[i]);
        }

        if (strcmp(entrada, "fin") == 0) {
            break;
        }
    }

    return 0;
}

// APUNTES CONDICION = "Verificar si el numero ingresado es valido."
// - scanf siempre retorna el numero de variables que se han leido en el input
// - Si el numero de variable ingresado es desigual a 1, entonces se escribió mal.
// - Primero te pide la entrada y luego evaluará la condición.