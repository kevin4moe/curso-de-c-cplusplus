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

    // Utilizando la formula para calcular la altura de un objeto lanzado, calcula el valor de h.
    h = 0;
  }

  return 0;
}