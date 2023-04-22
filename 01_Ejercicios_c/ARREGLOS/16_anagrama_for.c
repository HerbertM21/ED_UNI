#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ordenarCaracteres(char arr[], int n) {
    // Implementación de ordenamiento por inserción
    for (int i = 1; i < n; i++) {
        char key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && tolower(arr[j]) > tolower(key)) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int esAnagrama(char s1[], char s2[]) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    
    // Si las cadenas no tienen la misma longitud, no pueden ser anagramas
    if (n1 != n2) {
        return 0;
    }
    
    // Ordenar los arrays de caracteres
    ordenarCaracteres(s1, n1);
    ordenarCaracteres(s2, n2);
    
    // Comparar los arrays de caracteres
    for (int i = 0; i < n1; i++) {
        if (tolower(s1[i]) != tolower(s2[i])) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char s1[] = "roma";
    char s2[] = "amor";
    
    if (esAnagrama(s1, s2)) {
        printf("%s y %s son anagramas.\n", s1, s2);
    } else {
        printf("%s y %s no son anagramas.\n", s1, s2);
    }
    
    return 0;
}
