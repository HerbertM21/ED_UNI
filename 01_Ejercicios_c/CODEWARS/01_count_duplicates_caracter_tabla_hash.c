#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello, world!";
    int hash_table[256] = {0};
    int len;

    len = strlen(s);

    // Contar la frecuencia de caracteres en la cadena de caracteres
    for (int i = 0; i < len; i++) {
        hash_table[(int)s[i]]++;
    }

    // Imprimir los resultados
    for (int i = 0; i < 256; i++) {
        if (hash_table[i] > 0) {
            printf("%c: %d\n", (char)i, hash_table[i]);
        }
    }

    return 0;
}
