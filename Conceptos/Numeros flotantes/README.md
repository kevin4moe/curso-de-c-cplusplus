# ¿Por qué los numeros flotantes no son exactos?

Cuando realizamos ecuaciones con números flotantes nos llegará a pasar que no son valores muy precisos, un error común puede ser al usar `0.1` que en C nos da aproximadamente `0.099998`, esto se debe a C solo asigna 4 bytes de precisión, y al utilizar la base 2, tenemos que existen fracciones que aunque pueden ser representadas con el sistema binario, el espacio que asigna C a esos números es limitado y por eso existen situaciones donde, para evitar errores, C tiene que retornar el valor que pudo ser almacenado en 4 bytes.

Este tipo de problemas son cosa de las ciencias de la computación, lenguajes más modernos utilizan diferentes sistemas para dar los valores que esperamos, aunque no por eso tienen la solución definitiva, dependerá de cada caso encontrar la mejor solución para tratar este problema.

## Fuentes de interés

1. <https://www.omnicalculator.com/math/binary-fraction>
2. <https://stackoverflow.com/a/21895757>
3. <https://www.tutorialspoint.com/cprogramming/c_data_types.htm>
4. <https://stackoverflow.com/a/27621622>
