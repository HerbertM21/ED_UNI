#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 8; // número de corredores
    int r = 3; // número de lugares en el podio
    int num_podios;

    num_podios = factorial(n) / factorial(n - r);

    printf("El número de posibles podios entre %d corredores es: %d\n", n, num_podios);

    return 0;
}
