#include <stdio.h>

int main()
{
    int edad;
    printf("Ingrese su Edad: \n");
    scanf("%d", &edad);

    if (edad >= 18)
    {
        printf("\nEres mayor de Edad\n");
    }
    else
    {
        printf("\nEres menor de Edad\n");
    }

    return 0;
}
// Ejemplo Personal
/*
    int numeros[10];
    int tamanio = sizeof(numeros) / sizeof(numeros[0]);

    printf("Ingrese 10 numeros enteros:\n");
    for (int i = 0; i < tamanio; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros pares:\n");
    for (int i = 0; i < tamanio; i++)
    {
        if (numeros[i] % 2 == 0 && numeros[i] != 0)
        {
            printf("%d ", numeros[i]);
        }
    }

    printf("\nNumeros impares:\n");
    for (int i = 0; i < tamanio; i++)
    {
        if (numeros[i] % 2 != 0)
        {
            printf("%d ", numeros[i]);
        }
    }
    return 0;
*/
// Dos
/*
double diametro = 10
double radio = diametro / 2;
    double pi = 3.1416, area;     //Dio 1,000M
    area = (radio * radio) * pi;
    printf("%lf\n", area);*/

// Tres
/*double a = 3.1;
double A = 4.5;
printf("%lf\n", a + A);*/

// Cuatro
/*printf("%d\n", 19 * 365 * 24 * 60 * 60);*/ // Dio 1000

// Multiplicacion y Divison
/*
//Multiplicacion de 3 numeros Enteros
    int a = 2;
    int resultado = a * a * a;
    printf("a = %d, la multiplicacion da de resultado = %d\n", a, resultado);  //Dio 500M por mul y div.
    //Divison de dos numeros enteros
    int b = 4, c = 2;
    printf("El resultado de la Divison es: %d\n", b / c);*/

// PostINcremento
/*
    int var = 1;
    int contador = 1;

printf("%d\n", var++);
printf("%d\n", var);
printf("\n");
printf("%d\n", contador--);
printf("%d\n", contador);
*/

// Pre Incremento
/*int var = 1;
int contador = 1;

printf("%d\n", ++var);
printf("%d\n", var);
printf("\n");
printf("%d\n", --contador);
printf("%d\n", contador);*/

// Diferencias
/*
    int c = 5;
    printf("c: %d\n", c);
    printf("c++: %d\n", c++);
    printf("c: %d\n", c);

    printf("\n");

    int d = 5;
    printf("c: %d\n", d);
    printf("++d: %d\n", ++d);
    printf("d: %d\n", d);
*/
// Presedencia de Operadores.
/*  int p = 5;
    int q = 1;
    int r = 2;
    int w = 3;
    int x = 9;
    int y = 6;
    int z;
    z = p * r % q + w / x - y;
    printf("%d\n", z);*/