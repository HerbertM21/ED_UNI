#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int numero;
    srand(time(0));
    numero = 1000000;
    printf("%d\n",numero);
    
    time_t t_1,t_2;
    t_1=time(NULL);
    for (int i=0; i< numero; i++)
        printf("%d\n", i);
    t_2=time(NULL);
    
    printf("\n\nEstadistica del programa: Iteracion .... ");
    printf("\n\nTiempo 1 = %ld",t_1);
    printf("\n\nTiempo 2 = %ld",t_2);
    printf("\n\nTiempo Total = %lf\n",difftime(t_2,t_1));
    
    return 0;
}

// t_1 almacena el valor de tiempo justo antes de que comience la ejecución del bucle for
// t_2 almacena el valor de tiempo justo después de que se completa la ejecución del bucle.
// t_2 - t_1 almacena el tiempo total de ejecución del bucle for. 

// -----
// time(NULL) Devuelve el tiempo actual del sistema en segundos. Desde 00:00:00 UTC, 1 de enero de 1970 hasta ahora.
// Entonces claro, la diferencia entre el tiempo que empezó el bucle y el tiempo que terminó el bucle es el tiempo que tardó el bucle en ejecutarse