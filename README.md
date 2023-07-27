# generador-password
Este código en C++ es un generador de contraseñas que permite al usuario elegir entre tres opciones para generar diferentes tipos de contraseñas:

Generar contraseña normal: Genera una contraseña de longitud 8 que contiene letras minúsculas, letras mayúsculas y dígitos numéricos.

Generar contraseña fuerte: Genera una contraseña de longitud 12 que contiene letras minúsculas, letras mayúsculas, dígitos numéricos y algunos caracteres especiales como !@#$%^&*.

Generar contraseña de fuerza bruta: Genera una contraseña de longitud 6 que contiene solo letras minúsculas. Esta opción es más débil y se incluye para fines ilustrativos.

El programa utiliza la función rand() de la biblioteca <cstdlib> junto con srand(time(nullptr)) para generar valores aleatorios y así construir las contraseñas. Sin embargo, cabe mencionar que el uso de rand() para la generación de contraseñas seguras no es recomendado en ambientes de producción, ya que puede no ser suficientemente seguro para evitar patrones predecibles.

El programa muestra un menú al usuario con las opciones disponibles para generar las contraseñas. Luego, dependiendo de la opción seleccionada por el usuario, se utiliza una función específica para generar la contraseña y se muestra en pantalla.

El bucle do-while permite repetir el proceso hasta que el usuario elija la opción "4" para salir del programa.
