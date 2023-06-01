#include <stdio.h>

// Escribe un programa en C que solicite al usuario ingresar un número entero positivo y 
// verifique si ese número es un número perfecto. Un número perfecto es aquel que es igual a la suma de sus divisores propios 
// (excluyendo al propio número).
// El programa debe mostrar un mensaje indicando si el número ingresado es perfecto o no.

int main() {
    int num;

    while (1) {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &num);

        if (num > 0) {
            int sum = 0;  // Reiniciar la variable sum a cero en cada iteración

            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    sum += i;
                }
            }

            if (sum == num) {
                printf("El número %d es perfecto\n", num);
            } else {
                printf("El número %d no es perfecto\n", num);
            }
        } else {
            continue; // Volver a solicitar un número si el ingresado no es positivo
        }

        break;  // Salir del bucle while después de procesar un número
    }

    return 0;
}