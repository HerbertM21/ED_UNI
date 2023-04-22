#include <stdio.h>

int main(){
  
  char caracter1;
  char caracter2;
  char caracter3;
  
  // Habra un problema de buffer, dado que scanf ignora el \n o enter, despues de establecer la primera variable
  // el buffer tendrá un '\n', por lo cual al pedir otro caracter, ese '\n' queda sobrando y ocurriran problemas.
  // Se debe limpiar el buffer antes de pedir otro caracter, con getchar().
  printf("Ingrese el primer caracter: ");
  scanf("%c", &caracter1,);
  printf("Ingrese el segundo caracter: ");
  scanf("%c", &caracter2,);
  printf("Ingrese el tercero caracter: ");
  scanf("%c", &caracter3,);
  return 0;  
}
