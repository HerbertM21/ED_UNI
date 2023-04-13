#include <stdio.h>

int esPalindromo(char *inicio, char *fin) {
    if (inicio >= fin) {
        // Caso base: la palabra es un palíndromo
        return 1;
    } else if (*inicio != *fin) {
        // Caso base: la palabra no es un palíndromo
        return 0;
    } else {
        // Llamada recursiva: comparamos el siguiente par de letras
        return esPalindromo(inicio + 1, fin - 1);
    }
}

int main() {
    char palabra[] = "reconocer";
    char *inicio = palabra;
    char *fin = inicio + (strlen(palabra) - 1); // Desde inicio se desplaza al indice (strlen(palabra) - 1)

    if (esPalindromo(inicio, fin)) {
        printf("La palabra es un palindromo\n");
    } else {
        printf("La palabra no es un palindromo\n");
    }

    return 0;
}
