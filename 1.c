Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los
dos enteros.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("El producto de los dos numeros es: %d", num1*num2);
    return 0;
}
