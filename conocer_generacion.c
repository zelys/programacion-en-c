// Declaramos la biblioteca que vamos a utilizar
#include <stdio.h>

// Declaramos el valor constante
#define ANIO_ACTUAL 2024

int main(void) {
    // Declaramos la variable de entrada
    int edad;

    // Declaramos la función que vamos a realizar
    void obtenerGeneracion(int edad);
    
    // Solicitamos los datos de entrada
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    // Llamamos a nuestra función
    obtenerGeneracion(edad);

    printf("Fin del programa.\n");

    return 0;
}

// Construimos la función
void conoceTuGeneracion(int edad) {
    // Evaluamos la edad es menor a 95
    if (edad < 95) {
        // Realizamos la  resta
        int anioNacimiento = ANIO_ACTUAL - edad;
        // Evaluamos el rango de años
        if (anioNacimiento > 1929 && anioNacimiento < 1949) {
                printf("Perteneces a la Generación niños de posguerra (1930 - 1948).\n");
            } else if (anioNacimiento > 1948 && anioNacimiento < 1969) {
                printf("Perteneces a la Generación Baby boomers (1949-1968).\n");
            } else if (anioNacimiento > 1968 && anioNacimiento < 1981) {
                printf("Perteneces a la Generación X (1969-1980).\n");
            } else if (anioNacimiento > 1980 && anioNacimiento < 1995) {
                printf("Perteneces a la Generación Millennials (1981-1994).\n");
            } else if (anioNacimiento > 1994 && anioNacimiento < 2010) {
                printf("Perteneces a la Generación Z (1995 - 2010).\n");
            } else {
                printf("Perteneces a la Generación Alpha (2010 - Hoy).\n");
            }
    // Entonces edad es mayor a 95 o no es un número
    } else {
        printf("¡Error!, la edad no es válida.\n");
    }
}
