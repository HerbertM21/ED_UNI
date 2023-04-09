#include <stdio.h>
#include <string.h>

struct equivalencia {
    char letra;
    char* codigo;
};

struct equivalencia tabla_braille[] = { // Tabla de equivalencias entre letras y código Braille
    {'a', "100000"},
    {'b', "110000"},
    {'c', "100100"},
    {'d', "100110"},
    {'e', "100010"},
    {'f', "110100"},
    {'g', "110110"},
    {'h', "110010"},
    {'i', "010100"},
    {'j', "010110"},
    {'k', "101000"},
    {'l', "111000"},
    {'m', "101100"},
    {'n', "101110"},
    {'o', "101010"},
    {'p', "111100"},
    {'q', "111110"},
    {'r', "111010"},
    {'s', "011100"},
    {'t', "011110"},
    {'u', "101001"},
    {'v', "111001"},
    {'w', "010111"},
    {'x', "101101"},
    {'y', "101111"},
    {'z', "101011"},
    {' ', "000000"}
};

int main() {
    char cadena[100]; // Cadena de texto a convertir a Braille
    printf("Introduce una cadena de texto: ");
    fgets(cadena, 100, stdin);
    cadena[strcspn(cadena, "\n")] = 0; // Eliminar el salto de línea al final de la cadena
    int n = strlen(cadena);
    // n * 6 + 1, siendo n = 24, es 145, que es el número máximo de caracteres que puede tener una cadena de texto
    char cadena_braille[n * 6 + 1]; // Cadena que almacenará el código Braille resultante
    int i, j, k;

    // Recorrer la cadena de texto original y buscar la letra en la tabla de equivalencias
    for (i = 0; i < n; i++) { // Recorrer la cadena de texto original
        char* codigo = "";
        for (k = 0; k < 27; k++) { // Buscar la letra en la tabla de equivalencias
            if (cadena[i] == tabla_braille[k].letra) {
                codigo = tabla_braille[k].codigo;
                // Si la letra es equivalente a la letra de la tabla, se guarda el código Braille de la letra
                // y se rompe el bucle para pasar a la siguiente letra
                break;
            }
        }
        strcat(cadena_braille, codigo); // Concatenar el código Braille de la letra actual a la cadena
    }

    // Dividir la cadena de código Braille en caracteres de seis puntos
    int m = strlen(cadena_braille);
    char caracteres_braille[(m / 6) + 1][7]; // Matriz que almacenará los caracteres Braille
    for (i = 0, j = 0; i < m; i += 6, j++) { // Dividir la cadena de código Braille en caracteres de seis puntos
        strncpy(caracteres_braille[j], cadena_braille + i, 6);
        caracteres_braille[j][6] = '\0';
    }
    printf("Cadena en Braille: ");
    for (i = 0; i < (m / 6); i++) { // Mostrar los caracteres Braille
        printf("%s ", caracteres_braille[i]);
    }
    printf("\n");
    return 0;
}
