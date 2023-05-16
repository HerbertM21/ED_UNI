# Complejidad algorítmica

### Operaciones elementales

Las operaciones elementales son las operaciones más básicas que se pueden realizar en un algoritmo. Estas operaciones son las que se utilizan para medir la complejidad temporal de un algoritmo.

**Las operaciones elementales son:**

- ```Operaciones de asignación: O(1)```
- ```Operaciones de comparación: O(1)```
- ```Operaciones aritméticas: O(1)```
- ```Operaciones lógicas: O(1)```
- ```Acceso a una posición de un array: O(1)```

### Cantidad de operaciones elementales

---

=> **Bucle for**: ```cpp for(int i = 0; i < n; i=i+1)```

Ese bucle for, tiene 3 operaciones elementales:
- ```Operación de asignación: [int i = 0]``` => **O(1)**
- ```Operación de comparación: [i < n]``` => **O(1)**
- ```Operación de incremento: [i=i+1]``` => **O(1)**

La operaciòn ´´´i=i+1´´´ se puede dividir en dos operaciones elementales:
- ```Operación de suma: [i+1]``` => **O(1)**
- ```Operación de asignación: [i=]``` => **O(1)**
  
Siendo estas dos operaciones ```O(1)``` se puede decir que la operación ```i=i+1``` es ```O(1)```.

---

=> **Matriz**: ```cpp int matriz[n][m]```

Esa matriz, tiene 2 operaciones elementales en el caso de acceso a posiciones:

- ```Acceso a la posición [n] de un array: [matriz[n]]``` => **O(1)**
- ```Acceso a la posición [m] de un array: [matriz[n][m]]``` => **O(1)**

---

### Ejemplos de operaciones elementales

```c
for (int i = 0; i < n; i++) {
    // Codigo
}
```

Ese bucle for, tiene 3 operaciones elementales:
- ```Operación de asignación: [int i = 0]``` => **O(1)**
- ```Operación de comparación: [i < n]``` => **O(1)**
- ```Operación de incremento: [i++]``` => **O(1)**

Esas 3 operaciones elementales se ejecutan n veces, por lo que la complejidad temporal de ese bucle for es: **O(n)** omitiendo la **constante 3**.


```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // Codigo
    }
}
```

Cada bucle for, tiene 3 operaciones elementales:
- ```Operación de asignación: [int i = 0]``` => **O(1)**
- ```Operación de comparación: [i < n]``` => **O(1)**
- ```Operación de incremento: [i++]``` => **O(1)**
- ```Operación de asignación: [int j = 0]``` => **O(1)**
- ```Operación de comparación: [j < n]``` => **O(1)**
- ```Operación de incremento: [j++]``` => **O(1)**

Esas 6 operaciones elementales se ejecutan n veces, por lo que la complejidad temporal de ese bucle for es: **O(n^2)** omitiendo la **constante 6**.
