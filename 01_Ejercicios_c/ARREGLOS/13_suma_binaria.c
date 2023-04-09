#include <stdio.h>

// - Dado dos arreglos que contiene 0 y 1, confeccione un programa que permita generar un tercer arreglo que corresponderá a la suma binaria de los elementos de los arreglos (los largos de los arreglos son de largo N y M)

int main() {
    int arreglo1[] = {0, 1, 1, 1, 0, 1, 1, 0};
    int arreglo2[] = {1, 1, 0, 1, 0, 0, 0, 0};
    int arreglo_suma[8];
    int carry = 0;
    
    for (int i = 7; i >= 0; i--) {
        int suma = arreglo1[i] + arreglo2[i] + carry;
        if (suma == 0) {
            arreglo_suma[i] = 0;
            carry = 0;
        } else if (suma == 1) {
            arreglo_suma[i] = 1;
            carry = 0;
        } else if (suma == 2) {
            arreglo_suma[i] = 0;
            carry = 1;
        } else {
            arreglo_suma[i] = 1;
            carry = 1;
        }
    }
    
    printf("La suma binaria de los arreglos es: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", arreglo_suma[i]);
    }
    printf("\n");

    return 0;
}
