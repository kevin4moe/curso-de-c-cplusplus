# Operadores y expresiones

Los operadores y expresiones en el lenguaje de programación C son fundamentales para realizar cálculos, tomar decisiones y manipular datos. Existen al menos 10 tipos de operadores en C, pero solo vamos a ver los 5 principales:

1. **Operadores Aritméticos:**
   - `+` (suma)
   - `-` (resta)
   - `*` (multiplicación)
   - `/` (división)
   - `%` (módulo, devuelve el residuo de una división)

2. **Operadores de Asignación:**
   - `=` (asignación)
   - `+=` (suma y asignación)
   - `-=` (resta y asignación)
   - `*=` (multiplicación y asignación)
   - `/=` (división y asignación)
   - `%=` (módulo y asignación)

3. **Operadores de Incremento y Decremento:**
   - `++` (incremento)
   - `--` (decremento)

4. **Operadores Relacionales:**
   - `==` (igual a)
   - `!=` (no igual a)
   - `<` (menor que)
   - `>` (mayor que)
   - `<=` (menor o igual que)
   - `>=` (mayor o igual que)

5. **Operadores Lógicos:**
   - `&&` (y lógico)
   - `||` (o lógico)
   - `!` (no lógico)

Los operadores aritméticos son iguales que los que usamos en cualquier problema matemático, solo hay que recordar que cada operación tiene su propia prioridad, y al igual que en cualquier calculadora se pueden utilizar los paréntesis para dar mayor prioridad a segmentos específicos de una operación.

## Operadores de Asignación

Antes de describir su función vamos a definir que son las variables. Las variables son la forma que tiene C de guardar valores, ya sean números, flotantes, o texto, entre otros tipos de datos, específicamente C nos pide que le digamos por anticipado que tipo de valor va a guardar cada variable, por ejemplo:

```c
// Primero se asigna el tipo de dato, luego el nombre de la variable y al ultimo el valor.
int entero = 10;
float flotante = 5.5;
char caracter = "a";

// También podemos no asignar un valor al final.
int entero;
float flotante;
char caracter;

// En el caso de los números, podemos usar el resto de los operadores de asignación.
int entero = 1;

entero += 10; // Ahora entero vale 11.

entero *= 2; // Ahora entero vale 22.

entero %= 2; // Ahora entero vale 0.
 
```

## Operadores de Incremento y Decremento

Aumenta una unidad o restan una unidad a cualquier variable numérica, son particularmente útiles en los bucles.

```c
#include <stdio.h>

int main() {
    int contador = 0;  // Inicializamos un contador a cero.

    for (int i = 0; i < 10; i++) {
        // El bucle se ejecutará 10 veces.
        contador++;  // Incrementamos el contador en cada iteración.
    }

    printf("El bucle se ejecutó %d veces.\n", contador);

    return 0;
}
```

## Operadores Relacionales y Lógicos

Los operadores relacionales nos sirven para identificar las variables numéricas por medio de condiciones específicas, ya sea mayor que, igual que, menor o igual que, entre otros. Mientras los operadores lógicos son como las clases de lógica de toda la vida, **&&** si ambos valores son verdadero, **||** si solo un valor es verdadero, y **!** que solo es un NO, ósea verdadero es falso y falso es verdadero.

Algo que hay que mencionar es que en programación **0** es falso y **1** es verdadero, siempre.

```c
#include <stdio.h>

int main() {
    int numero = 1;  // Inicializamos el número en 1
    int contadorPares = 0;  // Inicializamos un contador de números pares en 0

    while (numero <= 10) {
        if (numero % 2 == 0 && numero >= 4) {
            // Verificamos si el número es par (divisible por 2) y está en un rango mayor o igual a 4
            printf("%d es un número par y está en el rango.\n", numero);
            contadorPares++; // Incrementamos el contador si es par y está en el rango
        }
        else if (numero % 2 == 0) {
            printf("%d es un número par, pero está fuera del rango.\n", numero);
        }
        else {
            printf("%d es un número impar.\n", numero);
        }
        numero++; // Pasamos al siguiente número en el rango
    }

    printf("En el rango del 1 al 10, hay %d números pares en el rango >= 4.\n", contadorPares);

    return 0;
}

```

Un ejemplo algo complicado, pero nos ayudara a entender la tarea.
