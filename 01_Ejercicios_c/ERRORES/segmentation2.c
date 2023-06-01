#include <stdio.h>

int main(){
  
  char caracter;
  char caracter1;
  char caracter2;
  
  // Será un problema de segmentación porque se le agregará mas caracteres de lo que espera la variable tipo char
  // aunque hayas agregado un solo caracter, se espera que se agrege un tipo char, no un tipo string.
  scanf("%s %s %s", &caracter, &caracter2, &caracter3);
  printf("%s-%s-%s", caracter, caracter2, caracter3);
  return 0;  
}
