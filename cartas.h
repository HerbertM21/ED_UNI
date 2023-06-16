#include <pila.h>
#include <stdlib.h>
#include <time.h>

struct tpila{
  int dato;
  struct tpila *sig;
};

typedef struct tpila PILA;

// definir J, Q, K = 10
// definir AS = 11
// definir picas, corazones, treboles, diamantes
// definir que los dos y 10 son comodines


void crear(PILA **pila);
int vacia(PILA *pila);
void push(PILA *pila, int elem);
void pop(PILA *pila, int *elem);

int generar_aleratorio(int min, int max){
  return rand() % (max - min + 1) + min;
}

void tomar_carta(PILA **mazo, PILA **monton){
  int elem;
  pop(*mazo, &elem);

  if(elem % 2 == 0){
    push(*mazo, elem);
  } else {
    push(*monton, elem);
  }
}

// si el mazo esta vacio, termina el juego y se cuenta cuantas cartas quedaron en cada monton
// J, Q, K valen 10, AS vale 11, las cartas numeradas
void contar_monton(PILA **monton, int *contador){
  PILA *aux;
  crear(&aux);

  while(*monton != NULL){
    int elem;
    pop(*monton, &elem);
    push(aux, elem);
    *contador = *contador + 1;
  }

  while(aux != NULL){
    int elem;
    pop(aux, &elem);
    push(*monton, elem);
  }
}
