# Complejidades

1. ``O(1)`` => **Constante**
2. ``O(log n)`` => **Logarítmica**
3. ``O(n)`` => **Lineal**
4. ``O(n log n)`` => **Logarítmica lineal**
5. ``O(n^2)`` => **Polinomial**
6. ``O(n^3)`` => **Polinomial**
7. ``O(2^n)`` => **Exponencial**
8. ``O(n!)`` => **Factorial**

---

## Complejidad O(n)

Un código tiene complejidad O(n) cuando su tiempo de ejecución es proporcional al tamaño de la entrada.

Es decir, si el tamaño de la entrada se duplica, el tiempo de ejecución también se duplica.

```c

for (int i = 0; i < n; i++) {
    // Codigo
}

```

## Complejidad O(n^2)

Un código tiene complejidad ``O(n^2)`` cuando su tiempo de ejecución es proporcional al cuadrado del tamaño de la entrada.

Es decir, si el tamaño de la entrada se **duplica**, el tiempo de ejecución se **cuadruplica**.

> - **Bucles anidados**
> - **Recursividad**

#### **Cuadratico recursivo**

```c
#include <stdio.h>

int sumaRecursiva(int n) {
    // Caso base: si n es igual a 0, la suma es 0
    if (n == 0) {
        return 0;
    }
  
    // Llamada recursiva para sumar los primeros n-1 números
    int suma = sumaRecursiva(n - 1);
  
    // Sumar el número actual n al resultado
    suma += n;
  
    return suma;
}

int main() {
    int n = 5;
    int resultado = sumaRecursiva(n);
  
    printf("La suma de los primeros %d números es: %d\n", n, resultado);
  
    return 0;
}
```

#### **Cuadratico iterativo**

```c

#include <stdio.h>

int main(){

    int n = 5;
  
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("i: %d, j: %d\n", i, j);
        }
    }


    return 0;
}
```

---

## **Complejidad logarítmica O(log n)**

Un código tiene complejidad ``O(log n)`` cuando generalmente implica que ``'n'`` se está ``reduciendo`` o ``dividiendo`` en subproblemas más pequeños en cada iteración o llamada recursiva.

El tamaño de la entrada se reduce en cada iteración o llamada recursiva.

> - **Divide y vencerás**
> - **Recursividad**
> - **Búsqueda binaria**
> - **Árboles binarios**
> - **Grafos**
> - **Algoritmos de ordenamiento**

Se debe reducir de **3 maneras** para llegar a un comportamiento logaritmico:

> - Por **Raiz cuadrada**
> - Por **Division entre 2**
> - Por **Potencia de 2**

#### **Logaritmico recursivo**

```c

#include <stdio.h>

int potenciaRecursivaLog(int base, int exponente) {
    // Caso base: si el exponente es 0, la potencia es 1
    if (exponente == 0) {
        return 1;
    }

    // Si el exponente es par
    if (exponente % 2 == 0) {
        int temp = potenciaRecursivaLog(base, exponente / 2);
        return temp * temp;
    }
    // Si el exponente es impar
    else {
        int temp = potenciaRecursivaLog(base, (exponente - 1) / 2);
        return base * temp * temp;
    }
}

int main() {
    int base = 2;
    int exponente = 10;
    int resultado = potenciaRecursivaLog(base, exponente);
    printf("%d\n", resultado);
    return 0;
}


```

#### **Logaritmico iterativo**

```c

#include <stdio.h>

int main(){

    int n = 5;
  
    for(int i = 1; i < n; i++){
        printf("i: %d\n", i);
        n /= 2;
    }

    return 0;

}

```

El siguiente algoritmo es logaritmico porque se reduce el problema utilizando saltos largos, en este caso de 8 en 8 ``(i = i * 8)``

Hay que tener en cuenta que una complejidad logaritmica siempre será determinada como tal cuando se reduzca el problema antes de llegar a n (tamaño de la entrada).

#### **Logaritmico iterativo**

```c

#include <stdio.h>

int main(){

    int n = 5;
  
    for(int i = 1; i < n; i= i*8){
        printf("i: %d\n", i);
    }

    return 0;

}
```

## **Complejidad logaritmica lineal O(n log n)**

Un código tiene complejidad ``O(n log n)`` cuando hay una estructura lineal dentro del proceso donde n disminuye y ese misma estructura lineal depende directa o indirectamente de n dado que i depende de n, y el bucle interior usando i, esta dependiendo indirectamente de n

> - **Divide y vencerás**
> - **Recursividad**
> - **Búsqueda binaria**
> - **Árboles binarios**
>   ...

#### **Logaritmo lineal recursivo**

```c
void merge(int arr[], int left, int middle, int right) {
    // Código para combinar y ordenar dos subarrays
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}
```

#### **Logaritmo lineal iterativo**

```c
int main(){

    int tamano = 10;

    // Estructura logaritmica
    for(int i = 0; i < tamano; i++){
        tamano = tamano / 2;

        // Estructura lineal
        for(j = 0; j < i; j++){
            // INSERTAR CODIGO
        }
    }

    // Eso es igual a n log n

    return 0;
}
```
