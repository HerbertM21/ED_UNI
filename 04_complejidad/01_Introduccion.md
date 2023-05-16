## Complejidad algoritmica

### Introducción

La complejidad algorítmica es una medida de la cantidad de recursos necesarios para ejecutar un algoritmo. La complejidad de un algoritmo se mide en función del tamaño de la entrada, por lo que es independiente del hardware o del lenguaje de programación utilizado.

La complejidad algorítmica se divide en dos tipos:

- **Complejidad temporal:** mide la cantidad de tiempo que tarda un algoritmo en ejecutarse.
- **Complejidad espacial:** mide la cantidad de memoria que utiliza un algoritmo para ejecutarse.

---

## Complejidad temporal

La complejidad temporal se mide en función del tamaño de la entrada. Por ejemplo, si tenemos un algoritmo que ordena una lista de números, la entrada sería la lista de números y el tamaño de la entrada sería la cantidad de números que contiene la lista.

La complejidad temporal se divide en tres tipos:

- **Mejor caso**: es el menor tiempo que puede tardar un algoritmo en ejecutarse.
- - Ejemplo: **[MEJOR CASO] BUSQUEDA LINEAL**
    - ``Complejidad temporal: O(1)``
      - ``Notación: O(1)``
      - ``Orden: constante``
      - Ejemplo: búsqueda lineal
      - Ejemplo: acceso a un elemento de un array
      - Ejemplo: acceso a un elemento de un objeto
      - Ejemplo: acceso a un elemento de un diccionario
      - Ejemplo: acceso a un elemento de un conjunto
      - Ejemplo: acceso a un elemento de un árbol binario
      - Ejemplo: acceso a un elemento de un grafo
      - Ejemplo: acceso a un elemento de una matriz
      - Ejemplo: acceso a un elemento de una lista enlazada
- **Peor caso**: es el mayor tiempo que puede tardar un algoritmo en ejecutarse.

  - Ejemplo: **[PEOR CASO] BUSQUEDA LINEAL**
    - ``Complejidad temporal: O(n)``
      - ``Notación: O(n)``
      - ``Orden: lineal``
      - Ejemplo: búsqueda lineal
      - Ejemplo: recorrer un array
      - Ejemplo: recorrer un objeto
      - Ejemplo: recorrer un diccionario
      - Ejemplo: recorrer un conjunto
      - Ejemplo: recorrer un árbol binario
      - Ejemplo: recorrer un grafo
      - Ejemplo: recorrer una matriz
      - Ejemplo: recorrer una lista enlazada
- **Caso promedio**: es el tiempo que tarda un algoritmo en ejecutarse en promedio.

  - Ejemplo: **[CASO PROMEDIO] BUSQUEDA LINEAL**
    - ``Complejidad temporal: O(n)``
      - ``Notación: O(n)``
      - ``Orden: lineal``
      - Ejemplo: búsqueda lineal
      - Ejemplo: recorrer un array
      - Ejemplo: recorrer un objeto
      - Ejemplo: recorrer un diccionario
      - Ejemplo: recorrer un conjunto
      - Ejemplo: recorrer un árbol binario
      - Ejemplo: recorrer un grafo
      - Ejemplo: recorrer una matriz
      - Ejemplo: recorrer una lista enlazada

---

## Complejidad espacial

La complejidad espacial se mide en función del tamaño de la entrada. Por ejemplo, si tenemos un algoritmo que ordena una lista de números, la entrada sería la lista de números y el tamaño de la entrada sería la cantidad de números que contiene la lista.

La complejidad espacial se divide en tres tipos:

- **Mejor caso**: es la menor cantidad de memoria que puede utilizar un algoritmo para ejecutarse.

  - Ejemplo: **[MEJOR CASO] BUSQUEDA LINEAL**
    - ``Complejidad espacial: O(1)``
      - ``Notación: O(1)``
      - ``Orden: constante``
      - Ejemplo: búsqueda lineal
      - Ejemplo: acceso a un elemento de un array
      - Ejemplo: acceso a un elemento de un objeto
      - Ejemplo: acceso a un elemento de un diccionario
      - Ejemplo: acceso a un elemento de un conjunto
      - Ejemplo: acceso a un elemento de un árbol binario
      - Ejemplo: acceso a un elemento de un grafo
      - Ejemplo: acceso a un elemento de una matriz
      - Ejemplo: acceso a un elemento de una lista enlazada
- **Peor caso**: es la mayor cantidad de memoria que puede utilizar un algoritmo para ejecutarse.

  - Ejemplo: **[PEOR CASO] BUSQUEDA LINEAL**
    - ``Complejidad espacial: O(n)``
      - ``Notación: O(n)``
      - ``Orden: lineal``
      - Ejemplo: búsqueda lineal
      - Ejemplo: recorrer un array
      - Ejemplo: recorrer un objeto
      - Ejemplo: recorrer un diccionario
      - Ejemplo: recorrer un conjunto
      - Ejemplo: recorrer un árbol binario
      - Ejemplo: recorrer un grafo
      - Ejemplo: recorrer una matriz
      - Ejemplo: recorrer una lista enlazada

---

### REGLAS COMPLEJIDAD

1. ``Se ignoran las constantes.``
2. ``Siempre se determina el peor caso.``

---

### COMPLEJIDADES ALGORITMITCAS TOP

- **Top 1** = Menor tiempo de ejecución.
- **Top 7** = Mayor tiempo de ejecución.

1. O(1) => Constante.
2. O(log(n)) => Logaritmica.
3. O(n) => Lineal.
4. O(n log(n)) => Logaritmica.
5. O(n^2) => Cuadratica.
6. O(2^n) => Exponencial.
7. O(!N) => Factorial.
