#include <stdlib.h>
#include <time.h>

struct tpila{
  int dato;
  struct tpila *sig;
};

typedef struct tpila PILA;
// definir J, Q, K = 10
// definir AS con hashtable



void crear(PILA **pila);
int vacia(PILA *pila);
void push(PILA *pila, int elem);
void pop(PILA *pila, int *elem);



int generar_aleatorio(int min, int max){
  return rand() % (max - min + 1) + min;
}

void crear(PILA **pila){
    *pila = (PILA *) malloc(sizeof(PILA)); 
    (*pila)->sig = NULL;
}

int vacia(PILA *pila){
  return (pila->sig == NULL);
}

void push(PILA *pila, int elem){
    PILA *nuevo;
    nuevo = (PILA *) malloc(sizeof(PILA)); 
    nuevo->dato = elem;
    nuevo->sig = pila->sig;
    pila->sig = nuevo;
}

void pop(PILA *pila, int *elem){
  PILA *aux;
  aux = pila->sig;
  *elem = aux->dato;
  pila->sig = aux->sig;
  free(aux);
}

void invertirpila(PILA **pila, PILA **invertida){
  while(*pila != NULL){
    int elem;
    pop(*pila, &elem);
    push(*invertida, elem);
  }

  *pila = *invertida;
}
