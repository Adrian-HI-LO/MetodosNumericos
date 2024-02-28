#include <stdio.h>
int main()
{
    printf("Problema Uno\n");
    double a = 1.0 / 3.0;
    double b = 3.0 / 5.0;
    double c = 1.0 / 30.0;
    double d = 23.0 / 30.0;
    double operacion = a + b + c / d; //((a + b + c) / d)
    printf("La operacion es: %.4lf\n", operacion);
    printf("\n");
    //
    printf("Problema Dos\n");
    double operacionDos = 5.0 + (2.0 / (1.0 / (1 + (2.0 / (2.0 - (1.0 / 4.0)))))); //((5 + (2.0/1))/(1+(2/(2-(1/4)))));
    printf("La operacion dos: %.3lf\n", operacionDos);
    return 0;
}