# ESTRUCTURAS DE CONTROL EN C

## Instrucción general de la actividad:
---

¿Preguntar la edad al usuario y que, al digitar, dependiendo de su edad, le entregue mensajes sobre su generación:

- Generación niños de posguerra (1930-1948)
- Baby boomers (1949-1968)
- Generación X (1969-1980)
- Los millennials (1981-1993)
- Z y Alpha, las generaciones actuales

Deberá calcular a qué generación corresponde y mostrar en un mensaje el nombre, dependiendo de la edad que ingrese

Se debe considerar implementar las siguientes estructuras de control:

- Estructura de decisión if
- Estructura de decisión if...else
- Estructura de decisión switch

## Desarrollo de la actividad
---

### Requerimientos

1. Preguntar la edad al usuario.
2. La edad debe ser un número menor a 95.
3. Según su edad, mostrar un mensaje indicando a qué generación pertenece el usuario.

### Entrada

El usuario ingresará por consola su edad, por lo que debemos calcular su año de nacimiento, restando el valor de edad al valor del año actual.

### Salida

Si no hay errores en el dato ingresado por el usuario, el programa evalúa el año de nacimiento del usuario y según sea el caso, debe mostrar un mensaje que indicando a que generación pertenece.

### Ejemplo de entrada y salida
---

| Entrada | Salida |
| --- | --- |
| 37 | Perteneces a la Generación Millennials (1981-1993) |
| 45 | Perteneces a la Generación X (1969 - 1980) |
| 76 | Perteneces a la Generación niños de posguerra (1930 - 1948) |
| 26 | Perteneces a la Generación Z (1995 - 2010) |
| veinte | ¡Error!, la edad no es válida. |
| 101 | ¡Error!, la edad no es válida. |

## Pseudocódigo
---

**Algoritmo conocerGeneracion:**

1. Leer edad del usuario
2. Llamar a la función obtenerGeneracion()
3. Imprimir “Fin del programa”.

**Fin Algoritmo**

**Función obtenerGeneracion():**

1. Recibe como parámetro el valor de edad.
2. Si edad es menor a 95 continuar. Si-No Imprimir error y salir.
3. Calcular el año de nacimiento según edad.
4. Si el año pertenece al rango de años de una generación. Imprimir mensaje y salir.

**Fin Función**

## Desarrollo del código en C
---
1. Creamos un nuevo proyecto que llamaremos **conocerGeneracion.**
2. En la cabecera del archivo **main**, declaramos la librería que utilizaremos, y luego la constante **ANIO_ACTUAL** con el valor **2024**.
3. Dentro del el método **main()** declaramos la variable que queremos capturar, en este caso **edad** de tipo **int** (entero).
4. Luego, declaramos la función **obtenerGeneracion()**, de tipo **void** que recibe un parámetro de tipo **int**.
5. Con el método **printf** solicitamos al usuario que ingrese su edad.
6. Con el método **sacanf** leemos la entrada del usuario y asignamos el valor a la variable **edad.**
7. Usamos la función **obtenerGeneracion()**, y le pasamos como parámetro la variable **edad**.
8. Por último imprimimos un mensaje indicando que el programa ha finalizado.

### Código de la función
---
1. Con una estructura condicional **if** evaluamos si el valor de la variable **edad** es menor a 95 que es el rango máximo soportado. En caso que el valor sea mayor (o si es de tipo char) se imprime un mensaje de error y finaliza la función.
2. Si el valor de **edad** es menor a 95, declaramos la variable **anioNacimiento** y la inicializamos con el valor de **ANIO_ACTUAL** menos el valor de **edad**.
3. A continuación con una estructura condicional **if else-if** evaluamos si el valor de la variable **anioNacimiento** es mayor y menor al rango de años indicado para cada generación. 
4. Según el rango que coincida, se imprime el mensaje correspondiente y finaliza la función.



