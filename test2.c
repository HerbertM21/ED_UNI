#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

void insertarNodo(struct Nodo **cabeza, int dato);
void mostrarLista(struct Nodo *cabeza);
void eliminarLista(struct Nodo **cabeza);
void longitudLista(struct Nodo *cabeza);

int main() {
    struct Nodo* cabeza = NULL;
    insertarNodo(&cabeza, 3);
    insertarNodo(&cabeza, 5);
    insertarNodo(&cabeza, 7);
    mostrarLista(cabeza);
    longitudLista(cabeza);
    return 0;
}

void insertarNodo(struct Nodo** cabeza, int dato) {
    struct Nodo* nuevoNodo = (struct Nodo *) malloc(sizeof(struct Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = *cabeza;
    *cabeza = nuevoNodo;
}

void mostrarLista(struct Nodo* cabeza) {
    while (cabeza != NULL) {
        if(cabeza->siguiente != NULL){
            printf("%d, ", cabeza->dato);
        } else {
            printf("%d.", cabeza->dato);
        }
        cabeza = cabeza->siguiente;
    }
    printf("\n");
}

void eliminarLista(struct Nodo** cabeza) {
    struct Nodo* aux = *cabeza;
    while (aux != NULL) {
        *cabeza = aux->siguiente;
        free(aux);
        aux = *cabeza;
    }
}

void longitudLista(struct Nodo* cabeza) {
    int longitud = 0;
    while (cabeza != NULL) {
        longitud++;
        cabeza = cabeza->siguiente;
    }
    printf("La longitud de la lista es: %d\n", longitud);
}

void agregarFinal(struct Nodo** cabeza, int dato) {
    struct Nodo* nuevoNodo = (struct Nodo *) malloc(sizeof(struct Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
    } else {
        struct Nodo* aux = *cabeza;
        while (aux->siguiente != NULL) {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevoNodo;
    }

}

// Agregar después de una determina posición de la lista.

void agregarDespues(struct Nodo** cabeza, int dato, int posicion) {
    struct Nodo* nuevoNodo = (struct Nodo *) malloc(sizeof(struct Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
    } else {
        struct Nodo* aux = *cabeza;
        int i = 0;
        while (i < posicion && aux->siguiente != NULL) {
            aux = aux->siguiente;
            i++;
        }
        nuevoNodo->siguiente = aux->siguiente;
        aux->siguiente = nuevoNodo;
    }
}

// Ordenar de menor a mayor una lista.

void ordenarLista(struct Nodo** cabeza) {
    struct Nodo* aux = *cabeza;
    while (aux != NULL) {
        struct Nodo* aux2 = aux->siguiente;
        while (aux2 != NULL) {
            if (aux->dato > aux2->dato) {
                int temp = aux->dato;
                aux->dato = aux2->dato;
                aux2->dato = temp;
            }
            aux2 = aux2->siguiente;
        }
        aux = aux->siguiente;
    }
}

void eliminarNodo(struct Nodo** cabeza, int posicion) {
    if (*cabeza == NULL) {
        printf("La lista está vacía.\n");
        return;
    }
    
    struct Nodo* actual = *cabeza;
    struct Nodo* anterior = NULL;
    int contador = 0;
    
    // Caso especial: eliminar el primer nodo
    if (posicion == 0) {
        *cabeza = actual->siguiente;
        free(actual);
        printf("Nodo eliminado en la posición %d.\n", posicion);
        return;
    }
    
    // Buscar el nodo a eliminar
    while (actual != NULL && contador != posicion) {
        anterior = actual;
        actual = actual->siguiente;
        contador++;
    }
    
    // Si no se encontró el nodo en la posición dada
    if (actual == NULL) {
        printf("No se encontró el nodo en la posición %d.\n", posicion);
        return;
    }
    
    // Eliminar el nodo
    anterior->siguiente = actual->siguiente;
    free(actual);
    printf("Nodo eliminado en la posición %d.\n", posicion);
}