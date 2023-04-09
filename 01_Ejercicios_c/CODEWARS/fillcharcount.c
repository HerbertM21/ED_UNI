#include <stddef.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>

#define NO_OF_CHARS 256 

void fillCharCounts(const char *str, int *count){ 
    // Mientras el caracter sea igual a nulo, el bucle para.
   for (int i = 0; *(str+i) != '\0';  i++) 
      // count cumple la funcion de hash_table.
      // Todos los caracteres se convierten a minusculas y después se convierten a codigo ASCII
      count[(int)tolower(*(str+i))]++; 
} 

size_t duplicate_count(const char *text) {
  int *count = (int *)calloc(NO_OF_CHARS, sizeof(int)); 
  fillCharCounts(text, count); 
  
  int res = 0;
  for (int i = 0; i < NO_OF_CHARS; i++) 
    if(count[i] > 1) 
        res++; 
  
  free(count); 
  return res;
}