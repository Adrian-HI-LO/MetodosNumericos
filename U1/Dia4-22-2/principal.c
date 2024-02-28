#include <stdio.h>
int main()
{
    int calificacion;
    puts("Ingrese su Calificacion: ");
    scanf("%d", &calificacion);
    (calificacion >= 80) ? printf("\nFelicidades, Aprobaste\n") : printf("\nReprobaste\n");

    return 0;
}
// s => cadena de caracteres.
// u => Entero decimal con signo.
// Calificacion
/*
    int calificacion;
    puts("Ingrese su Calificacion: ");
    scanf("%d", &calificacion);
    (calificacion >= 70) ? printf("\nAprobaste\n") : printf("\nReprobaste\n");
*/