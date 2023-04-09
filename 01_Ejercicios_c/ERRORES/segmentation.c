#include <stdio.h>

int main() {
    char *str = "Hola";

    // Habra un problema si se quiere modificar la string, dado que se inicializo con un puntero
    // Si se inicializa un string como char puntero, se crea un char tipo constante y no se puede modificar
    // Esto no se aplica si hacemos char str[] = "Hola";
    str[0] = 'h';
    printf("%c\n", str);
    return 0;
}
