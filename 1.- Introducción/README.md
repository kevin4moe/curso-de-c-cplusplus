# Introducción

Un lenguaje de programación es un conjunto de reglas que permite al usuario escribir instrucciones, que puedan ser copiladas y ejecutadas por una computadora.

## Conceptos básicos

### ¿Qué es C y C++?
C es un lenguaje de propósito general. Es conocido por su eficiencia y versatilidad, y ha sido ampliamente utilizado en el desarrollo de sistemas operativos, aplicaciones de software de bajo nivel y más. C es un lenguaje de programación estructurado que utiliza una sintaxis clara y simple, aunque no es complicado de aprender su potencial se encuentra en la manipulación de memoria por medio de punteros.

C++ es una extensión del lenguaje C, cuenta con todas las ventajas de C, pero permite realizar abstracciones de forma más "sencilla", usa el paradigma de programación orientada a objetos (POO), lo que permite la creación de programas más modulares y reutilizables. La sintaxis no cambia por lo que no hay problema al pasar de C a C++, pero no se puede utilizar funciones de C++ en C.

### ¿Qué diferencia un lenguaje de bajo nivel con uno de alto nivel?
C es un lenguaje de nivel intermedio, esto es debido a que debe ser interpretado previamente (copilado) para que la computadora lo entienda.

Los **lenguajes de bajo nivel** están más cerca de la arquitectura de la computadora y su hardware. Requieren una comprensión profunda de la máquina y tienden a ser específicos de la arquitectura. Los lenguajes de bajo nivel incluyen el lenguaje ensamblador o el binario. Son más difíciles de aprender y de depurar, pero permiten un control preciso sobre la memoria y el hardware.

Los **lenguajes de alto nivel** están diseñados para ser más accesibles y fáciles de entender para los programadores. Utilizan una sintaxis más legible y abstracta, lo que permite escribir código de manera más rápida y eficiente.

## ¿Por qué C?
Aprender C es una inversión valiosa en tus habilidades como programador, ya que te proporciona una base sólida, un mayor control sobre el hardware y una amplia gama de oportunidades de desarrollo, desde sistemas hasta aplicaciones de alto rendimiento. Además, te prepara para comprender y aprender otros lenguajes de programación de manera más efectiva.

- **Fundamentos de la Programación**
Su sintaxis y conceptos son simples pero poderosos, lo que facilita la comprensión de la programación en su conjunto.

- **Comunidad y Recursos Abundantes**
Es uno de los lenguajes de programación más antiguos y ampliamente utilizados, lo que significa que hay una gran comunidad de desarrolladores y una abundancia de recursos en línea, tutoriales y bibliotecas disponibles.

- **Preparación para Otros Lenguajes**
Proporciona una base sólida para aprender otros lenguajes de programación, incluidos C++, Java y C#. Muchos conceptos en otros lenguajes tienen sus raíces en C.

- **Desarrollo de Software de Alto Rendimiento**
Para aplicaciones que requieren una ejecución rápida y un uso eficiente de los recursos, como videojuegos, motores de renderización y software de simulación.
<!-- ### ¿Un bite o un byte?
Un byte es un conjunto de 8 bits, mientras un bit solo puede ser 0 o 1. A una serie de bytes lo podemos denominar lenguaje máquina, está seria la forma en que la computadora puede entender nuestras instrucciones.

Durante el curso deberemos tener muy claro estos conceptos ya que C/C++ trabaja de directamente con los bytes en memoria. -->

## Primeros pasos en C/C++
### Hola Mundo
Normalmente al iniciar lo más sencillo es empezar con imprimir un "Hola Mundo" en pantalla

```c++
/* Importar bibliotecas estándar 
código escrito por otras personas que nosotros utilizamos */
#include <stdio.h>

/* Función principal del programa */
int main() 
{
	/* printf: Comando para imprimir en pantalla */ 
	printf("Hola mundo\n");
	
	/* Fin de la función principal del programa */
	return 0;
}

```

### Código paso a paso

1. **#include <stdio.h>**: Esta línea es una directiva de preprocesador que indica al compilador que incluya la biblioteca estándar de entrada/salida (stdio.h) en el programa. Esta biblioteca proporciona funciones para la entrada y salida de datos, como printf y scanf.

2. **int main()**: Aquí comienza la definición de la función principal del programa, que se llama main. Todas las aplicaciones en C comienzan su ejecución desde la función main.
	- La palabra clave **int antes de main** indica que la función devuelve un valor entero.

3. **{}**: Estas llaves {} marcan el inicio y el final del bloque de código de la función main.
	- Todo lo que esté dentro de estas llaves forma parte del cuerpo de la función.

4. **printf("Hola mundo\n");**: Esta línea utiliza la función printf para imprimir el texto "Hola mundo" en la consola.
	- La función **printf** es una función de la biblioteca stdio.h que toma una cadena de formato (en este caso, "Hola mundo\n") y muestra su contenido en la pantalla.
	- La secuencia **\n** representa un carácter especial que indica un salto de línea, lo que hace que el siguiente texto se muestre en una nueva línea.

5. **return 0;**: Esta línea indica que la función main está terminando y devuelve un valor entero de 0 al sistema operativo. 
	- En C, un valor de retorno de 0 generalmente significa que el programa se ejecutó correctamente. Otros valores de retorno pueden indicar errores o resultados específicos.
