# Aclaración complejidad Merge Sort (nLog(n))



En cada iteración de la función `mergeSort`, el arreglo se divide en dos subarreglos de tamaño aproximadamente igual. Esto se hace recursivamente hasta que cada subarreglo tiene un solo elemento, y luego se combinan en orden creciente usando la función `merge`.

La complejidad de tiempo de Merge Sort proviene de la cantidad de veces que se divide el arreglo en subarreglos y de la cantidad de trabajo que se realiza al combinar los subarreglos. 


### IMPORTANTE:

En cada nivel de la recursión, el tamaño de los subarreglos se divide aproximadamente por la mitad, lo que significa que el número total de niveles de recursión será **O(log n)**. En cada nivel de la recursión, se realiza **O(n)** trabajo para combinar los subarreglos. Por lo tanto, la complejidad de tiempo total del algoritmo es **O(n log n)**.
