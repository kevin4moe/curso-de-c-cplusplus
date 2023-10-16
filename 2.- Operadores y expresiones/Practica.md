# Practica operadores y expresiones

## Ejercicio 1

Usando C, analiza el orden de las operaciones y comprueba el resultado de las siguientes operaciones.

```c
x = 7 + 3 * 6 / 2 -1;
x = 15 //Resultado

y = 2 % 2 + 2 * 2 - 2 / 2;
y = 3 //Resultado

z = (3 * 9 * (3 + (9 * 3/ (3)))); 
z = 324 //Resultado
```

## Ejercicio 2

Investiga las siguientes funciones de la biblioteca `math.h`, en nuestro próximo proyecto nos serán de utilidad.

1. abs
2. fabs
3. ceil
4. floor
5. pow
6. sqrt
7. exp
8. log
9. cos
10. acos
11. sin
12. asin
13. tan
14. atan2

## Ejercicio 3

```c
#include <stdio.h>

int main()
{
  float h = 100.0; // Altura
  float v = 2.5;   // Velocidad
  float t;         // Tiempo
  float a = 0.2;   // Aceleración

  // Bucle for, inicia con el valor t, al final de cada repetición aumenta un 0.1, termina cuando es mayor que 2.1
  for (t = 1.0; t <= 2.1; t = t + 0.1)
  {
    printf("t = %f h = %f\n", t, h); // Imprime el tiempo y la altura

    // Utilizando la fórmula para calcular la altura de un objeto lanzado, calcula el valor de h.
    h = 0;
  }

  return 0;
}
```
