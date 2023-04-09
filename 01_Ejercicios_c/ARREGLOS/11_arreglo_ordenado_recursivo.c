#include <stdio.h>

void ordenamiento(int *a, int *b, int size1, int size2, int *out) {
    if (size1 == 0) {
        // si a está vacío, copiar todos los elementos restantes de b
        for (int i = 0; i < size2; i++) {
            out[i] = b[i];
        }
        return;
    }
    if (size2 == 0) {
        // si b está vacío, copiar todos los elementos restantes de a
        for (int i = 0; i < size1; i++) {
            out[i] = a[i];
        }
        return;
    }
    if (*a <= *b) {
        // si el primer elemento de a es menor o igual que el primer elemento de b
        // copiar el primer elemento de a y combinar el resto de a y b
        *out = *a;
        ordenamiento(a+1, b, size1-1, size2, out+1);
    } else {
        // si el primer elemento de b es menor que el primer elemento de a
        // copiar el primer elemento de b y combinar el resto de a y b
        *out = *b;
        ordenamiento(a, b+1, size1, size2-1, out+1);
    }
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(A)/sizeof(A[0]);
    int size2 = sizeof(B)/sizeof(B[0]);
    int ordenado[size1+size2];
    ordenamiento(A, B, size1, size2, ordenado);
    printf("Arreglo fusionado: ");
    for (int i = 0; i < size1+size2; i++) {
        printf("%d ", ordenado[i]);
    }
    return 0;
}
