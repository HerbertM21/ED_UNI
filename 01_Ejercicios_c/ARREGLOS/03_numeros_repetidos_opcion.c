#include <stdio.h>
#include <stdbool.h>

void contar_repetidos(int arreglo[], int tamano){
    for(int i = 0; i < tamano; i++){
        int contador = 0;
        bool repetido = false;
        for(int j = 0; j < tamano; j++){
            if(i != j && arreglo[i] == arreglo[j]){
                repetido = true;
                break;
            }
        }
        if(!repetido){
            for(int j = 0; j < tamano; j++){
                if(arreglo[i] == arreglo[j]){
                    contador++;
                }
            }
            printf("El numero %d aparece %d veces\n", arreglo[i], contador);
        }
    }
}

int main(){
    int arreglo[] = {1, 4, 5, 6, 7, 8, 4};
    size_t tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    contar_repetidos(arreglo, tamano);

    return 0;
}
