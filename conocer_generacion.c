#include <stdio.h>
#define ANIO_ACTUAL 2024

int main(void) {
    int edadU;
    void conoceTuGeneracion(int edad);
    
    printf("Ingresa tu edad: ");
    scanf("%d", &edadU);
    conoceTuGeneracion(edadU);
    printf("Fin del programa.\n");
    return 0;
}

void conoceTuGeneracion(int edad) {
    
    if (edad < 95) {
        
        int anioNacimiento = ANIO_ACTUAL - edad;
        
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
        
    } else {
        printf("¡Error!, la edad no es válida.\n");
    }
}
