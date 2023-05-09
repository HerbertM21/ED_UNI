#include <stdio.h>

int main(){
    int A = 1, B = 2, C = 3, *P1, *P2;
    P1 = &A;
    P2 = &C;
    *P1 = (*P2)++; // A = 4
    P1 = P2;
    P2 = &B;
    *P1 -= *P2; // C = 2
    ++*P2; // B = 3
    *P1 *= *P2; // C = 6
    A = ++*P2 * *P1; // A = 24 ( 4 * 6 )
    P1 = &A; // P1 = 24
    *P2 = *P1 /= *P2; // 24 / 4 = 6
    // B = 6
    // C = 6
    // A = (24 / 4) 
    // B = A ¿Por qué? *P1 /= *P2 que se le asigna el valor (24 / 4) a *P1, que es A

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("P1 = %d\n", *P1);
    printf("P2 = %d\n", *P2);
    return 0;
}