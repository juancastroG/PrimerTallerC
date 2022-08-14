
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int dias, semanas, anios;
    printf("Ingrese los dias: ");
    scanf("%d", &dias);
    anios = dias/365;
    dias = dias%365;
    semanas = dias/7;
    dias = dias%7;
    printf("El numero de anios es: %d", anios);
    printf("El numero de semanas es: %d", semanas);
    printf("El numero de dias es: %d", dias);
    return 0;
}